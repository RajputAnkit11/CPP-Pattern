#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the size"<<endl;
    cin>> n ;
    int x=1;
    int y=2;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i+1;j++){
            cout<<"*" ;
        }
        if(i>1){
            for(int k=1;k<=y;k++){
                cout << " " ;
            }
            y+=2;
        }

        for(int l=n;l>=i;l--){
            cout<<"*" ;
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<"*" ;
        }
        if( i<n){
            for(int k=2*n-2;k>=x;k--){
                cout << " " ;
            }
            x+=2;
        }

        for(int l=1;l<=i;l++){
            cout<<"*" ;
        }
        cout<<endl;
    }

 return 0;
}

