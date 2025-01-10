/*
 Created by Etmy Barbosa on 9/24/21.
 */

#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main(int argc, const char * argv[]) {
    
    string name;
    int sq;//Syllabus Quiz
    int cq1;//Chapter 1 Quiz
    int cq2;//Chapter 2 Quiz
    int cw1;//Programming Classwork1
    int cw2;//Programming Classwork2
    int fs;//Final Score:
    double a;//Average Score
    
    
    cout<< "Enter the Student's name: ";
    getline(cin,name);
    cout<< endl;
    
    cout<< "Enter  Syllabus Quiz Score ranging from 0 to 100: ";
    cin>> sq;
    cout<< endl;
    
    cout<< "Enter  Chapter 1 Quiz ranging from 0 to 100: ";
    cin>> cq1;
    cout<< endl;
    
    cout<< "Enter Chapter 2 Quiz ranging from 0 to 100: ";
    cin>> cq2;
    cout<< endl;
    
    cout<< "Enter Programming Classwork1 ranging from 0 to 100:  ";
    cin>> cw1;
    cout<< endl;
    
    cout<< "Enter Programming Classwork2 ranging from 0 to 100:  ";
    cin>> cw2;
    cout<< endl;
    
    fs = sq+cq1+cq2+cw1+cw2;
    a=fs/5.0;
    cout<< name<< ": Final Score:"<< fs<< " Average Score:"<< a<< endl;
    cout<< endl;
    
    return 0;
}
