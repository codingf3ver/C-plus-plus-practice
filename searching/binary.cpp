#include<iostream>
#include <list>
using namespace std;

int binary(int num){
    int count = 0 ;
    list<int> list1;
    if (num>=1){
    binary(num/2);
    int bin = num%2;
    if (bin== 1){
        count +=1 ;
    }
    }
    
    // list1.push_back(bin);
    // }
    // for(list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
    // { 
    //     cout<<*i<<endl;

    // }

    return count;
}
int main(){
    
    int n ;
    cout<< "Enter your number:  ";
    cin>> n ;
  int  c =binary(n);
  cout<< c;
    // list<int> list1 = 
//         for(list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
//     {
//         if (*i == 1){
//             count +=1;
//         }
//     }
// if (count>0){
//     cout<<count;
// }
// else{
//     cout<<"invalid";
// }
    

return 0;

}