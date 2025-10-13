#include <bits/stdc++.h>
using namespace std;

typedef struct {
    string nameOfStudent;
    int ageOfStudent;
    double GPAOfStudent;
} StudentData;

int main (){
    int numberOfStudent;
    cin >> numberOfStudent;
    vector<StudentData> inputStudentData;

    int bestIndexOfStudentGPA = -1;
    double bestGPA = 0;

    for (int i = 0; i < numberOfStudent; i++){
        string name, surname;
        cin >> name >> surname;

        string fullNameOfStudent = name + " " + surname;

        int age;
        cin >> age;

        double GPA;
        cin >> GPA;

        if (GPA > bestGPA){
            bestIndexOfStudentGPA = i;
            bestGPA = GPA;
        }


        inputStudentData.push_back({fullNameOfStudent, age, GPA});

    }
    cout << "Name: " << inputStudentData[bestIndexOfStudentGPA].nameOfStudent << endl;
    cout << "Age: " << inputStudentData[bestIndexOfStudentGPA].ageOfStudent << endl;
    cout << "GPA: " << fixed << setprecision(2) << inputStudentData[bestIndexOfStudentGPA].GPAOfStudent << endl;
}