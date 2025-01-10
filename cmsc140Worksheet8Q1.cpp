//
//  main.cpp
//  Worksheet8Q1
//
//  Created by Etmy Barbosa on 9/30/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int num1, num2, smallerNum, largerNum;
    
    cout<< "Enter a number: ";
    cin>> num1;
    cout<< endl;
    
    cout<< "Enter another number: ";
    cin>> num2;
    cout<< endl;
    
    num1>num2? largerNum= num1, smallerNum= num2 :largerNum= num2, smallerNum= num1;

    cout<< "The larger number is "<< largerNum<< ",and the smaller number is "<< smallerNum<< endl;
    
    return 0;
}
