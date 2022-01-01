#include<iostream>

using namespace std ;


int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;

    for (int  i = 1;i<=n;i++){
        // For printing the leading space
        for (int j=1 ;j<=n-i;j++){
            cout<<" ";
        }
        // for printing the last rows elements
        if(i==n){
            for (int  l = 1;l<=i;l++){
                    cout<<l<<" ";
            }   
        }
        else{
            // printing first element as 1
            cout<<1;
            // for printing space between numbers
            for(int m=1;m<2*i-2;m++){
                cout<<" ";
            }
            // For printing the last elements
            if (i>1){
                cout<<i;
            }   
        } 
    cout<<endl;
    }
}