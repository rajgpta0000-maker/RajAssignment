#include <iostream>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    void getPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person {
private:
    int marks;

public:
    void getStudentData() {
        getPersonData();  
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayStudentData() {
        displayPersonData();  
        cout << "Marks: " << marks << endl;
    }
};


class Teacher : public Person {
private:
    string subject;

public:
    void getTeacherData() {
        getPersonData();  
        cout << "Enter subject: ";
        cin >> subject;
    }

    void displayTeacherData() {
        displayPersonData();  
        cout << "Subject: " << subject << endl;
    }
};

main() {
    Student s;
    Teacher t;

    cout << "\nEnter Student Details:\n";
    s.getStudentData();

    cout << "\nEnter Teacher Details:\n";
    t.getTeacherData();

    cout << "\nStudent Details:\n";
    s.displayStudentData();

    cout << "\nTeacher Details:\n";
    t.displayTeacherData();

  
}
