#include <iostream>
using namespace std;

// 1.binary number given
// 2. get bit at a particular position
// eg. n= 0101 at i = 2 ans = 1
// steps:
// 1. find mask bit by doing left shift a/c to the position 
// 2. then find number & mask
// bit at particilar position
int getBit(int n, int pos){ 
    int mask = 1<<pos;
    if ((mask & n)){
        return 1;
    }
    else{
        return 0;
    }
   
}

int main(){
int pos;
int n;
cin>> n>>pos;
cout << getBit(n ,pos) <<endl;


}
