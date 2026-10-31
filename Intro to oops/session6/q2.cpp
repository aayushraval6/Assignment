// this combines all 4 question

#include <iostream>
using namespace std;

// Base Abstract Class
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

    virtual double tariff() = 0;

    virtual void show() {
        cout << "Room No: " << getRoomNo() << endl;
        cout << "Guest: " << getGuest() << endl;
        cout << "Nights: " << getNights() << endl;
    }

    virtual ~Room() {}
};

// Standard Room
class StandardRoom : public Room {
public:
    StandardRoom(int r, string g, int n)
        : Room(r, g, n) {}

    double tariff() override {
        return getNights() * 1000;
    }
};

// Deluxe Room
class DeluxeRoom : public Room {
protected:
    bool breakfast;
    double ac_charge;
    bool has_lounge;

public:
    DeluxeRoom(int r, string g, int n)
        : Room(r, g, n) {
        breakfast = false;
        ac_charge = 200;
        has_lounge = false;
    }

    void setBreakfast(bool b) {
        breakfast = b;
    }

    void setAcCharge(double a) {
        ac_charge = a;
    }

    void setHasLounge(bool l) {
        has_lounge = l;
    }

    double tariff() override {
        return getNights() * 1500 + ac_charge
             + (breakfast ? 300 : 0)
             + (has_lounge ? 500 : 0);
    }

    void show() override {
        Room::show();
        cout << "Breakfast: " << breakfast << endl;
        cout << "AC Charge: " << ac_charge << endl;
        cout << "Lounge: " << has_lounge << endl;
    }
};

// Suite Room
class SuiteRoom : public DeluxeRoom {
public:
    SuiteRoom(int r, string g, int n)
        : DeluxeRoom(r, g, n) {}

    double tariff() override {
        return getNights() * 2500 + ac_charge
             + (breakfast ? 300 : 0)
             + (has_lounge ? 500 : 0);
    }
};

int main() {

    StandardRoom r1(101, "Aayush", 2);
    StandardRoom r2(102, "Rahul", 3);

    DeluxeRoom r3(201, "Amit", 2);
    DeluxeRoom r4(202, "Raj", 3);

    SuiteRoom r5(301, "Karan", 2);
    SuiteRoom r6(302, "Jay", 4);

    // Using public setters
    r3.setBreakfast(true);
    r3.setAcCharge(300);
    r3.setHasLounge(true);

    r5.setBreakfast(true);
    r5.setAcCharge(500);
    r5.setHasLounge(true);

    // Testing invalid nights
    r1.set_nights(0);
    r1.set_nights(-3);

    // Room pointer array
    Room* rooms[6] = {
        &r1, &r2, &r3, &r4, &r5, &r6
    };

    cout << "\nHOTEL BOOKING DETAILS\n";

    for (int i = 0; i < 6; i++) {
        cout << "\n------------------" << endl;

        rooms[i]->show();

        cout << "Total Tariff: Rs. "
             << rooms[i]->tariff() << endl;
    }

    return 0;
}

