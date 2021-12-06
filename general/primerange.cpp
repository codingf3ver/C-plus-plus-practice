#include<iostream>
using namespace std;


int main(){
    int a ;
    int b ;
    int  flag = 0 ;
    cout<< "range: "<< endl;
    cin>>a>>b;
    for (int i = a; i<b ; i++){
        for (int j  = 2 ; j<i+1;j++){
            if (i%j == 0){
                continue;
                 }
            else{
                cout<<i;
            }
        
        }
       
    }
    
}
