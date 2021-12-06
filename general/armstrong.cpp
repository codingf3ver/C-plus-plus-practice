#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n ;
    int sum =0;
    cout<< "Enter your number:  ";
    cin>> n ;
    int temp  = n;
    while(temp>0){
       int r= temp%10;
       sum = sum+ pow(r,3);
       temp = temp/10;
    }
    if (sum==n){
        cout<< "armstrong";

    }
    else{
        cout<<"not armstrong";
    }
return 0;

}


