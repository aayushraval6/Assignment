#include <iostream>
using namespace std;

class PaymentProcessor {
public:
    void processPayment(double amount) {
        cout << "Normal Payment" << endl;
        cout << "Final Amount: Rs. " << amount << endl;
    }

    void processPayment(double amount, string coupon) {
        cout << "Coupon: " << coupon << endl;
        cout << "Final Amount: Rs. " << amount - 100 << endl;
    }
};

int main() {
    PaymentProcessor p;

    p.processPayment(1000);
    p.processPayment(1000, "SAVE100");

    return 0;
}
