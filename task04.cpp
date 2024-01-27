//////////////////////////TO DO LIST////////////////
#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Function prototypes
void addTask(vector<string>& tasks);
void viewTasks(const vector<string>& tasks);
void deleteTask(vector<string>& tasks);

int main() {
    vector<string> tasks;
    int choice;

    do {
        cout << "\nTo-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                deleteTask(tasks);
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

void addTask(vector<string>& tasks) {
    string task1;
    cout << "Enter task:";
    cin>>task1;
    getline(cin, task1); // Use getline to read entire line with spaces
    tasks.push_back(task1);
    cout << "Task added successfully!" << endl;
}

void viewTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks to display." << endl;
    } else {
        cout << "Your tasks:" << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

void deleteTask(vector<string>& tasks) {
    int taskIndex;
    viewTasks(tasks);
    cout << "Enter the number of the task to delete: ";
    cin >> taskIndex;

    if (taskIndex > 0 && taskIndex <= tasks.size()) {
        tasks.erase(tasks.begin() + taskIndex - 1);
        cout << "Task deleted successfully!" << endl;
    } else {
        cout << "Invalid task number." << endl;
    }
}