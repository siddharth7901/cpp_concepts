#include<iostream>
using namespace std;


int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
    factorial(4) =
 //factorial of a number:
//  6! = 6*5*4*3*2*1 =  720
//0! = 1 by definition 
//1! = 1 by definition
//n! = n *(n-1)!
int a;
cout<<"Enter a number"<<endl;
cin>>a;
cout<<"The factorial of"<<a<<" is "<<factorial(a)<<endl;


  return 0;
}