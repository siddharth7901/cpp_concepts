//   oops - classes and objects

// c++ -- initially called -->> c with class by stroustroup
//class --> extension of structures (in c)
//structure had limitations-->> members are public
                            // -->> no methods
// classes--> structures + more
//    classes can have methods and properties                           
//clsses can make few members as private or & few as public
//structure in c++ are typedef
//you can declare objects roght after the class decleration

/*class employee{
    //class definiton
}happy , rohan , siddharth; */
// happy.salary = it makes no sense if salary is private

// nesting of memeber functions

#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public:
        void read(void);
        void chk_bin(void);
        void one_compliment(void);
        void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
    
}
void binary :: one_compliment(void)
{
     for (int i = 0; i < s.length(); i++)
     if(s.at(i) =='0'){
        s.at(i)='1';
     }
     else{
        s.at(i) ='0';
     }
      
}
void binary :: display(void)
{
    cout<<"Displaying your binary number"<<endl;
     for (int i = 0; i < s.length(); i++)
    {
     cout<<s.at(i);
    }
    cout<<endl;
}


int main(){

binary b;
b.read();
b.chk_bin();
b.display();
b.one_compliment();
b.display();


  return 0;
}