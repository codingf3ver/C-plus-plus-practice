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

    for (int i=1 ; i<=n; i++)
    { for (int j=1; j <=m+1; j++)
        { 
            if(i==1 || i==n || j ==1 || j==m+i){
                cout<<"* ";
            }
            else {
                cout<<" ";
            }
            
        }
        cout<< endl;      
    }
}
