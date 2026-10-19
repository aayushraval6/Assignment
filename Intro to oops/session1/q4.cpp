#include <iostream>
#include <vector>
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

class TaskList {
private:
    vector<Task> tasks;

public:
    void addTask(string title) {
        tasks.push_back(Task(title));
    }

    void markTaskDone(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].markDone();
        }
    }

    void showTasks() {
        for (int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main() {
    TaskList list;

    list.addTask("Study C++");
    list.addTask("Complete assignment");
    list.addTask("Read book");

    list.markTaskDone(1);

    cout << "Task List:\n";
    list.showTasks();

    return 0;
}
