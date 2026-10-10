#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    int age;
    float attendance;
    float marks;

public:
    Student() {
        id = 0;
        name = "";
        age = 0;
        attendance = 0;
        marks = 0;
    }

    Student(int i, string n, int a, float att, float m) {
        id = i;
        name = n;
        age = a;
        attendance = att;
        marks = m;
    }

    void display() const {
        cout << "Student ID   : " << id << endl;
        cout << "Name         : " << name << endl;
        cout << "Age          : " << age << endl;
        cout << "Attendance   : " << attendance << "%" << endl;
        cout << "Marks        : " << marks << endl;
        cout << "-----------------------------" << endl;
    }

    int getId() const {
        return id;
    }
};

class SchoolManagementSystem {
private:
    Student students[100];
    int count;

public:
    SchoolManagementSystem() {
        count = 0;
    }

    void addStudent() {
        if (count >= 100) {
            cout << "\nStudent limit reached.\n";
            return;
        }

        int id, age;
        string name;
        float attendance, marks;

        cout << "\nEnter Student ID: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (students[i].getId() == id) {
                cout << "\nStudent ID already exists.\n";
                cout << "Student not added.\n";
                return;
            }
        }

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Attendance (%): ";
        cin >> attendance;

        cout << "Enter Marks: ";
        cin >> marks;

        students[count] = Student(id, name, age, attendance, marks);
        count++;

        cout << "\nStudent added successfully!\n";
    }

    void displayStudents() {
        if (count == 0) {
            cout << "\nNo student records found.\n";
            return;
        }

        cout << "\n================================\n";
        cout << "       STUDENT RECORDS\n";
        cout << "================================\n";

        for (int i = 0; i < count; i++) {
            students[i].display();
        }
    }

    void searchStudent() {
        int id;

        cout << "\nEnter Student ID to search: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (students[i].getId() == id) {
                cout << "\nStudent Found!\n";
                cout << "-----------------------------\n";
                students[i].display();
                return;
            }
        }

        cout << "\nStudent not found.\n";
    }
};

int main() {
    SchoolManagementSystem school;
    int choice;

    do {
        cout << "\n================================\n";
        cout << "    SCHOOL MANAGEMENT SYSTEM\n";
        cout << "================================\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "================================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            school.addStudent();
            break;

        case 2:
            school.displayStudents();
            break;

        case 3:
            school.searchStudent();
            break;

        case 4:
            cout << "\nThank you for using the system!\n";
            break;

        default:
            cout << "\nInvalid choice. Please enter 1 to 4.\n";
        }

    } while (choice != 4);

    return 0;
}

