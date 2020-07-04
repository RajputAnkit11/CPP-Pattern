#include<iostream>
using namespace std;

int main(){

    int n;
   // cout<< "Enter the size"<<endl;
   //cin>> n ;
    int x=5;
    int y=5;
    int z=5;
    cout << endl<<endl ;
    for(int i=1;i<=3;i++){

        for(int j=2;j>=i;j--){
            cout<<" " ;
        }

        for(int k=1;k<=x;k++){
            cout << "*" ;
        }
        x+=2;

        for(int l=1;l<=y;l++){
            cout << " " ;
        }
        y-=2;

        for(int m=1;m<=z;m++){
            cout << "*" ;
        }
        z+=2;

        cout<<endl;
    }

    for(int i=1;i<=10;i++){

        for(int j=1;j<i;j++){
            cout<<" " ;
        }

        for(int k=10;k>=i;k--){
            cout << "*" ;
        }

        for(int l=i;l<=9;l++){
            cout << "*" ;
        }
        cout<<endl;
    }

 return 0;
}












