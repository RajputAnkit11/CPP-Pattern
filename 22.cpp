#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the size"<<endl;
    cin>> n ;
    int x=2*n-1;
    int y=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" " ;
        }
        for(int k=1;k<=y;k++){
            cout << "*" ;
        }
        y+=2;
        cout<<endl;
    }

    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<" " ;
        }
        for(int k=1;k<=x-2;k++){
            cout << "*" ;
        }
        x-=2;
        cout<<endl;
    }

 return 0;
}

