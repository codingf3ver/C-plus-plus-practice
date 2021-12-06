#include<iostream>
using namespace std ;

// number patterns
int main()
    {
        int n;
        cout <<"Enter rows: ";
        cin>>n;
        for (int i=0 ; i<=n; i++)
        {
            for (int j =1 ; j<=n-i ; j++){
                cout << j<<" ";
            }
        cout<< endl;

        }
    }