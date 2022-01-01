#include<iostream>
using namespace std;


int main()
{   
    time_t start, end;
    int n;
    int mx = -12222222;
    cout<<"enter range: ";
    cin>> n;
    int ar[n];
    time(&start);
    for(int i=0 ;i<n; i++)
    {   
        cin>>ar[i];
    }
time(&end);
    for (int i =0; i<n; i++)
    {
       int  current_max = ar[i];
        mx = max(current_max ,mx);
    }
    
cout<<"Maximum: " << mx<<endl;
}