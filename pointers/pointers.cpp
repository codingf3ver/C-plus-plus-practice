#include<iostream>
using namespace std;

int main(){
    int a = 10 ;
    int *ptr = &a;
    cout<<"...............Integer pointers................"<<endl<<endl;
    cout << "ptr = " << ptr << endl ;
    cout << "ptr = " << *ptr << endl ;
    *ptr = 20 ;
    cout << "ptr = " << ptr << endl ;
    cout << "ptr = " << *ptr << endl ;
    cout<<"...............Array pointers................"<<endl<<endl;
    // A pointer can be used to store any type of data
    int ar[5] = {1,2,3,4,5};
    cout<<"ar = "<<ar<<endl;

    int *ptr2 = ar;
    // This will give address of first element of array
    cout << "address of first element ptr = " << ptr2 << endl ;
    // This will give value of first element of array
    cout << "Value of first element ptr = " << *ptr2 << endl ;
    // This will give address of each element element of array
    for (int i = 0; i < 5; i++){
        cout << "pointer address with adding 4 bytes " << i <<" = "<<ptr2 << endl ;
        ptr2++;
    }
    // This will give value of each element element of array
    for (int i = 0; i < 5; i++){
        cout << "ptr2 = " << *(ptr2+i) << endl ;
        ptr2++;
    }

    return 0;



}