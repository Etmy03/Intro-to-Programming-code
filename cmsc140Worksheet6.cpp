//
//  main.cpp
//  worksheet6
//
//  Created by Etmy Barbosa on 9/24/21.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //Mipes per Gallon
    
    int h;//gallons of gas the car can hold
    int f;//miles the car can drive with full tank
    
    cout<< "Enter the number of gallons of gas the car can hold: ";
    cin>> h;
    cout<< endl;
    
    cout<< "Enter the number of miles the car can drive with full tank: ";
    cin>> f;
    cout<< endl;
    
    cout<< "The car can drive "<< f/h << " miles per gallon of gas."<<endl;
    cout<< endl;
    
    
    //Stadium Seating
    int t1;//class A seats
    int t2;//class B seats
    int t3;//class C seats
    
    cout<< "Enter the number tickets for class A seats: ";
    cin>> t1;
    cout<< endl;
    
    cout<< "Enter the number tickets for class B seats: ";
    cin>> t2;
    cout<< endl;
    
    cout<< "Enter the number tickets for class C seats: ";
    cin>> t3;
    cout<< endl;
    
    cout<< setprecision(2)<< fixed<< "The amount generated from ticket for class A seats is: $"<< t1*15.00 << endl;
    cout<< "The amount generated from ticket for class B seats is: $"<< t1*12.00 << endl;
    cout<< "The amount generated from ticket for class C seats is: $"<< t3*9.00 << endl;
    
    
    //Test Average
    int test1;
    int test2;
    int test3;
    int test4;
    int test5;
    double a;//average
    
    cout<< "Enter score for test #1: ";
    cin>> test1;
    cout<< endl;
    
    cout<< "Enter score for test #2: ";
    cin>> test2;
    cout<< endl;
    
    cout<< "Enter score for test #3: ";
    cin>> test3;
    cout<< endl;
    
    cout<< "Enter score for test #4: ";
    cin>> test4;
    cout<< endl;
    
    cout<< "Enter score for test #5: ";
    cin>> test5;
    cout<< endl;
    
    a= (test1+ test2+ test3+ test4+ test5)/5.00;
    
    cout<< setprecision(1)<< fixed<< "The average of the 5 tests is: "<< a;
    cout<< endl;
    
    return 0;
}
