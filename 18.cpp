#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the size"<<endl;
    cin>> n ;
    int x=2*n-1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" " ;
        }
        for(int k=1;k<=x;k++){
            cout << "*" ;
        }
        x-=2;
        cout<<endl;
    }

 return 0;
}
