#include <iostream>
using namespace std;

class Movie {
public:
    string name;
    int year;

    Movie(string n, int y) {
        name = n;
        year = y;
    }

    Movie(const Movie &m) {
        name = m.name;
        year = m.year;
    }

    void display() {
        cout << "Movie: " << name << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Movie m1("3 Idiots", 2009);
    Movie m2(m1);

    cout << "Original Movie:" << endl;
    m1.display();

    cout << "\nCopied Movie:" << endl;
    m2.display();

    return 0;
}
