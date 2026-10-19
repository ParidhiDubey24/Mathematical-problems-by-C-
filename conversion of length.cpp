#include<iostream>
using namespace std;
int main(){
    int cm;
    cout<<"Enter length in Centimeter : ";
    cin>>cm;
    cout<<"Lenght in Meter = "<< (cm/100) <<endl;
    cout<<"Length in Kilometer = "<< (cm/100000) <<endl;
    return 0;
}