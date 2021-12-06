#include<iostream>
using namespace std;

int main(){
    int a = 10 ;
    int *ptr = &a;
    int **ptrptr = &ptr;
    cout<<"sngl refrenced pointer ptr value = "<<a<<" and address = "<<ptr<<endl;
    // cout<<"single refrenced ptr = "<<ptr<<endl;
    cout<<"dbl refrenced pointer *ptr value  = "<<*ptrptr<<" and address = "<<ptrptr<<endl;
    return 0;


}