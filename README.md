# Student Attendance Management System

 Group Members
 
 LOLI GODFRED – 01245009B – Project Lead
 
 CLEMENT TETTEH –01246456B– Algorithm Writer
 
 ATTAH EMMANUEL MAWUENA – 01245482B – Pseudocode Writer
 
 NTIAMOAH CALEB KONADU– 01243401B – Flowchart Designer
 
 NEQSON-CARTEY GORDON SKYLO -01242530B– C++ Programmer
 
  EHUREN HENRY- 01243785B – C++ Programmer
 
 Henry Tetteh – 01246479B – Testing Lead

- Student 8 – Index Number – GitHub Manager

- Student 9 – Index Number – Documentation Lead

 DENNIS OBENG  – 012433475B – Presentation Lead

 # Problem Statement
Manual attendance records are prone to errors, delays, and difficulty in analysis.
This project solves the problem by creating a simple C++ program that records attendance, calculates statistics, and generates a report.

 # Aim
To design and implement a Student Attendance Management System in C++ that records attendance, calculates statistics, classifies performance, and saves results into a text file.

# Objectives
- Record student attendance for a class session.
- Accept student name, index number, and attendance status (P/A).
- Count present and absent students.
- Calculate attendance percentage.
- Classify attendance performance.
- Generate and save a report (`attendance_report.txt`).
- Document project in Markdown and submit via GitHub.

# How the System Works
1. User enters course name, date, and number of students.
2. For each student, the program records name, index number, and attendance status.
3. Attendance status is validated (only P or A allowed).
4. Program counts present and absent students.
5. Attendance percentage is calculated.
6. Class performance is classified (Good, Moderate, Poor).
7. Report is displayed and saved to `attendance_report.txt`.

# Algorithm Summary
Start the program.
Display the system title
Input course details.
Input attendance date
Input number of students
Initialize counters:
Loop through each student
Calculate attendance percentage:
Classify attendance performance:
Display attendance summary:
Save report
End the program.

# BEGIN
    DISPLAY "Student Attendance Management System"

    INPUT courseName
    INPUT attendanceDate
    INPUT numberOfStudents

    SET presentCount = 0
    SET absentCount = 0

    FOR student = 1 TO numberOfStudents DO
        INPUT studentName
        INPUT indexNumber
        INPUT attendanceStatus

 IF attendanceStatus = 'P' THEN
            presentCount = presentCount + 1
        ELSE IF attendanceStatus = 'A' THEN
            absentCount = absentCount + 1
        ELSE
            DISPLAY "Invalid status! Enter P or A"
            REPEAT input for this student
        END IF
    END FOR

    attendancePercentage = (presentCount / numberOfStudents) * 100

    IF attendancePercentage >= 80 THEN
        classStatus = "Good class attendance"
    ELSE IF attendancePercentage >= 60 THEN
        classStatus = "Moderate class attendance"

ELSE
        classStatus = "Poor class attendance"
    END IF

    DISPLAY "ATTENDANCE SUMMARY"
    DISPLAY courseName, attendanceDate, numberOfStudents
    DISPLAY presentCount, absentCount, attendancePercentage, classStatus

    SAVE summary TO "attendance_report.txt"

END

# FLOWCHAT

![Content Placeholder 4](ContentPlaceholder4.jpg)

# C++ Concepts  Used

cin / cout → Input and output
Variables & data types → Strings, integers, chars
Conditionals → Checking if status is P or A
Loops → Iterating through student records
Functions → For validation, calculation, saving report
Classes & Objects → Organizing student data
Arrays/Vectors → Storing multiple records
File handling (ofstream) → Writing to attendance_report.txt

- Input/Output (`cin`, `cout`)
- Variables and data types
- Strings for names and index numbers
- Conditionals for status validation
- Loops for multiple student records
- Functions for calculation and file saving
- Classes and objects for student records
- Arrays/Vectors for storing records
- File handling (`ofstream`)
- Comments for readability

<!-- Slide number: 11 -->
## 📸 Screenshots
- Sample Input: ![Sample Input](screenshots/sample_input.png)
- Sample Output: ![Sample Output](screenshots/sample_output.png)
## 🚧 Challenges Faced
- Handling invalid input for attendance status.
- Ensuring correct percentage calculation.
- Organizing files properly in GitHub.
**Solutions:**
- Added validation checks.
- Used floating-point division for percentage.
- Followed structured repository format.

<!-- Slide number: 12 -->
## ✅ Conclusion
The project successfully demonstrates how C++ can be used to automate attendance management, reduce errors, and generate clear reports for lecturers.
