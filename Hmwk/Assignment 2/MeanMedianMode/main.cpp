/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Mean, Median,Mode
 * Created on September 27, 2017, 6:30 PM
 */

#include <iostream>

using namespace std;

void mode(int[], int);
void mean(int[], int);
void sort(int[], int);
void median(int[], int);

int main()
{
   int array[15];
   float total=0.0f;
   int n = 15;//number of elements in array

    //Fill in the values for array
    for(int i=0; i<n; i++){
        cout<<"Fill in the "<<i+1<< " number. :";
        cin>>array[i];
    }

   cout<<endl;
    sort(array,n);
    //mean(array,n);
    //median(array,n);
    //mode(array,n);
    
    return 0;
}

void mean(int newArr[], int num){
    //GET TOTAL & CALCULATE MEAN
    float total=0.0f;
    for(int i=0;i<num; i++){
        total += newArr[i];
    }
    cout << "The mean is " << total/num << endl;
    mode(newArr, num);
}

void median(int newArr[], int num){
    //CALCULATE THE MEDIAN (middle number)
    if(num % 2 != 0){// is the # of elements odd?
        int temp = ((num+1)/2)-1;
        cout << "The median is " << newArr[temp] << endl;
    }
    else{// then it's even! :)
        cout << "The median is "<< newArr[(num/2)-1] << " and "<<newArr[num/2]<<endl;
    }
    mean(newArr, num);
}

void mode(int newArr[], int num) {
    int* rep = new int[num];
    //Allocate a new array in memory of the same size 
    //(round about way of defining number of elements by a variable)
    int freq=0;
    for (int i = 0; i < num; i++) {
        rep[i] = 0;//initialize each element to 0
        int j = 0;
        while ((j < i) && (newArr[i] != newArr[j])) {
            if (newArr[i] != newArr[j]) {
                j++;
            }
        }
        (rep[j])++;
    }
    int mxRpt = 0;
    for (int i = 1; i < num; i++) {
        freq++;
        if (rep[i] > rep[mxRpt]) {
            mxRpt = i;
        }
    }
    cout<< "The mode is " << newArr[mxRpt] << endl;
    cout<<"Frequency is: "<<freq-12<<endl;
    cout<<"Number of Modes: "<<mxRpt<<endl;

}

void sort(int newArr[], int num){
     //ARRANGE VALUES
    for(int x=0; x<num; x++){
         for(int y=0; y<num-1; y++){
             if(newArr[y]>newArr[y+1]){
                 int temp = newArr[y+1];
                 newArr[y+1] = newArr[y];
                 newArr[y] = temp;
             }
         }
     }
    cout << "List: ";
    for(int i =0; i<num; i++){
        cout << newArr[i] << " ";
    }
    cout << "\n";
    median(newArr, num);
}
