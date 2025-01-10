#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int colorPrice=0, numOfColors;
    char light, sRemoved;//sign removed
    double subTotalPrice, totalPrice;
    
    cout<< "Enter the number of colors in the sign: ";
    cin>>numOfColors;
    cout<<endl;
    
    if(numOfColors==1){
        colorPrice= 250;
    }
    else if(numOfColors==2){
        colorPrice= 325;
    }
    else if(numOfColors==3){
        colorPrice= 450;
    }
    else if(numOfColors==4){
        colorPrice= 625;
    }
    else if(numOfColors>=5){
        colorPrice= 850;
    }
    else{}
    
    cout<< "Do you want lighted sign (y/n)?";
    cin>>light;
    cin.ignore();
    cout<<endl;
    
    if(light=='y'){
        subTotalPrice=colorPrice + (colorPrice*0.25);
    }
    else{
        subTotalPrice=colorPrice;
    }
    
    cout<< "Do you need sign removed (y/n)?";
    cin>>sRemoved;
    cin.ignore();
    cout<<endl;
    
    if(sRemoved=='y'){
        totalPrice= subTotalPrice + (colorPrice*0.1);
    }
    else{
        totalPrice= subTotalPrice;
    }
    
    cout<< "The price is:"<<fixed<< showpoint<< setprecision(2)<< totalPrice<<endl;
    
    return 0;
}
