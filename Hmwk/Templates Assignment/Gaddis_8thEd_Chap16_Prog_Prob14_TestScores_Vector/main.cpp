/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Test Scores Vector
 * Created on December 1, 2017, 6:54 PM
 */

#include <iostream>
#include <vector>

using namespace std;

//Function Prototypes
float avg(vector<float> ,int );
void sortSc(vector<float> ,int);

int main(int argc, char** argv) {
    //Declare Variables
    vector<float> Tstsc;
    float avgSc,score;
    int num;
    
    //Prompt for Data
    cout<<"Enter the number of Test Scores: ";
    cin>>num;
    
    for(int i=0;i<num;i++){
        cout<<"Enter Score "<<i+1<<": ";
        cin>>score;
        Tstsc.push_back(score);
    }
    
    //Call to Sort
    sortSc(Tstsc,num);
    
    //Outputting Sorted Scores
    cout<<"Sorted Test Scores: "<<endl;
    for(int i=0;i<num;i++){
        cout<<Tstsc.at(i)<<" ";
    }
    //Call for Average
    avgSc=avg(Tstsc,num);
    
    //Outputting Average
    cout<<endl;
    cout<<"Average Test Score is: "<<avgSc<<endl;
    
    return 0;
}

float avg(vector<float> Tstsc,int num){
    float avg=0.0;
    for(int i=0;i<num;i++){
        avg+=Tstsc.at(i);
    }
    avg=avg/num;
    return avg;
}

void sortSc(vector<float> Tstsc ,int num){
    int temp; //Temporary 
    for(int i=1;i<num;i++){
        for(int j=0;j<num-i;j++){
            if(Tstsc.at(j)>Tstsc.at(j+1)){
                temp=Tstsc.at(j);
                Tstsc.at(j)=Tstsc.at(j+1);
                Tstsc.at(j+1)=temp;
            }
        }
    }
    
}