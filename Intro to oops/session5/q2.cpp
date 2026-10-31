#include <iostream>
using namespace std;

class SocialMediaUploader {
public:
    virtual void uploadContent() {
        cout << "Uploading content..." << endl;
    }
};

class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "Uploading photo or reel to Instagram" << endl;
    }
};

class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent() override {
        cout << "Uploading video to YouTube" << endl;
    }
};

int main() {
    InstagramUploader i;
    YouTubeUploader y;

    i.uploadContent();
    y.uploadContent();

    return 0;
}
