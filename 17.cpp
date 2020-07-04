#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the size"<<endl;
    cin>> n ;
    int y=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" " ;
        }
        for(int k=1;k<=y;k++){
            if(i==1 || k==1 || k==y || i==n ){
                cout << "*" ;
            }
            else{
                cout<<" " ;
            }
        }
        y+=2;
        cout<<endl;
    }

 return 0;
}

