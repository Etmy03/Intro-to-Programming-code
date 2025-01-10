#include <iostream>
#include <string>
#include<fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string name1, name2, num1, num2, add1, add2, myadd;
    ifstream infile;
    ofstream outfile;
    outfile.open("list.txt");
    outfile<< "";
    outfile.close();
    
    
    cout<< "Enter your name: ";
    cin>> name1;
    cout<< endl;
        
    cout<< "Enter your phone number: ";
    cin>> num1;
    cout<< endl;
    
    cin.ignore();
    
    cout<< "Enter your address: ";
    getline(cin,add1);
    cin.ignore();
    cout<< endl;
        
    outfile.open("list.txt");
    outfile<< name1<<"\n"<< num1<<"\n"<< add1;
    outfile.close();
        
    
    infile.open("list.txt");
        
    if (infile.fail()){
        cout << "File open failure!";
    }
    
    else{
        infile>> name2>> num2;
        
        cout << "Name: "<< name2<< "\nPhone Number: "<< num2<< "\nAddress: ";
        while(getline(infile,add2)){
            cout<< add2;
        }
        cout<< endl;
    }
    infile.close();
    
    return 0;
}
