#include<iostream>
using namespace std;
int main(){
    int n, p, ans=1;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>p;
    for(int i=0; i<p; i++){
        ans= ans*n;
    }
    cout<<"Answer = "<<ans<<endl ;
    return 0;
}