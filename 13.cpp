#include<iostream>
using namespace std;

// int main(){
// //What is a pointer ?----> data type which holds the address of other data types
// int a=3;
// int* b = &a;
// cout<<"The address of a is "<<&a;
// cout<<"The address of a is "<<b;

// //&---->(Address of) operator


// //*--->Dereference opeprator
// return 0;
// }

// print 
// ****
// ****
// ****
// ****

// #include<iostream>
// using namespace std;

// int main(){
//  for(int j=1; j<=4;j++){
//      cout<<"*";
//  } 
//  for (int i= 1; i <= 4; ++i)
//  {
//     cout<<"*";
//  }
 
//   return 0;
// }


// //PRINT 
// ****
// ****
// ****
// ****
// USING USER INPUT  
// #include<iostream>
// using namespace std;

// int main(){
//   int row,col;
//   cout<<"enter row and col";
//     cin>>row>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             cout<<"*"; 

//         }
//         cout<<endl;
//     }
//   return 0;
// }

#include<iostream>
using namespace std;

int main(){

 //What is a pointer? ----> data type which holds the address of other data types
 int a=3;
 int* b; 
 b = &a;

 //& ---->(Address of) operator
  cout<<"The address of a is "<<&a<<endl; 
 cout<<"The address of a is "<<&b<<endl; 

 //*--->Dereference operator
 cout<<"The value at address b is "<<*b<<endl;

 //Pointer to pointer
 int ** c = &b;
 cout<<"The address of b is "<<&b<<endl;
 cout<<"The address of b is "<<&c<<endl;
 cout<<"The value at address (c) is "<<c<<endl;
 cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
   return 0;
}