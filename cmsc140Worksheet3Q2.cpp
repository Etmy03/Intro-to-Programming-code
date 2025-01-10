/*
 Created by Etmy Barbosa on 9/9/21.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a= 50,
        b= 100,
        total= a+b,
        diffResult= b-a,
        divResult= b/a,
        remainResult= b%a;
    
    cout<< "Number1 = "<< a<< endl;
    cout<< "Number2 = "<< b<< endl;
    cout<< "Number1 + Number2 = "<< total<< endl;
    cout<< "Number1 - Number2 = "<< diffResult<< endl;
    cout<< "Number2/Number1 = "<< divResult<< endl;
    cout<< "Number2/Number1 (Remainder)  = "<< remainResult<< endl;
    
    return 0;
}
