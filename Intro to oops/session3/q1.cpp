#include <iostream>
using namespace std;

class Playlist {
public:
    string name;

    Playlist() {
        name = "My Favourites";
        cout << "Welcome to your Playlist!" << endl;
    }
};

int main() {
    Playlist p1;
    cout << "Playlist Name: " << p1.name << endl;

    return 0;
}
