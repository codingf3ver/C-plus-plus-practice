#include<iostream>


using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i =0; i<n+1;i++){

        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for(int k=0;k<2*i-1;k++){
            cout<<"* ";
        }
    cout<<endl;
    }
    for (int i =1; i<n+1;i++){
        for(int k=0;k<i;k++){
            cout<<"  ";
    }
            
    for(int j=0;j<2*n-2*i-1;j++){
            cout<<"* ";
        }
    
    cout<<endl;
    }
    return 0;
}