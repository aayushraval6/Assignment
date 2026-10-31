#include <iostream>
using namespace std;

class ProductSearch {
public:
    void searchProduct(string name) {
        cout << "Searching product: " << name << endl;
    }

    void searchProduct(string name, string category) {
        cout << "Product: " << name << endl;
        cout << "Category: " << category << endl;
    }
};

int main() {
    ProductSearch p;

    p.searchProduct("Mobile");
    p.searchProduct("Laptop", "Electronics");

    return 0;
}
