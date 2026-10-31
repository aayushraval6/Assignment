
#include <iostream>
#include <fstream>
using namespace std;

// Item Class
class Item {
private:
    string name;
    string category;
    double price;
    int quantity;

public:
    void setDetails(string n, string c, double p, int q) {
        name = n;
        category = c;
        price = p;
        quantity = q;
    }

    string getName() {
        return name;
    }

    string getCategory() {
        return category;
    }

    double getPrice() {
        return price;
    }

    int getQuantity() {
        return quantity;
    }

    void setPrice(double p) {
        price = p;
    }

    void setQuantity(int q) {
        quantity = q;
    }
};

// Inventory Class
class Inventory {
private:
    Item items[50];
    int count;

public:
    Inventory() {
        count = 0;
    }

    // Add Item
    void add_item() {
        if (count >= 50) {
            cout << "Inventory full!" << endl;
            return;
        }

        string name, category;
        double price;
        int quantity;

        cout << "Enter item name: ";
        cin >> name;

        cout << "Enter category: ";
        cin >> category;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;

        items[count].setDetails(name, category, price, quantity);
        count++;

        cout << "Item added successfully!" << endl;
    }

    // List Items
    void list_items() {
        if (count == 0) {
            cout << "Inventory is empty!" << endl;
            return;
        }

        cout << "\n===== INVENTORY LIST =====\n";

        for (int i = 0; i < count; i++) {
            cout << "\nName: " << items[i].getName();
            cout << "\nCategory: " << items[i].getCategory();
            cout << "\nPrice: Rs. " << items[i].getPrice();
            cout << "\nQuantity: " << items[i].getQuantity();
            cout << endl;
        }
    }

    // Edit Item
    void edit_item() {
        string name;
        cout << "Enter item name to edit: ";
        cin >> name;

        for (int i = 0; i < count; i++) {
            if (items[i].getName() == name) {
                double price;
                int quantity;

                cout << "Enter new price: ";
                cin >> price;

                cout << "Enter new quantity: ";
                cin >> quantity;

                items[i].setPrice(price);
                items[i].setQuantity(quantity);

                cout << "Item updated successfully!" << endl;
                return;
            }
        }

        cout << "Not found" << endl;
    }

    // Delete Item
    void delete_item() {
        string name;
        cout << "Enter item name to delete: ";
        cin >> name;

        for (int i = 0; i < count; i++) {
            if (items[i].getName() == name) {

                for (int j = i; j < count - 1; j++) {
                    items[j] = items[j + 1];
                }

                count--;

                cout << "Item deleted successfully!" << endl;
                return;
            }
        }

        cout << "Not found" << endl;
    }

    // Low Stock Report and Total Stock Value
    void low_stock_report() {
        double total = 0;

        cout << "\n===== LOW STOCK REPORT =====\n";

        for (int i = 0; i < count; i++) {
            total += items[i].getPrice() * items[i].getQuantity();

            if (items[i].getQuantity() < 10) {
                cout << items[i].getName()
                     << " - Quantity: "
                     << items[i].getQuantity() << endl;
            }
        }

        cout << "Total Stock Value: Rs. " << total << endl;
    }

    // Save Items to File
    void save() {
        ofstream file("inventory.txt");

        if (!file.is_open()) {
            cout << "Unable to save inventory!" << endl;
            return;
        }

        for (int i = 0; i < count; i++) {
            file << items[i].getName() << " "
                 << items[i].getCategory() << " "
                 << items[i].getPrice() << " "
                 << items[i].getQuantity() << endl;
        }

        file.close();
        cout << "Inventory saved successfully!" << endl;
    }

    // Load Items from File
    void load() {
        ifstream file("inventory.txt");

        if (!file) {
            return;
        }

        count = 0;

        while (count < 50 &&
               file >> ws) {
            string name, category;
            double price;
            int quantity;

            if (!(file >> name >> category >> price >> quantity)) {
                break;
            }

            items[count].setDetails(
                name, category, price, quantity
            );

            count++;
        }

        file.close();
    }
};

// Main Function
int main() {
    Inventory inv;

    inv.load();

    int choice;

    do {
        cout << "\n===== HARDWARE INVENTORY =====\n";
        cout << "1. Add Item" << endl;
        cout << "2. List Items" << endl;
        cout << "3. Edit Item" << endl;
        cout << "4. Delete Item" << endl;
        cout << "5. Low Stock Report" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inv.add_item();
                break;

            case 2:
                inv.list_items();
                break;

            case 3:
                inv.edit_item();
                break;

            case 4:
                inv.delete_item();
                break;

            case 5:
                inv.low_stock_report();
                break;

            case 6:
                inv.save();
                cout << "Thank you for using Inventory System!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}

