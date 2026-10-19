#include <iostream>
#include <vector>
using namespace std;

class Playlist {
public:
    string name;
    vector<string> songs;

    Playlist(string n) {
        name = n;
    }

    void addSong(string songTitle) {
        songs.push_back(songTitle);
    }

    void displaySongs() {
        cout << "Playlist: " << name << endl;

        for (int i = 0; i < songs.size(); i++) {
            cout << songs[i] << endl;
        }
    }
};

int main() {
    Playlist p1("My Favourite Songs");

    p1.addSong("Kesariya");
    p1.addSong("Heeriye");
    p1.addSong("Apna Bana Le");

    p1.displaySongs();

    return 0;
}
