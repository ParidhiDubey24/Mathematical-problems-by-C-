#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    if(a>b){
        cout<<"Greater number is = "<<a<<endl;
    }
    else if(b>a){
        cout<<"Greater number is = "<<b<<endl;
    }
    else{
        cout<<"Numbers are equal = "<<a=b<<endl;
    }
    return 0;
}