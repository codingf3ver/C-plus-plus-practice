#include <iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int mask ,countOne = 0,countZero = 0,binaryCount=0,temp;
    temp = n;
    while (temp>=1){
        int r= temp%2;
        cout<<r;
        temp = temp/2;
        binaryCount +=1;
    }
    cout<<endl;
    for ( int i = 0; i<binaryCount; i++){
        mask = 1<< i;
        if ((mask & n)){
            countOne +=1;
        }
        if(!(mask & n)){
            countZero += 1;
        }
    }

    cout<<"Total ones in number " <<n<< " is : "<<countOne<<endl;
    cout<<"Total zeroes in number " <<n<< " is : "<<countZero<<endl;

}