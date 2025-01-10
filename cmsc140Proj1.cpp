/*
 * Class: CMSC140 CRN
 * Instructor: Dr.Chawen-Huey Wu
 * Project1
 * Description: (Give a brief description for Project)
 * Due Date:sep 26,2021
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Etmy Barbosa
 

 * Pseudocode or Algorithm for the program:
    (be sure to indent items with control structure)
    (need to match flowchart submitted in documentation)
 1.display "Hello, welcome to Montgomery College! My name is Nao. May I have your name?" to the screen
  2.get name and save into a variable
  3.display "Nice to have you with us today, ---!" and the user input(name)to the screen
  4.display follow to the screen:
    "Let me impress you with a small game.
    Give me the age of an important person or a pet to you.
    Please give me only a number:"
  5.get number and save into a variable
  6.display "You have entered input(number).” and “If this is for a person, the age can be expressed as:”to the screen
  7.calculate the # of months by multiplying the user input(number) by 12
  8.calculate the # of days by multiplying the user month by 30
  9.calculate the # of hours by multiplying the user day by 24
  10.calculate the # of minutes by multiplying the user hours by 60
  11.calculate the # of seconds by multiplying the user minutes by 60
  12.calculate the # of years for dogs in relation to human age by multiplying the user input(number) by 7
  13.calculate the # of years for gold fish in relation to human age by multiplying the user input(number) by 5
  14.display the results of all calculation in the same other
  15.display "Let's play another game, (name). Give me a whole number" to the screen :(name) being the user input
  16.get number and save into a variable(v1) - save to int
  17.display "Very well. Give me another whole number." to the screen
  18.get number and save into a variable(v2) - save to int
  19.display "Using the operator '+' in C++, the result of (v1) + (v2)) is " and add v1 and v2
  20.display "Using the operator '/', the result of (v1) / (v2) is "and divide v1 by v2
  21.convert one of the numbers into a double
  22.display "however, the result of (v1).0 / (v2).0 is "and divide v1 by v2
  23.display follow to the screen:
    "Thank you for testing my program!!
    PROGRAMMER: Etmy Barbosa
    CMSC140 Common  Project 1
    Due Date: 26/09/2021"
 
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    // the comment number will refer to the Pseudocode
    
    // create variables
    int age, month, day, hour, minute, second, dogAge, fishAge, num1, num2;
    string name;
    const string robotName= "Nao";
    const string pName= "Etmy Barbosa"; // Programmer’s Name
    const string dueDate= "09/26/2021";
    const int aNum = 1; //Assignment Number
    const int oneDogYear= 7;
    const int oneGoldFishYear= 5;
    const int daysPerMounth= 30;
    
    //#1
    cout<<"Hello, welcome to Montgomery College! My name is "<< robotName<<". May I have your name?"<<endl;
    
    //#2
    getline(cin, name);
    cin.ignore();
    
    //#3
    cout<< "Nice to have you with us today, "<< name<< "!"<<endl;
    
    //#4
    cout<< "Let me impress you with a small game."<<endl;
    cout<< "Give me the age of an important person or a pet to you."<<endl;
    cout<< "Please give me only a number:"<<endl;
    
    //#5
    cin>>age;
    
    //#6
    cout<< "You have entered "<< age<< "."<<endl;
    cout<< "If this is for a person, the age can be expressed as:"<<endl;
    
    //#7
    month= age*12;
    
    //#8
    day= month*daysPerMounth;
    
    //#9
    hour= day*24;
    
    //#10
    minute= hour*60;
    
    //#11
    second= minute*60;
    
    //#12
    dogAge= age*oneDogYear;
    
    //#13
    fishAge= age*oneGoldFishYear;
    
    //#14
    cout<< age<< " years"<<endl;
    cout<< "or "<< month<< " months"<<endl;
    cout<< "or about "<< day<< " days"<<endl;
    cout<< "or about "<< hour<< " hours"<<endl;
    cout<< "or about "<< minute<< " minutes"<<endl;
    cout<< "or about "<< second<< " seconds."<<endl;
    cout<< "If this is for a dog, it is "<< dogAge<< " years old in human age."<<endl;
    cout<< "If this is for a gold fish, it is "<< fishAge<< " years old in human age."<<endl;
    
    //#15
    cout<< "Let's play another game, "<< name<< ". Give me a whole number"<<endl;
    
    //#16
    cin>>num1;
    
    //#17
    cout<< "Very well. Give me another whole number."<<endl;
    
    //#18
    cin>>num2;
    
    //#19
    cout<< "Using the operator '+' in C++, the result of "<< num1<< " + "<< num2<< " is "<< num1+num2<<endl;
    
    //#20
    cout<< "Using the operator '/' in C++, the result of "<< num1<< " / "<< num2<< " is "<< num1/num2<<endl;
    
    //#21 & #22
    cout<< "however, the result of "<< num1<< ".0 / "<< num2<< ".0 is "<< static_cast<double>(num1)/num2<<endl;

    //#23
    cout<< "Thank you for testing my program!!"<< endl;
    cout<< "PROGRAMMER: " << pName<< endl;
    cout<< "CMSC140 Common  Project "<< aNum<< endl;
    cout<< "Due Date: "<< dueDate<< endl;
    
    return 0;
}
