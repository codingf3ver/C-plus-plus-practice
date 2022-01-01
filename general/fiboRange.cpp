#include<iostream>
using namespace std;


int fiboRange(int n){
    if (n==1 or n==2){
    
        return n-1;
    }
    else{
        int r=fiboRange(n-1) + fiboRange(n-2);
        cout<<r;
        
   }
    return 0;
}

int main(){

    int n ;
    cout<<"enter range: ";
    cin>>n;
    cout<<fiboRange(n);

    return 0;
}
    