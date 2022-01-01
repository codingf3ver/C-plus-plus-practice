#include<iostream>
#include<string>

using namespace std;


int main(){

    string c;
    cout<<"enter string: ";
    cin>> c;
    string s = "";
    for(int i =c.length()-1;i>=0;i--){
        s += c[i]; 

    }
    if (s == c){
        cout<<"Palidrome"<<endl;
    }
    else{
        cout<<"Not Palidrome"<<endl;
    }
    return 0;
}