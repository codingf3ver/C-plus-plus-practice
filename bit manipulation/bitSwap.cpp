#include <iostream>
using namespace std;


// Swap using XOR bit operation
int main()
{
    int a ,b ;
    cin>>a>>b;
    cout<<"Old value of A: "<<a<< " and B: "<<b<<endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<"New value of A:  "<<a <<" and B: "<<b<<endl;
    
    return 0;
}