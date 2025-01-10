/*
 Created by Etmy Barbosa on 9/21/21.
 */

#include <iostream>
#include <string>

using namespace std;

/*
 Joe’s Pizza Palace needs a program to calculate the number of slices a pizza of any size can be divided into. The program should perform the following steps:

 To calculate the number of slices that may be taken from the pizza, you must know the following facts:
   Each slice should have an area of 14.125 inches.
   To calculate the number of slices, simply divide the area of the pizza by 14.125.
   The area of the pizza is calculated with this formula: Area = "pi r squared" where pi is approximately 3.14159 and r is the radius (half the the diameter).
 */

int main(int argc, const char * argv[]) {
    
    double d; //diameter of the pizza in inches
    int numOfSlices; //number of slices
    double a; // area
    const double pi=3.14159;
    
     //Ask the user for the diameter of the pizza in inches.
    cout<< "Enter the diameter of the pizza (in inches): ";
    cin>> d;
    cout<< endl; 
     
     //Calculate the number of slices that may be taken from a pizza of that size.
    double r=d/2;
    a= pi*r*r;
    numOfSlices= a/14.125;
     
     //Display a message telling the number of slices.
    cout<< "The number of slices is "<< numOfSlices<< endl;
    
    return 0;
}
