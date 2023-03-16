#include <iostream>
#include <vector>

using namespace std;

struct Student {
    int id;
    int numCredits;
    double cgpa;
};

int main() {
    vector<Student> students(10);

    for (int i = 0; i < 10; i++) {
        cout << "Enter details of student " << i+1 << ":\n";
        cout << "ID: ";
        cin >> students[i].id;
        cout << "Number of credits completed: ";
        cin >> students[i].numCredits;
        cout << "CGPA: ";
        cin >> students[i].cgpa;
    }
    cout << "\nStudents with CGPA greater than 3.75:\n";
    for (int i = 0; i < 10; i++) {
        if (students[i].cgpa > 3.75) {
            cout << students[i].id << endl;
        }
    }
    cout << "\nStudents with more than 50 credits completed:\n";
    for (int i = 0; i < 10; i++) {
        if (students[i].numCredits > 50) {
            cout << students[i].id << endl;
        }
    }

    return 0;
}
