#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the size(must be odd integer)"<<endl;
    cin>> n ;
    int x=n;

    for(int i=1;i<=n;i++){

        for(int k=1;k<=n;k++){
            if(i==k || k==x){
                cout << "*" ;
            }
            else{
                cout << " " ;
            }
        }
        x--;
        cout<<endl;
    }

 return 0;
}

