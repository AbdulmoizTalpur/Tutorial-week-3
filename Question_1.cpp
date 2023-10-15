#include <iostream>
using namespace std;

int main()
{
    // Read the student's serial number and exam score
    int serialNumber;
    float examScore;
    char grade;

    cout << "Enter student's serial number: ";
    cin >> serialNumber;

    cout << "Enter exam score out of 100: ";
    cin >> examScore;

    // Check if the exam score is valid (0 to 100)
    if (examScore < 0 || examScore > 100)
        cout << "ERROR! Exam score must be between 0 and 100." << endl;
    else if (examScore >= 90)
        grade = 'A';
    else if (examScore >= 80)
        grade = 'B';
    else if (examScore >= 70)
        grade = 'C';
    else if (examScore >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Print the serial number and letter grade
    cout << "Serial Number: " << serialNumber << endl;
    cout << "Letter Grade: " << grade << endl;
}
