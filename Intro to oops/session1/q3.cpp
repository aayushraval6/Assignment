#include <iostream>
using namespace std;

class Task {
public:
    string title;
    bool isDone;

    Task(string t) {
        title = t;
        isDone = false;
    }

    void markDone() {
        isDone = true;
    }

    void display() {
        cout << title << " - ";

        if (isDone)
            cout << "DONE";
        else
            cout << "PENDING";

        cout << endl;
    }
};

int main() {
    Task t1("Study C++");

    t1.display();

    t1.markDone();

    t1.display();

    return 0;
}
