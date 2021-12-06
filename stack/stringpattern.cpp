#include<iostream>
#include<stack>
using namespace std;

int strPattern(string s , int size ){
    int count = 0;
    stack<char> st ;
    for( int i= 0 ; i<size ; i++){
        if(s[i]=='{' || s[i]=='(' || s[i]=='['){
            st.push(s[i]);
        }
    
        else if (!st.empty() and st.top() == '{'){
            if (s[i] =='}'){
                count +=1;
                st.pop();
            }else{
            st.pop();
        }
        }
        else if (!st.empty() and st.top() == '('){
            if (s[i] ==')'){
                st.pop();
                count +=1;
            }else{
            st.pop();
        }
        }
        else if (!st.empty() and st.top() == '['){
            if (s[i] ==']'){
                st.pop();
                count +=1;
            }      else{
            st.pop();
        }
        }
        
    }
return count;
}
int main(){
    string s ; //"{([])}";
    cout<<"Enter string: ";
    cin>>s;
    int size = s.length();
    cout<<"Total combination: "<<strPattern(s ,size)<<endl;
return 0;
}