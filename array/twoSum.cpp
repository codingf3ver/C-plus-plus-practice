#include<iostream>
using namespace std;

int main(){
    
    int ar[]= {3,45,65,89,90};
    int s = sizeof(ar)/sizeof(ar[0]);
    int target ;
    // cout<<"enter target: ";
    cin>>target;
    int low = 0;
    int high = s-1;
    int flag=0;

    while(low<=high){
       if ((ar[low] + ar[high])==target) {
           flag = 1;
           cout<< "Sum found at "<<low <<" & "<< high<<endl;
           break;
              
        }
        else if ((ar[low] + ar[high])>target) {
            high = high -1 ; 

             }
        else{
            low = low + 1;
        }
    }
    
    if (flag==0){
        cout<<"Sum not found"<<endl;
    }
    return 0;
}