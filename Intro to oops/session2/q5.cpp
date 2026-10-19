#include <iostream>
using namespace std;

struct OrderDetails {
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(OrderDetails order) {
        orderId = order.orderId;
        restaurantName = order.restaurantName;
        isDelivered = order.isDelivered;
    }

    void display() {
        cout << "Order ID: " << orderId << endl;
        cout << "Restaurant: " << restaurantName << endl;
        cout << "Delivered: "
             << (isDelivered ? "True" : "False") << endl;
    }
};

int main() {
    OrderDetails order = {101, "Pizza House", false};

    FoodOrder f1(order);

    f1.display();

    return 0;
}
