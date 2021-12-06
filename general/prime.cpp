#include<iostream>
using namespace std;

int main(){
    int n ;
    int flag =1;
    cout<< "Enter your number:  ";
    cin>> n ;
    
    if (n<2){
        cout<< "invalid number";
    }
    else{
        for (int i=2 ; i*i<n ; i ++){
            if (n%i ==0){
                flag = 0;
                break;
                    }
            }
        }
    if (flag ==1) {
        cout<<"Prime"  ;  }
    else {
        cout << "Not prime";
    }
    return 0 ;




}


