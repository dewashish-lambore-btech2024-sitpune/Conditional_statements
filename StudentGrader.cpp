#include<iostream>
#include<iomanip>
using namespace std;

bool isValidMark(float mark) {
    return mark >= 0 && mark <= 100;
}

string getGrade(float percentage) {
    if (percentage >= 95) return "O";
    else if (percentage >= 90) return "A+";
    else if (percentage >= 80) return "A";
    else if (percentage >= 70) return "B+";
    else if (percentage >= 60) return "B";
    else if (percentage >= 50) return "C";
    else if (percentage >= 40) return "D";
    else return "F";
}

int main(){
    float marks[5];
    string subjects[] = {"Chemistry", "Mathematics", "Physics", "C-Programming", "Python"};
    
    cout << "Enter marks for each subject (out of 100):" << endl;
    
    for(int i = 0; i < 5; i++) {
        cout << subjects[i] << ": ";
        cin >> marks[i];
        
        if(!isValidMark(marks[i])) {
            cout << "Invalid marks! Please enter marks between 0-100." << endl;
            return 1;
        }
    }
    
    float total = 0;
    for(int i = 0; i < 5; i++) {
        total += marks[i];
    }
    
    float percentage = total / 5;
    string grade = getGrade(percentage);
    
    cout << "\n--- RESULT ---" << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
    
    if(grade == "F") {
        cout << "Status: FAILED" << endl;
    } else {
        cout << "Status: PASSED" << endl;
    }
    
    return 0;
}
