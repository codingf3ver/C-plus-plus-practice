#include<iostream>
using namespace std;

// Given a sorted array of 0s and 1s. The goal is to discover 
// the index of the sorted array’s first '1'. It's possible that 
// the array is made up entirely of 0s or 1s. If there are no 1's
// in the array, display "-1."


int main(){
    int arr[] = {0, 0, 0, 0, 1, 1, 1,2,2,5,6};
    int target = 0;
    int low = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int high = size -1;

    while (low<=high)
    {
        int mid = (low + high)/2 ;
       if (arr[mid] == 1 && (mid == 0 || arr[mid - 1] == 0)){
            cout<< mid<<endl;
            break;
        }
        else if (arr[mid] == 1){
            high = mid -1;
        }
        else{
            low = mid+1;
        }

        }
    return -1 ;
    
}
    


