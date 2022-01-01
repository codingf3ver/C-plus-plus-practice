#include<iostream>
using namespace std;
// vector<int> dp;

int main(){
    int n;
    // cout<<"enter range: ";
    cin>>n;
    int dp[n] ;
    
    dp[1] = 0;
    dp[2] = 1;
    if (n==1 ){
        cout<<dp[n];
    }
    if(n==2){
        cout<<dp[1]<<" "<<dp[2]<<" ";
    }
    else{
    cout<<dp[1]<<" "<<dp[2]<<" ";
    for(int i=3;i<=n ;i++){
        dp[i] = dp[i-1] +  dp[i-2] ;
        cout<<dp[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}


