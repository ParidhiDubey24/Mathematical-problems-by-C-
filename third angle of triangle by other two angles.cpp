#include<iostream>
using namespace std;
int main()
{
    int a1, a2, a3;
    cout<<"Enter First Angle of Triangle : ";
    cin>>a1;
    cout<<"Enter Second Angle of Triangle : ";
    cin>>a2;
    a3 = 180 - a1 - a2;
    cout<<"Third Angle of the Triangle is = "<<a3<<endl;
    return 0;
}