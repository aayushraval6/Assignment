#include <iostream>
#include <fstream>
using namespace std;

class Playlist {
public:
    string name;

    Playlist(string n) {
        name = n;
        cout << "Playlist created!" << endl;
    }

    ~Playlist() {
        ofstream file("autosave.txt");
        file << name;
        file.close();

        cout << "Playlist saved to file!" << endl;
    }
};

int main() {
    Playlist p1("My Favourites");

    return 0;
}
