/*
 Created by Etmy Barbosa on 9/15/21.
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {

    
    //Define three variables: studentName, courseTitle, courseNum, and letterGrade with the data types of string, int, and char, respectively
    string studentName, courseTitle;
    int courseNum;
    char letterGrade;

    //Ask the user to enter the full name of a student
    cout<< "Enter full name: ";

    //Get the student's full name and store it in 'studentName'
    getline(cin, studentName);
    
    //Ask the user to enter the full title of the student's college course
    cout<< "\nEnter full course title: ";

    //Get the full title of the college course and store it in 'courseTitle'
    getline(cin, courseTitle);
    
    //Ask the user for the course number of the college course
    cout<< "\nEnter course number: ";

    //Get the course number of the college course and store it in 'courseNum'
    cin>> courseNum;
    
    //Ask the user for the letter grade the student received upon completion of the course
    cout<< "\nEnter course grade: ";

    //Get the letter grade and store it in 'letterGrade' using the get member function of cin
    cin>> letterGrade;
    cout<< endl;
    

    //Display the information in the following format:
    cout<< "\nStudent Name: "<< studentName<< endl;
    cout<< "Course: "<< courseTitle<< endl;
    cout<< "Course #: "<< courseNum<< endl;
    cout<< "Grade: "<< letterGrade<< endl;
    
    return 0;
}
