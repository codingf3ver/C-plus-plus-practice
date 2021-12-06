#include<iostream>
using namespace std;

void binaryTodecimal(int n)
{

    int ar[32] ;
    int i = 0;
    while (n>0){
        ar[i] = n%2;
        n = n/2;
        i++;
    }
    return ar;
}
int main(){
        int n;
        cout<< "nujber : ";
        cin >> n;
       int binary = binaryTodecimal(n);
    for (int i=0 ; i<sizeof(ar); i++){
        cout<<ar[i];
    }

}