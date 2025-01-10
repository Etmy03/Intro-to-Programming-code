#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    int num, line;
    
    //#1
    cout<< "(i)"<< endl;
    for(num=10; num>0; num--){
        cout<< "*";
    }
    cout<< endl;
    
    
    //#2
    cout<< "(ii)"<< endl;
    num=20;
    while(num>0){
        cout<< "*";
        num--;
    }
    cout<< endl;
    
    
    //#3
    cout<< "(iii)"<< endl;
    for(line=1; line<=10; line++){
        for(num=1; num<=line; num++){
            cout<< "*";
            if(num==line){
                cout<< endl;
            }
        }
    }
    cout<< endl;
    
    
    //#4
    cout<< "(iv)"<< endl;
    line=1;
    do{
        num=1;
        do{
            cout<< "*";
            if(num==line){
                cout<< endl;
            }
            num++;
        }
        while(num<=line);
        line++;
    }
    while(line<=20);
    cout<< endl;
    
    //#5
    line=10;
    cout<< "(iv)"<< endl;
    while(line>0){
        for(num=line; num>0; num--){
            cout<< "*";
        }
        if(num==0){
            cout<< endl;
        }
        line--;
    }
    cout<< endl;
    
    //#6
    
    cout<< "(iv)"<< endl;
    for(line=20; line>0; line--){
        num=line;
        while(num>0){
            cout<< "*";
            num--;
        }
        if(num==0){
            cout<< endl;
        }
        
    }
    cout<< endl;
    
    return 0;
}
