#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age";
    cin>>age;

    // if((age<18 && age>0)){
    // cout<<"you are minor";
    // }
    // if(age>18){
    // cout<<"you are invited in party";
    // }
    // else{
    //     (age<0);
    //     cout<<"you are not born yet";
    // }

    // selection control structure: IF-else -if -else leadder: switch case statements

    switch (age)
    {
    case 18:

        cout<<"you are 18"<<endl;
       break;
    
    case 22:
        
        cout<<"you are 22"<<endl;
        break;
    
    case 2:
        
        cout<<"you are 2"<<endl;
       break;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }
    cout<<"Done with break statement";
    return 0;
    }