#include<iostream>
using namespace std;


int main()
{   
    int n;
    int mx = -12222222;
    cout<<"enter range: ";
    cin>> n;
    int ar[n];
    for(int i=0 ;i<n; i++)
    {   
        cin>>ar[i];
    }

    for (int i =0; i<n; i++)
    {
       int  current_max = ar[i];
        mx = max(current_max ,mx);
    }
cout<<"Maximum: " << mx;
}