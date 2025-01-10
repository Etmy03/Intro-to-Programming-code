/*
 * Class: CMSC140 CRN
 * Instructor: Dr.Chawen-Huey Wu
 * Project4
 * Description: save the days enployes messsed over a year
 /Users/etmybarbosa/Desktop/CMSC 140/codes/Etmy_Barbosa_pr4/Etmy_Barbosa_pr4 * Due Date:Nov 2,2021
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Etmy Barbosa
 

  1.Create the NumOfEmployees function:
  2.[do]In the function print “Please enter the number of employees in the company: ”
  3.[If] the number is less than 1 print “The number of employees must not be less than 1”
  4.[while] the user input is greater or equal to 0
  5.Create the function TotDaysAbsent function with one perimeter that accepts (int for the number of employees):
  6.Create a loop to get every employee information using the number of employees
  7.In this function print “please enter an employee ID: ”;
  8.In this function print “Please enter the number of days this employee was absent: ”
  9.[if] the user input is less than 0 print “The number of days must not be negative”
  10.[else] add the user input to a total of days messes
  11.Save the user input to employeeAbsences.txt
  12.Create the function AverageAbsent function with one perimeter that accepts (int for the number of employees, and int total number of days absent)
  13.In the unction divide the total number of days absent by number of employees
  14.And return the result (in double)
  15.On the main function:
  16-----
  17.call NumOfEmployees function
  18.Save the user input
  19.Call TotDaysAbsent and use the user’s input as perimeter
  20.Input in the file --- “the (number of employees) employees were absent a total of () days.”
  21/Call the  AverageAbsent function
  22.Input in the file --- “the average number of days absent is (AverageAbsent return).”

 
  22.Print:
 "Thank you for testing my program!!
 PROGRAMMER: Etmy Barbosa
 CMSC140 Common  Project 4
 Due Date: 11/16/2021"
*/


#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

//1
void NumOfEmployees(){
    int numOfEmp;
    do{
        
        //2
        cout<<"Please enter the number of employees in the company:";
        cin>> numOfEmp;
        cout<<endl;
        
        //3
        if(numOfEmp<1){
            cout<<"The number of employees must not be less than 1";
        }
    }
    while(numOfEmp>=0);
    
}

int main(int argc, const char * argv[]) {
    //16
    ofstream myFile;
    myFile.open("employeeAbsences.txt");
    
    return 0;
}
