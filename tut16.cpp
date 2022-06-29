// #include<iostream>
// using namespace std;

// // int sum(int a, int b);-- acceptable
// // int sum(int a,  b); -- not acceptable
// // int sum(int , int ); -- acceptable
// int sum(int , int );
// int main(){
//     int num1, num2;
//     cout<<"Enter first number"<<endl;
//     cin>>num1;
//     cout<<"Enter second number"<<endl;
//     cin>>num2;
//     cout<<"The sum is "<<sum(num1, num2);

//   return 0;
// }

// int sum(int a, int b){
//     int c = a+b;
//     return c;

// }

#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+ b;
    return c;
}
// //this will not swap a and b
// void swapPointer(int* a, int* b){//temp a  b
//     int temp = *a;      //4    4  5
//     *a = *b;             //4    5  5
//     *b = temp;          //4    5  4
// }

    //call by refrence using c++ reference vairiables
   
void swapRefrenceVar(int & a, int & b){  //temp a  b
    int temp = a;                 //4    4  5
    a = b;                       //4    5  5
    b = temp;                     //4    5  4
   
}

int main(){
    int x =4, y= 5;
//   cout<<"The sum of 4 and 5 is "<<sum(a,b);
    cout<<"The value of x is "<<x<<"and the value of y is "<<y<<endl;
//   swap(x, y); this will not swap a and b
//   swapPointer(&x, &y); // this will swap a and b using pointer refrence
     swapReferenceVar(x,y); // this will swap a and b using pointer refrence

  cout<<"The value of x is "<<x<<"and the value of y is "<<y<<endl;
  return 0;
}