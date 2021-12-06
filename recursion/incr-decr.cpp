#include<iostream>
using namespace std;

int decr(int n){
     if (n==0){
         return 0;
     }
    cout<<n << endl ;
    return decr(n-1);
}
int incr(int n){
     if (n==0){
         return 0;
     }
    incr(n-1); 
    cout<<n << endl ; 
    return 0;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    cout<<"Increasing order"<<endl ;
    incr(n);
    cout<<"Decreasing order"<<endl ;
    decr(n);
    return 0;
}