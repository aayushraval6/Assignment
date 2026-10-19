#include <iostream>
using namespace std;

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(int id, string name, bool delivered) {
        orderId = id;
        restaurantName = name;
        isDelivered = delivered;
    }

    void markDelivered() {
        isDelivered = true;
        cout << "Order " << orderId << " has been delivered!" << endl;
    }
};

int main() {
    FoodOrder f1(101, "Pizza House", false);

    f1.markDelivered();

    return 0;
}
