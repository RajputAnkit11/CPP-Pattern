#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the size"<<endl;
    cin>> n ;
    int x=1;
    int y=2*n-4;

    for(int i=1;i<=n;i++){

        for(int j=n-1;j>=i;j--){
            cout<<" " ;
        }

        for(int k=n;k>=i;k--){
            cout << "*" ;
        }
        cout<<endl;
    }

    for(int i=1;i<=n-1;i++){

        for(int j=1;j<=i;j++){
            cout<<" " ;
        }

        for(int k=0;k<=i;k++){
            cout << "*" ;
        }
        cout<<endl;
    }

 return 0;
}
