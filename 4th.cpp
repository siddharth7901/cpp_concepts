
// // there are two types of header files
// 1. system header files: it comes with the complier
#include<iostream>
// 2. user defines header files: it is written by the programmer
//#include "this.h" //->this will produce an error if this.h is no present in the current directory
using namespace std;

int main(){
  int a= 4, b=5;
  //cout<<"Operators in ++:"<<end1;
  //cout<<"followeing are the typeps of operators in c++:"<<end1;
  //arthimetic operators
  cout<<"the value of a + b is "<<a+b<<endl;
  cout<<"the value of a - b is "<<a-b<<endl;
  cout<<"the value of a * b is "<<a*b<<endl;
  cout<<"the value of a / b is "<<a/b<<endl;
  cout<<"the value of a % b is "<<a/b<<endl;
  cout<<"the value of a ++  is "<<a++<<endl;
  cout<<"the value of a --  is "<<a--<<endl;
  cout<<"the value of ++a  is "<<++a<<endl;
  cout<<"the value of --a  is "<<--a<<endl;
  cout<<endl;
//ASSIGNMENT OPERATORS-->used to assign values to variables

//int a=3,b=9;
//char d='d';

// comparision operator
//int a= 4, b=5;
cout<<"following are the comparision operator in c++"<<endl;
cout<<"the value of a == b is "<<(a==b)<<endl;
cout<<"the value of a != b is "<<(a!=b)<<endl;
cout<<"the value of a >= b is "<<(a>b)<<endl;
cout<<"the value of a <= b is "<<(a<b)<<endl;
cout<<"the value of a > b is "<<(a>b)<<endl;
cout<<"the value of a < b is "<<(a<=b)<<endl;
cout<<endl;

// logical operator
//int a= 4, b=5;
cout<<"following are the logical operator in c++"<<endl;
 cout<<"the value of this logical and operator  ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
 cout<<"the value of this logical or operator ((a==b) || (a<b))  is "<<((a==b) || (a<b))<<endl;
 cout<<"the value of this logical not operator (!(a==b) is "<<(!(a==b))<<endl;


    return 0;
}