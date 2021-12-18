
#include <iostream>
using namespace std;

// steps:
// 1. find mask bit by doing left shift a/c to the position 
// 2. then find number ! mask
// change bit at particilar position
// 11000100 at 3 position =0 -> 11001100 
int setBit(int n, int pos){ 
    int mask = 1<<pos;
    int x = (n| mask);
    return x;
   
}

int main(){
int pos;
int n;
cin>> n>>pos;
cout << setBit(n ,pos) <<endl;
}
// 5 = 101 ,pos=1 --> 111