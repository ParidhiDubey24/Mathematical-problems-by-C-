#include<iostream>
using namespace std;
int main(){
    int n, rev=0, d, num;
    cout<<"Enter a number: ";
    cin>>n;
    num = n;
    for(; n>0; n=n/10)
    {
        d= n%10;
        rev = rev*10 + d;
    }
    if(rev==num)
    cout<<"Palindrome number"<<endl;
    else 
    cout<<"Not a Palindrome number"<<endl ;
    return 0;
}