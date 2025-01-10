/*
 * Class: CMSC140 CRN
 * Instructor: Dr.Chawen-Huey Wu
 * Project1
 * Description: (Give a brief description for Project)
 * Due Date:Oct 10,2021
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Etmy Barbosa
 

  1.Ask the user for a country
  2.get the user input and  save it into a variable
  3.Print to the screen:
 "Converter Toolkit
 --------------------
     1. Temperature Converter
     2. Distance Converter
     3. Weight Converter
     4. Quit"
  4.Ask for the users choise
  5.get the user input and  save it into a variable;
  6.[if] the user input if not 1,2,3 or 4 output "Error: invalid input"
  7.[else]use switch for the next 4 steps
  8.If the user enters 1, the program should ask for the temperature in Celsius and convert it to  Fahrenheit
  9.If the user enters 2, the program should ask for the distance in Kilometer and convert it to Mile
  10.[if] the user input (distance) is negative output"!!!Program does not convert negative distance !!!"
  11.If the user enters 3, the program should ask for the weight in Kilogram and convert it to  Pound
  12.[if] the user input (weight) is negative output"!!!Program does not convert negative distance !!!"
  13.If the user enters 4, the program should end.
  14.output the name of the country: "[country] sounds fun!"
  15.Print:
 "Thank you for testing my program!!
 PROGRAMMER: Etmy Barbosa
 CMSC140 Common  Project 2
 Due Date: 10/10/2021"
*/


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int choice;
    double temp, newTemp, dist, newDist, weight, newWeight;
    string cName;// Country name
    const string pName= "Etmy Barbosa"; // Programmer’s Name
    const string dueDate= "10/10/2021";
    const int aNum = 2; //Assignment Number
    
    //#1
    cout<< "Enter a country name: ";
    
    //#2
    getline(cin, cName);
    cout<< endl;
    
    //#3
    cout<< "Converter Toolkit"<< endl;
    cout<< "--------------------"<< endl;
    cout<< "1. Temperature Converter"<< endl;
    cout<< "2. Distance Converter"<< endl;
    cout<< "3. Weight Converter"<< endl;
    cout<< "4. Quit"<< endl;
    
    //#4
    cout<< "Enter your choice (1-4):";
    
    //#5
    cin>> choice;
    cin.ignore();
    //cout<< endl;
    
    //#6
    if(choice>4 || choice<1){
        cout<< "Error: invalid input"<< endl;
    }
    
    //#7
    else{
        switch (choice){
            //#8
            case 1:
                cout<< "Please enter temperature in Celsius (such as 24 ): ";
                cin>> temp;
                newTemp= ((9.0/5)*temp)+32;
                cout<< "\nIt is "<< static_cast<int>(newTemp)<< " in Fahrenheit."<< endl;
                break;
                
            //#9
            case 2: cout<< "Please enter distance in Kilometer (such as 18.54 ): ";
                cin>> dist;
                
                //#10
                if(dist<0){
                    cout<< setw(1)<< "!!!Program does not convert negative distance !!!"<< endl;
                    return 0;
                }
                
                //back to #9
                newDist= dist*0.6;
                cout<< fixed<< setprecision(2)<< "\nIt is "<< newDist<< " in Miles."<< endl;
                break;
                
            //#11
            case 3:cout<< "Please enter weight in Kilogram (such as 18.54 ): ";
                cin>> weight;
                
                //#12
                if(weight<0){
                    cout<< setw(1)<< "!!!Program does not convert negative weight !!!"<< endl;
                    return 0;
                }
                
                //back to #11
                newWeight= weight*2.2;
                cout<< fixed<< setprecision(1)<<"\nIt is "<< newWeight<< " in Pounds."<< endl;
                break;
                
            //#13
            default:return 0;
        }
    }
    
    //#14
    cout<< cName<< " sounds fun!"<< endl;
    
    //#15
    cout<< "Thank you for testing my program!!"<< endl;
    cout<< "PROGRAMMER: " << pName<< endl;
    cout<< "CMSC140 Common  Project "<< aNum<< endl;
    cout<< "Due Date: "<< dueDate<< endl;
    
    return 0;
}
