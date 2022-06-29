#include<iostream>
using namespace std;

//1 + 4i
//5 + 8i
//-----equals to -----
// 6 + 12i
class complex{
    int a;
    int b;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        // Below lines means that non member- sumComplex function is allowed to do anything with my private parts (members)
        friend complex sumComplex(complex o1, complex o2);
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex sumComplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a) ,( o1.b + o2.b))
    ;
    return o3;
}
int main(){
  complex c1, c2, sum ;
  c1.setNumber(1,4);
  c1.printNumber();
  
  c2.setNumber(5,8);
  c2.printNumber();  
  
  sum = sumComplex(c1, c2);
  sum.printNumber();
  return 0;
}

//PROPERTIES OF FRIEND FUNCTIONS

/*  1. not in the scope of class
    2. since it is not in the scope of the class , it can not be called from the object of that class. c1.sumComplex() == invalid
    3. can be involved without the help of any object 
    4. usually contain object as arguments 
    5. can be declare inside public or private section of the class
    6. it can not access the members directly byy their names and need object_name. member_name to access any member

*/