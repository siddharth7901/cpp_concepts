// ***recall*** //

// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cout << "Enter the Number "<<endl;
// cin >> n;

//    for(int i=2; i<=n; i++){
//         if(n%i==0){
//             cout << "Not PRIME"<<endl;
//         }
//         else{
//             cout << "PRIME"<<endl;
//         }

//    }
//   return 0;
// }

// function to check if a number is prime or not//
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        
    }
    else
    {
        return true;
    }
};  
int main()
{

    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " is a prime number " << endl;
        }
        
    }
    return 0;
}