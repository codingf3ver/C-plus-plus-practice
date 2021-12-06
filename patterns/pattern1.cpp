#include<iostream>
using namespace std;

// rectangle pattern
int main()
{
    int n;
    int m;
    cout<<"Enter rows: ";
    cin>>n;
    cout<<"Enter columns: ";
    cin>> m;

    for (int i=0 ; i<n+1; i++)
    { for (int j=0; j < m; j++)
        {
            cout<<"* ";
        }
        cout<< endl;      
    }
}