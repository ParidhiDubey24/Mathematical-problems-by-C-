#include<iostream>
using namespace std;
int main(){
    int n, p, ans= 1;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter power of number: ";
    cin>>p;
    for(int i=1; i<=p; i++){
        ans = ans*n;
    }
    cout<<"The answer is :- "<<ans<<endl;
    return 0;
}