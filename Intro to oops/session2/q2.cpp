#include <iostream>
using namespace std;

class Playlist {
public:
    bool isPublic;

    Playlist(bool p) {
        isPublic = p;
    }

    void togglePublic() {
        isPublic = !isPublic;
        cout << "Is Public: " << (isPublic ? "True" : "False") << endl;
    }
};

int main() {
    Playlist p1(true);

    p1.togglePublic();
    p1.togglePublic();

    return 0;
}
