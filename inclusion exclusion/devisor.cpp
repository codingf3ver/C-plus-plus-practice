#include<iostream>
using namespace std;

int divisor(int n ,int a , int b ){
    int c1 = n/a ;
    int c2  = n/b;
    int c3 = n/(a*b) ;
    return c1 + c2 - c3 ;

}
int main(){
    int n ;
    int  a ;
    int b ;
    cout<<"enter numbers: " ;
    cin >>n >> a >> b;
    cout << "Number of divisor between both: "<<divisor(n ,a , b )<<endl;
}