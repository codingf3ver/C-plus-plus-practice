#include<iostream>
using namespace std ;

// number patterns
int main(){

    int  n ;
    cout<<"Enter your num: ";
    cin>>n;
    cout<<endl;
    for (int i=0; i<n;i++){
        for (int j=i;j<n;j++){
            cout<<"*"<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        cout<<endl;
    }
}
// n=1;
// n=2 ,3;
// n=3,5;
// n=4,7;