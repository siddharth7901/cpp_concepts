//**PROGRAM TO CHECK IF A TRIANGLE IS EQUILATERAL, SCALENE ,ISCOSCELES//*
#include<iostream>

using namespace std;
int main()
{
    int sidea,sideb,sidec;
    cout<<"ENETR THE SIDE a"<<endl;
    cin>>sidea;
    cout<<"ENETR THE SIDE b"<<endl;
    cin>>sideb;
    cout<<"ENETR THE SIDE c"<<endl;
    cin>>sidec;
    if(sidea == sideb && sideb == sidec)
    {
        cout<<"This is an equilateral triangle.\n";
    }
    else if (sidea == sideb || sidea==sidec || sideb == sidec)
    {
        cout<<"This is an isosceles triangle.\n";
    }
    else
    { 
        cout<<"This is scalene triangle.\n";
    }
    return 0;
    

}