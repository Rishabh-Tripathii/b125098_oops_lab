#include <iostream>
using namespace std;
class AttendanceManager;
class Classroom {
private:
    string className;
    int totalStudents;
    int presentStudents;
    bool attendanceStatus;
public:
    void input() {
        cout << "Enter class name: ";
        getline(cin, className);
        cout << "Enter total students: ";
        cin >> totalStudents;
        cout << "Enter present students: ";
        cin >> presentStudents;
        cout << "Enter attendance status (1 = Completed, 0 = Not Completed): ";
        cin >> attendanceStatus;
    }
    friend class AttendanceManager;
};
class AttendanceManager {
public:
    void displayInfo(Classroom &c) {
        cout << "\n--- Classroom Information ---\n";
        cout << "Class Name: " << c.className << endl;
        cout << "Total Students: " << c.totalStudents << endl;
        cout << "Present Students: " << c.presentStudents << endl;
        cout << "Attendance Status: "
             << (c.attendanceStatus ? "Completed" : "Not Completed")
             << endl;
    }
    void updatePresentStudents(Classroom &c) {
        if(c.attendanceStatus){
            cout<<"Attendance already completed"<<endl;
            return;
        }
        int present;
        cout << "Enter new number of present students: ";
        cin >> present;
        if (present >= 0 && present <= c.totalStudents) {
            c.presentStudents = present;
            cout << "Present student count updated." << endl;
        }
        else {
            cout << "Invalid number of students." << endl;
        }
    }
    void markAttendanceCompleted(Classroom &c) {
        c.attendanceStatus = true;
        cout << "Attendance marked as completed." << endl;
    }
    void displayAttendanceStatus(Classroom &c) {
        cout << "Attendance Status: "
             << (c.attendanceStatus ? "Completed" : "Not Completed")
             << endl;
    }
    void displayAbsentStudents(Classroom &c) {
        int absent = c.totalStudents - c.presentStudents;
        cout << "Absent Students: " << absent << endl;
    }
};
int main() {
    Classroom c;
    AttendanceManager manager;
    c.input();
    manager.displayInfo(c);
    manager.displayAbsentStudents(c);
    manager.updatePresentStudents(c);
    manager.markAttendanceCompleted(c);
    manager.displayAttendanceStatus(c);
    manager.displayAbsentStudents(c);
    return 0;
}