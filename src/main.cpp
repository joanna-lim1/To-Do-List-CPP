#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

const string FILE_NAME = "tasks.txt";

// Function to load tasks from the file
void loadTasks(vector<string>& tasks) {
    ifstream file(FILE_NAME);
    string task;
    while (getline(file, task)) {
        tasks.push_back(task);
    }
    file.close();
}

// Function to save tasks to the file
void saveTasks(const vector<string>& tasks) {
    ofstream file(FILE_NAME);
    for (const string& task : tasks) {
        file << task << endl;
    }
    file.close();
}

// Function to add a new task
void addTask(vector<string>& tasks) {
    string task;
    cout << "Enter a new task: ";
    getline(cin, task);
    tasks.push_back(task);
    saveTasks(tasks);
    cout << "Task added successfully!" << endl;
}

// Function to display all tasks
void viewTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available." << endl;
        return;
    }
    cout << "Your Tasks:" << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

// Function to remove a task
void removeTask(vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks to remove." << endl;
        return;
    }
    int index;
    viewTasks(tasks);
    cout << "Enter the task number to remove: ";
    cin >> index;
    cin.ignore();
    if (index < 1 || index > tasks.size()) {
        cout << "Invalid selection." << endl;
        return;
    }
    tasks.erase(tasks.begin() + index - 1);
    saveTasks(tasks);
    cout << "Task removed successfully!" << endl;
}

int main() {
    vector<string> tasks;
    loadTasks(tasks);
    int choice;
    
    do {
        cout << "\nTo-Do List" << endl;
        cout << "1. View Tasks" << endl;
        cout << "2. Add Task" << endl;
        cout << "3. Remove Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        
        switch (choice) {
            case 1: viewTasks(tasks); break;
            case 2: addTask(tasks); break;
            case 3: removeTask(tasks); break;
            case 4: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4);
    
    return 0;
}

