#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNumber;

    void displayStudent() {
        displayInfo();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Teacher : public Person {
public:
    string subject;

    void displayTeacher() {
        displayInfo();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    s.name = "Alice";
    s.age = 20;
    s.rollNumber = 101;
    cout << "--- Student ---" << endl;
    s.displayStudent();

    Teacher t;
    t.name = "Mr. Smith";
    t.age = 35;
    t.subject = "Mathematics";
    cout << "--- Teacher ---" << endl;
    t.displayTeacher();

    return 0;
}
