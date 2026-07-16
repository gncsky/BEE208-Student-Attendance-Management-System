# Student Attendance Management System — Pseudocode

```
BEGIN
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
```
