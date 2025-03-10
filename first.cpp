#include <iostream>
#include <string>
using namespace std;
namespace tsd {
    class MarksSheet {
    private:
        string studentName;
        int rollNumber;
        int marks[5];

    public:
        void inputDetails() {
            cin.ignore();
            cout << "Enter student name: ";
            getline(std::cin, studentName);

            cout << "Enter roll number: ";
            cin >> rollNumber;

            cout << "Enter marks for 5 subjects: ";
            for (int i = 0; i < 5; ++i) {
                cin >> marks[i];
            }
        }

        void displayDetails() const {
            cout << "\nMarks Sheet\n";
            cout << "Student Name: " << studentName << "\n";
            cout << "Roll Number: " << rollNumber << "\n";
            cout << "Marks:\n";
            for (int i = 0; i < 5; ++i) {
                cout << "Subject " << (i + 1) << ": " << marks[i] << "\n";
            }
        }
    };
}

int main() {
    tsd::MarksSheet sheet;
    sheet.inputDetails();
    sheet.displayDetails();

    return 0;
}
