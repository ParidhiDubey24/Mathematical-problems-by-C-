#include<iostream>
using namespace std;
int main(){
    int a, b, choice;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"1. Addition : "<<endl;
    cout<<"2. Subtraction : "<<endl;
    cout<<"3. Multiplication : "<<endl;
    cout<<"4. Division : "<<endl;
    cout<<"Enter your choice for operation : "<<endl;
    cin>>choice;
    switch(choice){
        case 1 :
        cout<<"Sum is = "<<a+b<<endl;
        break;
        case 2 :
        cout<<"Difference is = "<<a-b<<endl;
        break;
        case 3 :
        cout<<"Multiplication is = "<<a*b<<endl;
        break;
        case 4 :
        if(b!=0)
        cout<<"Division is = "<<a/b<<endl;
        else 
        cout<<"Division by zero is not possible"<<endl;
        break;
        default : 
        cout<<"Enter correct choice(1-4)"<<endl; 
    }
    return 0;
}