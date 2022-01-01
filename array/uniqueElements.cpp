#include <bits/stdc++.h>
#include<iostream>
#include <unordered_set>
using namespace std;

int main(){
    int arr[] = {2,2,3,45,7,89,9,0,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    unordered_set <int> s;

    for (int i=0 ;i<size; i++ ){
        if (s.find(arr[i])== s.end()){
            s.insert(arr[i]);
            cout<<arr[i]<<" ";
       }
       
    }
    cout<<endl;
    
    return 0;

}