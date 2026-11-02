#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    Student(int roll, const string& studentName, float studentMarks)
        : rollNo(roll), name(studentName), marks(studentMarks) {}

    int getRollNo() const {
        return rollNo;
    }

    void display() const {
        cout << left << setw(12) << rollNo
             << setw(25) << name
             << fixed << setprecision(2) << marks << '\n';
    }

    void update(const string& studentName, float studentMarks) {
        name = studentName;
        marks = studentMarks;
    }
};

int findStudent(const vector<Student>& students, int rollNo) {
    for (size_t i = 0; i < students.size(); ++i) {
        if (students[i].getRollNo() == rollNo) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

bool readMarks(float& marks) {
    if (!(cin >> marks)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    if (marks < 0.0f || marks > 100.0f) {
        return false;
    }
    return true;
}

int main() {
    vector<Student> students;
    int choice = 0;

    do {
        cout << "\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1: {
                int rollNo;
                string name;
                float marks;

                cout << "Enter Roll Number: ";
                if (!(cin >> rollNo)) {
                    cout << "Invalid roll number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }

                if (findStudent(students, rollNo) != -1) {
                    cout << "Roll number already exists!\n";
                    break;
                }

                cout << "Enter Name: ";
                getline(cin >> ws, name);

                cout << "Enter Marks (0-100): ";
                if (!readMarks(marks)) {
                    cout << "Invalid marks. Enter a number from 0 to 100.\n";
                    break;
                }

                students.emplace_back(rollNo, name, marks);
                cout << "Student added successfully!\n";
                break;
            }

            case 2:
                if (students.empty()) {
                    cout << "No student records found.\n";
                } else {
                    cout << left << setw(12) << "Roll No"
                         << setw(25) << "Name" << "Marks\n";
                    cout << "-----------------------------------------------\n";
                    for (const Student& student : students) {
                        student.display();
                    }
                }
                break;

            case 3: {
                int rollNo;
                cout << "Enter Roll Number to search: ";
                if (!(cin >> rollNo)) {
                    cout << "Invalid roll number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }

                int index = findStudent(students, rollNo);
                if (index != -1) {
                    cout << "Student found:\n";
                    cout << left << setw(12) << "Roll No"
                         << setw(25) << "Name" << "Marks\n";
                    students[index].display();
                } else {
                    cout << "Student not found!\n";
                }
                break;
            }

            case 4: {
                int rollNo;
                string name;
                float marks;

                cout << "Enter Roll Number to update: ";
                if (!(cin >> rollNo)) {
                    cout << "Invalid roll number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }

                int index = findStudent(students, rollNo);
                if (index == -1) {
                    cout << "Student not found!\n";
                    break;
                }

                cout << "Enter New Name: ";
                getline(cin >> ws, name);

                cout << "Enter New Marks (0-100): ";
                if (!readMarks(marks)) {
                    cout << "Invalid marks. Enter a number from 0 to 100.\n";
                    break;
                }

                students[index].update(name, marks);
                cout << "Record updated successfully!\n";
                break;
            }

            case 5: {
                int rollNo;
                cout << "Enter Roll Number to delete: ";
                if (!(cin >> rollNo)) {
                    cout << "Invalid roll number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }

                int index = findStudent(students, rollNo);
                if (index == -1) {
                    cout << "Student not found!\n";
                } else {
                    students.erase(students.begin() + index);
                    cout << "Record deleted successfully!\n";
                }
                break;
            }

            case 6:
                cout << "Thank you for using the system!\n";
                break;

            default:
                cout << "Invalid choice. Please select 1-6.\n";
        }
    } while (choice != 6);

    return 0;
}
