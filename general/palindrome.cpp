#include<iostream>
using namespace std;


int main(){
    int n ;
    int sum =0;
    cout<< "Enter your number:  ";
    cin>> n ;
    int temp  = n;
    while(temp>0){
       int r= temp%10;
       sum = sum*10 + r;
       temp = temp/10;
    }
    if (sum==n){
        cout<< "palindome";
    }
    else{
        cout<<"Not palindrome";
    }
return 0;

}


