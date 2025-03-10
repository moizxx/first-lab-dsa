# Classroom Marks

#include <iostream>
using namespace std;

class Classroom {
private:
    string studentName;
    int marks;

public:
    void setDetails(string name, int score) {
        studentName = name;
        marks = score;
    }

    void displayDetails() {
        cout << "Student Name: " << studentName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Classroom student1;
    student1.setDetails("John Doe", 85);
    student1.displayDetails();

    return 0;
}
