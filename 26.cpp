#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the size(must be odd integer)"<<endl;
    cin>> n ;

    for(int i=1;i<=n;i++){

        for(int k=1;k<=n;k++){
            if(i==n/2+1 || k==n/2+1){
                cout << "+" ;
            }
            else{
                cout << " " ;
            }
        }
        cout<<endl;
    }

 return 0;
}

