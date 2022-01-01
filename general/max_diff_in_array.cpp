#include<iostream>
using namespace std;

int main(){
    int max_ = INT_MIN ;
    int arr[] = {3,89,90,34,2,105};
    int size = sizeof(arr)/sizeof(arr[1]);
    for (int i =0;i<size-1;i++){
        int diff = arr[i+1] - arr[i];
        max_ = max(diff ,max_);
    }
    if (max_%2 ==0){
        cout<<"Maximum difference is even: "<<max_<<endl;
    }
    else{
        cout<<"Maximum difference is odd: "<<max_<<endl;
    }
 return 0;
}


