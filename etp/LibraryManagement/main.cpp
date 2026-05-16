#include <iostream>
#include <string>
using namespace std;

struct Task {
    string title;
    Task* next;
};

Task* head = nullptr;

void addTask(string title) {
    Task* newTask = new Task();
    newTask->title = title;
    newTask->next = nullptr;

    if (head == nullptr) {
        head = newTask;
    } else {
        Task* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newTask;
    }
    cout << "Task added.\n";
}

void viewTasks() {
    if (head == nullptr) {
        cout << "No tasks in the list.\n";
        return;
    }

    Task* temp = head;
    int index = 1;
    while (temp != nullptr) {
        cout << index++ << ". " << temp->title << endl;
        temp = temp->next;
    }
}

void deleteTask(int pos) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    if (pos == 1) {
        Task* temp = head;
        head = head->next;
        delete temp;
        cout << "Task deleted.\n";
        return;
    }

    Task* current = head;
    Task* previous = nullptr;

    for (int i = 1; i < pos && current != nullptr; i++) {
        previous = current;
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Invalid position.\n";
        return;
    }

    previous->next = current->next;
    delete current;
    cout << "Task deleted.\n";
}

int main() {
    int choice;
    string title;
    int pos;

    while (true) {
        cout << "\n1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter task title: ";
                getline(cin, title);
                addTask(title);
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                cout << "Enter task position to delete: ";
                cin >> pos;
                deleteTask(pos);
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice.\n";
        }
    }
}
