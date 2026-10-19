#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    string username;
    int followers;

    SocialMediaUser(string u, int f) {
        username = u;
        followers = f;
    }
};

class YouTuber : public SocialMediaUser {
public:
    string channelName;

    YouTuber(string u, int f, string c)
        : SocialMediaUser(u, f) {
        channelName = c;
    }

    void uploadVideo(string title) {
        cout << "Video " << title
             << " uploaded to " << channelName << endl;
    }
};

int main() {
    YouTuber y("Aayush", 500, "Aayush Gaming");

    y.uploadVideo("Minecraft Gameplay");

    return 0;
}
