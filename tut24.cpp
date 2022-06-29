#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            cout<<"Enter the id of employee"<<endl;
            cin>>id;
        }

        void getId(){
            salary = 122;
            cout<<"The id of this employee is "<<id<<endl;
            cin>>id;
        }
};
int main(){
//   Employee happy, ashu , sachin, pooja;
//   happy.setId();
//   happy.getId();
Employee fb[4];
for (int i = 0; i < 4; i++)
{

fb[i].setId();
fb[i].getId();
}
  return 0;
}