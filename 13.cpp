#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the size "<< endl;
    cin>> n ;

    for(int i=1;i<=n;i++){

        for(int j=n;j>=i;j--){
            if(i==1 || i==n || j==n || j==i){
                 cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl ;
    }
 return 0;
}

