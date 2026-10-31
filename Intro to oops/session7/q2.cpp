//cobine all 4 task

#include <iostream>
#include <fstream>
using namespace std;

class Match {
public:
    string team_a, team_b;
    int runs_a, runs_b;
};


void saveMatches() {
    Match m[6] = {
        {"Lions", "Sharks", 182, 175},
        {"Tigers", "Eagles", 150, 140},
        {"Kings", "Wolves", 200, 200},
        {"Panthers", "Falcons", 165, 170},
        {"Bulls", "Hawks", 190, 180},
        {"Dragons", "Rockets", 145, 155}
    };

    ofstream file("matches.txt");

    if (file.is_open()) {
        for (int i = 0; i < 6; i++) {
            file << m[i].team_a << " "
                 << m[i].runs_a << " "
                 << m[i].team_b << " "
                 << m[i].runs_b << endl;
        }
        file.close();
    }
}


int loadMatches(Match m[]) {
    ifstream file("matches.txt");

    if (!file) {
        return -1;
    }

    int count = 0;

    while (count < 20 &&
           file >> m[count].team_a
                >> m[count].runs_a
                >> m[count].team_b
                >> m[count].runs_b) {
        count++;
    }

    file.close();
    return count;
}


void showScorecard() {
    Match m[20];

    int count = loadMatches(m);

    if (count == -1 || count == 0) {
        cout << "No matches saved yet" << endl;
        return;
    }

    for (int i = 0; i < count; i++) {
        if (m[i].runs_a > m[i].runs_b) {
            cout << m[i].team_a << " "
                 << m[i].runs_a << " beat "
                 << m[i].team_b << " "
                 << m[i].runs_b << endl;
        }
        else if (m[i].runs_b > m[i].runs_a) {
            cout << m[i].team_b << " "
                 << m[i].runs_b << " beat "
                 << m[i].team_a << " "
                 << m[i].runs_a << endl;
        }
        else {
            cout << m[i].team_a << " and "
                 << m[i].team_b << " tied" << endl;
        }
    }
}


void addMatch() {
    Match m;

    cout << "Enter Team A: ";
    cin >> m.team_a;

    cout << "Enter Runs A: ";
    cin >> m.runs_a;

    cout << "Enter Team B: ";
    cin >> m.team_b;

    cout << "Enter Runs B: ";
    cin >> m.runs_b;

    ofstream file("matches.txt", ios::app);

    if (file.is_open()) {
        file << m.team_a << " "
             << m.runs_a << " "
             << m.team_b << " "
             << m.runs_b << endl;

        file.close();

        cout << "Match added successfully!" << endl;
    } else {
        cout << "Unable to open file!" << endl;
    }
}


void highestScore() {
    Match m[20];

    int count = loadMatches(m);

    if (count == -1 || count == 0) {
        cout << "No matches saved yet" << endl;
        return;
    }

    int highest = -1;
    string team;

    for (int i = 0; i < count; i++) {
        if (m[i].runs_a > highest) {
            highest = m[i].runs_a;
            team = m[i].team_a;
        }

        if (m[i].runs_b > highest) {
            highest = m[i].runs_b;
            team = m[i].team_b;
        }
    }

    cout << "Highest Score: " << highest << endl;
    cout << "Team: " << team << endl;
}

int main() {
    int choice;

    do {
        cout << "\n===== CRICKET SCORECARD =====" << endl;
        cout << "1. Show Scorecard" << endl;
        cout << "2. Add Match" << endl;
        cout << "3. Highest Score" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                showScorecard();
                break;

            case 2:
                addMatch();
                break;

            case 3:
                highestScore();
                break;

            case 4:
                cout << "Thank you!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}

