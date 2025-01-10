/*
 * Class: CMSC140 CRN
 * Instructor: Dr.Chawen-Huey Wu
 * Homework 8
 * Description: calculate an hotel profit
 * Due Date:Dec 10,2021
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Etmy Barbosa
 
 
 1.Create the void displayArray function with an int array and an int variable perimeter:
 2.Use [for] loop to go through the array
 3.Display the array
 4.Create the void selectionSort function with an int array and an int variable perimeter:
 5.Use a [for] loop to go through the array
 6.Compare a score with the next score
 7.[If] a score is greater than the previous score
 8.Switch position
 9.Create the int findMax function with an int array and an int variable perimeter:
 10.Save the first variable as the max
 11.Use [for] loop to go through the array
 12.[If] the next variable is greater than the max then make the next variable the max
 13.Return the max
 14.Create the int findMin function with an int array and an int variable perimeter:
 15.Save the first variable as the min
 16.Use [for] loop to go through the array
 17.[If] the next variable is smaller than the max then make the next variable the min
 18.Return the min
 19.Create the double findAvg function with an int array and an int variable perimeter:
 20.Use the [for] loop to add all the variables in the array
 21.Return the total divided by the int variable in the perimeter
 22.In the main function:
 23.output: “How many scores do you want to enter? ”
 24.Save the input
 25.Use the impute as the array size
 26.Use a [for] loop to get each user input
 27.Save the user input on the array
 28.Output: "Original order scores are: "
 29.Use the displayArray function to get the output
 30.Output: "Scores ordered High to low: "
 31.Use the selectionSort function
 32.And the displayArray function to get the output
 33.Output: "Highest Score: "
 34.Use the findMax function to get the output
 35.save the max in a variable
 36.Output: "Lowest Score: "
 37.Use the findMin function to get the output
 38.save the min in a variable
 39.Output: "Average of scores: "
 40.Use the findAvg function to get the output
 41.save the average in a variable

*/

#include <iostream>
#include <string>

using namespace std;

void displayArray(int array[], int size){
    for(int a=0; a<size; a++){
        cout<< array[a]<< " ";
    }
}
void selectionSort(int array[], int size){
    int index, score, newScore;
    
    for(int b=0; b<size; b++){
        index=b;
        score=array[b];
        for(int c=b+1; c<size; c++){
            if(array[c] > score){
                index=c;
                score=array[c];
            }
        }
        newScore=array[b];
        array[b]=score;
        array[index]=newScore;
    }
}
int findMax(int array[], int size){
    int max=array[0];
    
    for(int d=1; d<size; d++){
        if(max < array[d]){
            max=array[d];
        }
    }
    return max;
}
int findMin(int array[], int size){
    int min=array[0];
    
    for(int e=1; e<size; e++){
        if(min > array[e]){
            min=array[e];
        }
    }
    return min;
}
double findAvg(int array[], int size){
    double total = 0.0;
    
    for(int f=0; f<size; f++){
        total += array[f];
    }
    return total/size;
}

int main(int argc, const char * argv[]) {
    int myScore[50];
    int size;
    
    cout<< "How many score do you want to enter? ";
    cin>> size;
    cout<< endl;
    
    for(int x=0; x<size; x++){
        cout<< "Enter score #"<< x+1<< ": ";
        cin>> myScore[x];
    }
    cout<< endl;

    
    cout<< "Original order scores are: ";
    displayArray(myScore, size);
    cout<< endl;
    
    cout<< "Scores ordered High to low: ";
    selectionSort(myScore, size);
    displayArray(myScore, size);
    cout<< endl;
    
    
    int myMax=findMax(myScore, size);
    cout<< "Highest Score: "<< myMax;
    cout<< endl;
    
    
    int myMin=findMin(myScore, size);
    cout<< "Lowest Score: "<< myMin;
    cout<< endl;
    
    
    double myAvg=findAvg(myScore, size);
    cout<< "Average of scores: "<< myAvg;
    cout<< endl;
    
    cout<< endl;
    
    return 0;
}
