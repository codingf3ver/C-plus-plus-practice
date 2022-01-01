#include<iostream>

using namespace std;


int main(){
    
    int ar[]= {3,45,65,89,90};
    int s = sizeof(ar)/sizeof(ar[0]);
    int twosum =110;
    int low = 0;
    int high = s-1;
    int flag=0;
    int i = 0;
    for(int i = 0; i<s; i++){
        int target = twosum - ar[i];
        while(low<=high){
        
        int mid = (low + high)/2;
        if( target == ar[mid]){
            flag=1;
            cout<<"found at index: "<<mid<< " "<<i<<endl;
            break;
        }
        else if(target<ar[mid]){
            high = mid - 1;
            i= i +1;
            cout<<"high: "<<i<<endl;
        }
        else{
            low = mid + 1;
             i= i +1;
            cout<<i<<endl;
            
        }
        
        
    }
    }
   
    if (flag==0){
        cout<<"Not found"<<endl;
    }
    
    return 0;
}