#include <iostream>
using namespace std;

class Product {
public:
    string productName;
    double price;
    float rating;

    Product(string n, double p, float r) {
        productName = n;
        price = p;
        rating = r;
    }

    void displayInfo() {
        cout << "Product Name: " << productName << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "Rating: " << rating << endl;
    }
};

int main() {
    Product p1("Headphones", 1500, 4.5);
    p1.displayInfo();

    return 0;
}
