/*
 class Lab3 CMSC140
 Programmer : Etmy Barbosa
 Date: Sep 7,2021
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int age=18, num1=7, num2=4, num3, num4;
    num3= num1+num2;
    num4= num1%num2;
    double num5= 17.5/num2;
    
    string name= "Etmy", city= "Germantown";
    char myGrade= 'A';
    bool logic= true;
    
    cout<< "My name is "<< name<< endl;
    cout<< "I'm "<< age<< " years old"<< endl<< "I live in "<< city<< endl;
    cout<< "I take CMSC140 and I hope my grade will be an "<< myGrade<< endl;
    cout<< "If what I say is true, the display will be true as 1 "<< endl;
    cout<< "If I am just joking, the display will be false as 0 "<< endl;
    cout<< "My answer is "<< logic<< endl;

    cout<< "I'm good in math. \nFor example, \n"<< "7+4 is "<< num3<< endl
        <<"17.5/4= "<< num5<< endl
        <<"The remainder of 7 divided by 4 is "<< num4<< endl;

    
    
    return 0;
}
