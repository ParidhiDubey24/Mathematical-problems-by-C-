#include<iostream>
using namespace std;
int main(){
    long long n, t, d;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=0; i<=9; i++){
        int c=0;
        t=n;
        for(; t>0; t=t/10){
            d = t%10;
            if(d==i)
            c++;
        }
        if(c>0)
        cout<<i<<" = "<<c<<endl;
    }
    return 0;
}