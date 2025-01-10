//
//  main.cpp
//  worksheet7
//
//  Created by Etmy Barbosa on 9/28/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    double a, b, c;
    
    cout<< "Enter a number: ";
    cin>> a;
    cout<<endl;
    
    cout<< "Enter another number: ";
    cin>> b;
    cout<<endl;
    
    if(a>b){
        c=a;
    }
    
    else{
        c=b;
    }
    
    return 0;
}
