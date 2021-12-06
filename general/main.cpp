#include<iostream>
#include<string>
using namespace std;
// int sum(int a ,int b){
//     return a + b;
// }
class Employee{
    public:
        string name;
        int salary;
    
    Employee(string n , int sal , string pass){
        this->name = n;
        this->salary = sal;
        this->password = pass;
    }
    
    void details()
    {
        cout<< "My name is "<< this->name <<" and  "<< "my salary is "<<this->salary<<endl;

    }
    void secret(){
        cout<<"Secret password accessed using method : "<<this->password<<endl;
    }
private:
        string password;

};

int main(){
    // int age;
    // cout<<"enter your age: ";
    // cin>>age;
//    if (age>=120 || age<=1){
//        cout<<"Invalid age";

//    }
//    else if (age>=18)
//    {
//        /* code */
//        cout<<"you are eligible to vote";
//    }
   
//    else{
//        cout<<"you are not eligible to vote";
//    }


// switch (age){
//     case 17:
//         cout<<"you are not eligible to vote"<<endl;
//         break;
        
//     case 18:
//         cout<<"you are eligible to vote";
//     default:
//         cout<<"Invalid age";
// }

// int num1 , num2;
// cout<<"enter a number1: ";
// cin>>num1;
// cout<<"enter a number2: ";

// cin>>num2;
// cout<<"sum of two numbers: "<<sum(num1,num2)<<endl;
// int arr[5] ;
// // cout<< arr[1]<<endl;
// for (int i = 0; i < 5; i++)
// {
//     cout<<"Enter number: "<<i << endl;
//     cin>>arr[i];
// }
// for (int i = 0; i < 5; i++)
// {
//     cout<<'Marks: '<<arr[i]<<endl;
// }

// }

// for (int i = 0; i < arr.length; i++)
// {
//     cout<<arr[i]<<endl;
// }


// do{
//     cout<< number<< endl;
//     number++;
// }while (number<20);

   
// }
// int i ;
// for (i=0; i<number; i++){
//     cout<<"Number: "<<i<<endl;
// }
// int arr2d[3][3] = {
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
// };
// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         cout<<"Array at index "<<i<<" and " <<j<< " is "<<arr2d[i][j]<<endl;
//     }
// }
//Type casting
// int a = 211;
// cout<<a/30<<endl;
// cout<<(float)a/30<<endl;

// String manipulations
// string name = "Tausif";

// cout<<"String: "<<name << endl;
// cout<< "String Lenght: "<<name.length() << endl;
// cout<<"String at index 2: "<<name[2]<< endl;
// cout<< "substring "<< name.substr(3,5)<< endl;
// cout<< "substring "<< name.substr(1,120);

// Pointers
// int a = 45;
// int* ptr;
// ptr = &a;
// cout<<"Address of a: "<<&a<<endl;
// cout<<"Address of ptr: "<<ptr<<endl;
// cout<<"Value of a: "<<*ptr<<endl;

// Classes and Objects

// With constructor
Employee obj("Tausif" ,400,"rgeefbfbfb");

// Without constructor
// obj.name = "Tausif";
// obj.salary = 45000;

obj.details();
// obj.password; this will generate error as variable is private
obj.secret(); /* This wil not generate error8 */




return 0;
}
