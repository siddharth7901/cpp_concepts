// #include<iostream>
// using namespace std;

// typedef struct employee
//   {
//     int eId;
//     char favChar;
//     float salary;
//   } ep;
//   int main(){
//     struct employee harry;
//      struct employee shubham;
    
  
//     harry.eId =1;
//     harry.favChar = 'c';
//     harry.salary = 1200000000;
   
//     cout<<"The value is "<<harry.eId<<endl;
//     cout<<"The value is "<<harry.favChar<<endl;
//     cout<<"The value is "<<harry.salary<<endl;
    
   
//     shubham.eId =2;
//     shubham.favChar = 'S';
//     shubham.salary = 23000000;

//     cout<<"The value is "<<shubham.eId<<endl;
//     cout<<"The value is "<<shubham.favChar<<endl;
//     cout<<"The value is "<<shubham.salary<<endl;

    
    
//   return 0;
#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char facChar;
    float salary;
}ep;

union money
{
    int rice;
    char car;
    float pounds;
};
int main(){
    ep harry;
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.rice;
    
}
  
  return 0;