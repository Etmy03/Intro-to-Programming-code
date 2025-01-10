/*
 * Class: CMSC140 CRN
 * Instructor: Dr.Chawen-Huey Wu
 * Project3
 * Description: calculate an hotel profit
 * Due Date:Nov 2,2021
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Etmy Barbosa
 

  1.Ask the user for a location of the hotel
  2.get the user input and  save it into a variable
  3.Ask the user for a the number of floors on the hotel
  4.get the user input and  save it into a variable
  5.[if] the number is greater then 5 or less then 1, print an Error message and ask the user try again
  6.[else] [while] not all the floors rooms are counted, ask the user:
  7.the number of rooms and  save it into a variable
  8.the number of single rooms in a floors being occupied and save it into a variable
  9.the number of double rooms in a floors being occupied and save it into a variable
  10.the number of king rooms in a floors being occupied and save it into a variable
  11.the number of suites rooms in a floors being occupied and save it into a variable
  12.add the number of rooms
  13.[if] the addition of rooms is greater as the given number of room, output an error massage and repeat the same floor
  14.[else] go to the next floor, and ask the same questions
  15.output "BlueMount Hotel licated in " and the location of the hotel
  16.add the number of single rooms
  17.add the number of double room
  18.add the number of king rooms
  19.add the number of suites rooms
  20.output "TODAY'S ROOM RATE (US$/night) "
  21.display the rate of each room
  22.calculate the total income
  23.display the number of room in the hotel
  24.calculat and display the number of room being occupied in the hotel
  25.calculat and display the number of room not being occupied in the hotel
  26.calculat and display occupancy rate
  27.display the number of floor with least rooms room in the hotel
  28.[if] the occupancy rate is less tham 60% display: "Need to improve Hotel occupancy rate!!"
  29.Print:
 "Thank you for testing my program!!
 PROGRAMMER: Etmy Barbosa
 CMSC140 Common  Project 2
 Due Date: 10/10/2021"
*/


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string location;
    int numOfFloors,
        myFloor=1,
        tRoomInFloor,
        tRoomInFloor2,
        singleRoom,
        doubleRoom,
        kingRoom,
        suites,
        tSingleRoom=0,
        tDoubleRoom=0,
        tKingRoom=0,
        tSuites=0,
        totalRoomO=0,
        totalRoom=0,
        s=60, d=75, k=100, s2= 150;
    int floor1=0,
        floor2=0,
        floor3=0,
        floor4=0,
        floor5=0;
    double occupancy, income = 0;
    
    //#1&2
    cout<< "=============================================================="<< endl;
    cout<< "                       BlueMount Hotel"<< endl;
    cout<< "=============================================================="<< endl;
    cout<< "Enter the location of this hotel chain: ";
    getline(cin, location);
    cin.ignore();
    
    //#3-5
    do{
        cout<< "Enter the number of floors of the hotel: ";
        cin>> numOfFloors;
        cout<< endl;
        if(numOfFloors<=0 || numOfFloors>=6){
            cout<< "\nnumber of floors should be between 1 and 5!! Please try again."<< endl;
        }
    }
    while(numOfFloors<=0 || numOfFloors>=6);
    
    //#6-14
    while(myFloor<=numOfFloors){
        do{
            tRoomInFloor2= 0;
            do{
                cout<< "Enter total number of rooms in the "<< myFloor<< "th Floor: ";
                cin>> tRoomInFloor;
                cout<< endl;
                if(tRoomInFloor<1 || tRoomInFloor>30){
                    cout<< "\nnumber of rooms should be between 1 and 30!! Please try again."<< endl;
                }
            }
            while(tRoomInFloor<1 || tRoomInFloor>30);
            
            totalRoom+= tRoomInFloor; //for #25
            
            //#8
            cout<< "How many SINGLE rooms are occupied in the "<< myFloor<< "th Floor: ";
            cin>> singleRoom;
            tRoomInFloor2+= singleRoom;
            tSingleRoom= singleRoom;//#16
            totalRoomO+= singleRoom;//#26
            cout<< endl;
            
            //#9
            cout<< "How many DOUBLE rooms are occupied in the "<< myFloor<< "th Floor: ";
            cin>> doubleRoom;
            tRoomInFloor2+= doubleRoom;
            tDoubleRoom= doubleRoom;//#17
            totalRoomO+= doubleRoom;//#26
            cout<< endl;
            
            //#10
            cout<< "How many KING rooms are occupied in the "<< myFloor<< "th Floor: ";
            cin>> kingRoom;
            tRoomInFloor2+= kingRoom;
            tKingRoom= kingRoom;//#18
            totalRoomO+= kingRoom;//#26
            cout<< endl;
            
            //#11
            cout<< "How many SUITES are occupied in the "<< myFloor<< "th Floor: ";
            cin>> suites;
            tRoomInFloor2+= suites;
            tSuites= suites;//#19
            totalRoomO+= suites;//#26
            cout<< endl;
            if(tRoomInFloor2>tRoomInFloor){
                cout<< "\nTotal number of occupied rooms exceeds the number of rooms on this floor. Please try again!!"<< endl;
            }
        }
        while(tRoomInFloor2>tRoomInFloor);
        
        switch (myFloor) {
            case 1:
                floor1=tRoomInFloor;
                break;
            case 2:
                floor2=tRoomInFloor;
                break;
            case 3:
                floor3=tRoomInFloor;
                break;
            case 4:
                floor4=tRoomInFloor;
                break;
            default:
                floor5=tRoomInFloor;
                break;
        }
        
        myFloor++;
    }
    
    //#15, 20, 21
    cout<< "=============================================================="<< endl;
    cout<< "        BlueMount Hotel licated in "<< location<< endl;
    cout<< "=============================================================="<< endl;
    cout<< "       TODAY'S ROOM RATE (US$/night)"<< endl;
    cout<< endl;
    cout<< "   Single Room   Double Room     King Room     Suite Room"<< endl;
    cout<< endl;
    cout<< "            "<< s;
    cout<< "            "<< d;
    cout<< "           "<< k;
    cout<< "            "<< s2<< endl;
    cout<< "=============================================================="<< endl;
    
    //#22
    income= (static_cast<double>(tSingleRoom)*s) + (tDoubleRoom*d) + (tKingRoom*k) + (tSuites*s2);
    cout<< "              "<< fixed<< showpoint<< setprecision(2) << "Hotel Income:          $"<< income<< endl;
    
    //#23
    cout<< "          "<< "Total # of Rooms:          "<< totalRoom<< endl;
    
    //#24
    cout<< "    "<< "Total # Occupied Rooms:          "<< totalRoomO<< endl;
    
    //#25
    cout<< "  "<< "Total # UnOccupied Rooms:          "<< totalRoom-totalRoomO << endl;
    
    //#26
    occupancy =(static_cast<double>(totalRoomO)/totalRoom)*100;
    cout<< "            " << "Occupancy rate:          "<< occupancy<< "%"<< endl;
    
    //#27
    if((floor1>floor2) && (floor1>floor3) && (floor1>floor4) && (floor1>floor5)){
        cout<< "\n1st floor with "<< floor1<< " rooms, has the least number of rooms."<< endl;
    }
    else if((floor2>floor3) && (floor2>floor4) && (floor2>floor5)){
        cout<< "\n2nd floor with "<< floor2<< " rooms, has the least number of rooms."<< endl;
    }
    else if((floor3>floor4) && (floor3>floor5)){
        cout<< "\n3rd floor with "<< floor3<< " rooms, has the least number of rooms."<< endl;
    }
    else if(floor4>floor5){
        cout<< "\n4th floor with "<< floor4<< " rooms, has the least number of rooms."<< endl;
    }
    else{
        cout<< "\n5th floor with "<< floor5<< " rooms, has the least number of rooms."<< endl;
    }
    
    //#28
    if(occupancy<60){
        cout<< "Need to improve Hotel occupancy rate!!"<< endl;
    }
    
    //#29
    cout<<endl;
    cout<< "/nThank you for testing my program!!"<< "\nPROGRAMMER: Etmy Barbosa"<< "\nCMSC140 Common  Project 2"<< "\nDue Date: 11/02/2021"<< endl;

    
    return 0;
}
