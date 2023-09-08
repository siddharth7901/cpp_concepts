#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter the value "<<endl;
 cin>>n;
 if(n %3==0){
    cout<<"FIZZ"<<endl;

 }
 if(n % 5 == 0){
    cout<<"BUZZ"<<endl;
 }
 else if(n %3 && n % 5 == 0){
    cout<<"FIZZBUZZ"<<endl;
 }
  return 0;
}