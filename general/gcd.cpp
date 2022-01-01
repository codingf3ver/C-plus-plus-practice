#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// LCM = multiplication of a *b /gcd
	int a,b;
	cin>>a>>b;
	int mul = a*b;
	while(a<b){
	    int rem = b%a;
	    b= a;
	    a= rem;
	    if (rem ==0){
            int lcm = (int) mul/b;
	        cout<<b <<' '<< lcm <<endl;
	       break;
	    }
    } 

	return 0;
}
