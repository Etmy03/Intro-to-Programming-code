//
//  main.cpp
//  Worksheet8Q2
//
//  Created by Etmy Barbosa on 9/30/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int num;
    
    cout<< "Enter a number between 1 and 10: ";
    cin>>num;
    
    switch (num){
        case 1: cout<< "I"<< endl;
                break;
        case 2: cout<< "II"<< endl;
                break;
        case 3: cout<< "III"<< endl;
                break;
        case 4: cout<< "IV"<< endl;
                break;
        case 5: cout<< "V"<< endl;
                break;
        case 6: cout<< "VI"<< endl;
                break;
        case 7: cout<< "VII"<< endl;
                break;
        case 8: cout<< "VIII"<< endl;
                break;
        case 9: cout<< "IX"<< endl;
                break;
        case 10: cout<< "X"<< endl;
                break;
        default: cout<< "Do not accept a number less than 1 or greater than 10."<< endl;
    }
    
    return 0;
}
