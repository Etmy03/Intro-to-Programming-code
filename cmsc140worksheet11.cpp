/*
 Created by Etmy Barbosa on 9/9/21.
*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int purchase= 95;
    const double saleTax= 0.04;
    const double countryTax= 0.02;
    double totalTax= purchase + ((purchase * saleTax)* countryTax);
    
    cout<< totalTax<< endl;
    
    return 0;
}
