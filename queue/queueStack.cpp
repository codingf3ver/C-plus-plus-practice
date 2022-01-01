#include<iostream>
using namespace std;
#include<stack>

// Queue using stack
int  main(){
 
    stack <int> st1;
    stack <int> st2;
    int arr[] = {2,2,3,45,7,89,9,0,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0;i<size; i++){
        st1.push(arr[i]);
    }
    cout<<"element in stack: ";
    while(!st1.empty()){
            int num = st1.top();
            cout<<num<<" ";
            st1.pop();
            st2.push(num);
        }
    cout<<endl;
    cout<<"element in queue: ";
    while(!st2.empty()){
            int num = st2.top();
            st2.pop();
            cout<< num<<" ";
        }
    cout<<endl;
    return 0;
}