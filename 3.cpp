#include<iostream>
using namespace std;

int main(){
    int n,x;
    cout<< "Enter the size "<< endl;
    cin>> n ;

    for(int i=1;i<=n;i++){
        x=n-i+1;
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n || i==j || j==x){
                 cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        //x--;
        cout<< endl ;
    }
 return 0;
}


