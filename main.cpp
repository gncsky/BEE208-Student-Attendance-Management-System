#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

class StudentAttendance {
private:
    string studentName;
    string indexNumber;
    char attendanceStatus;

public:
    void setStudentDetails() {
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Index Number: ";
        getline(cin, indexNumber);

        do {
            cout << "Attendance Status (P/A): ";
            cin >> attendanceStatus;
            attendanceStatus = toupper(attendanceStatus);

            if (!validateStatus()) {
                cout << "Invalid status! Please enter P or A.\n";
            }

        } while (!validateStatus());
    }

    bool validateStatus() {
        return (attendanceStatus == 'P' || attendanceStatus == 'A');
    }

    void displayStudentRecord() {
        cout << left << setw(25) << studentName
             << setw(15) << indexNumber
             << attendanceStatus << endl;
    }

    char getAttendanceStatus() {
        return attendanceStatus;
    }

    string getStudentName() {
        return studentName;
    }

    string getIndexNumber() {
        return indexNumber;
    }
};

string classifyAttendance(double percentage) {
    if (percentage >= 80)
        return "Good class attendance";
    else if (percentage >= 60)
        return "Moderate class attendance";
    else
        return "Poor class attendance";
}

int main() {


    cout << " STUDENT ATTENDANCE MANAGEMENT SYSTEM\n";

    string courseName;
    string attendanceDate;

    cout << "Enter Course Name: ";
    getline(cin, courseName);

    cout << "Enter Attendance Date: ";
    getline(cin, attendanceDate);

    int numberOfStudents;

    cout << "Enter Number of Students: ";
    cin >> numberOfStudents;

    vector<StudentAttendance> students;

    int present = 0;
    int absent = 0;

    for (int i = 0; i < numberOfStudents; i++) {

        cout << "\nStudent " << i + 1 << endl;

        StudentAttendance s;
        s.setStudentDetails();

        if (s.getAttendanceStatus() == 'P')
            present++;
        else
            absent++;

        students.push_back(s);
    }

    double percentage = ((double)present / numberOfStudents) * 100;

    string classStatus = classifyAttendance(percentage);
    
    
    cout << "ATTENDANCE SUMMARY\n";

    cout << "Course: " << courseName << endl;
    cout << "Date: " << attendanceDate << endl;
    cout << "Total Students: " << numberOfStudents << endl;
    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;
    cout << fixed << setprecision(2);
    cout << "Attendance Percentage: " << percentage << "%" << endl;
    cout << "Class Attendance Status: " << classStatus << endl;

    ofstream file("attendance_report.txt");

    file << "STUDENT ATTENDANCE MANAGEMENT SYSTEM\n\n";
    file << "Course: " << courseName << endl;
    file << "Date: " << attendanceDate << endl << endl;

    file << left << setw(25) << "Student Name"
         << setw(15) << "Index Number"
         << "Status\n";

    for (int i = 0; i < students.size(); i++) {
        file << left
             << setw(25) << students[i].getStudentName()
             << setw(15) << students[i].getIndexNumber()
             << students[i].getAttendanceStatus() << endl;
    }

    file << "\nTotal Students: " << numberOfStudents << endl;
    file << "Present: " << present << endl;
    file << "Absent: " << absent << endl;
    file << fixed << setprecision(2);
    file << "Attendance Percentage: " << percentage << "%" << endl;
    file << "Class Attendance Status: " << classStatus << endl;

    file.close();

    cout << "\nReport saved successfully to attendance_report.txt\n";

    return 0;
}