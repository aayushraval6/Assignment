#include <iostream>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist(string n, string date, bool p) {
        name = n;
        createdOn = date;
        isPublic = p;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Created On: " << createdOn << endl;
        cout << "Is Public: " << (isPublic ? "True" : "False") << endl;
    }
};

int main() {
    Playlist p1("My Songs", "19-10-2026", true);
    p1.display();

    return 0;
}
