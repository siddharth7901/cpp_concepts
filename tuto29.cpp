#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    //creating a contstructor
    // Constructor is a special member function with same name as of the class. 
    // It is automatically invoked whenever an object is created
    // It us used to inintialliz the obejects of its class 
    complex(void); // constructor declaration
    void printNumber()
    {
        cout<<"Your number is "<< a << " + "<< b <<"i"<<endl;
    }
};

complex:: complex(void){ // this is a default constructor as it takes no parameter 
    a = 10;
    b =  0;
}
int main(){
    complex c;
    c.printNumber();
  return 0;
}


// characterstics of Constructor
// 1. It should be declared in the public section of the class
// 2. They are autoatically invoked whenever the object is created
// 3. They can not return values and do not have return types
// 4. It can have default arguments 
// 5. We cannot refer to their address