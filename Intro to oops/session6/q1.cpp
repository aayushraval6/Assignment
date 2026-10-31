
#include <iostream>
using namespace std;

class Room {
private:
    int room_no;
    string guest;
    int nights;

public:
    Room(int r, string g, int n) {
        room_no = r;
        guest = g;
        nights = n;
    }

    int getRoomNo() {
        return room_no;
    }

    string getGuest() {
        return guest;
    }

    int getNights() {
        return nights;
    }

    void set_nights(int n) {
        if (n < 1) {
            cout << "Invalid nights! Old value kept." << endl;
        } else {
            nights = n;
        }
    }

    virtual double tariff() {
        return nights * 1000;
    }

    void show() {
        cout << "Room No: " << getRoomNo() << endl;
        cout << "Guest: " << getGuest() << endl;
        cout << "Nights: " << getNights() << endl;
    }
};

int main() {

    cout << r1->nights << endl;
    Room r1(101, "Aayush", 2);

    r1.show();

    r1.set_nights(0);
    r1.set_nights(-3);
    r1.set_nights(4);

    r1.show();

    return 0;
}
