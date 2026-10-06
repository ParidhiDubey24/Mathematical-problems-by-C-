#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"Enter the number of rows in matrix: ";
    cin>>n;
    cout<<"Enter the number of columns in matrix: ";
    cin>>m;
    int arr[n][m];
    cout<<"Enter elements of matrix: ";
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Formed matrix is: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}