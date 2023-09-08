#include <iostream>

using namespace std;

int main() {
   
    int number;
    cout << "Enter a number: ";
    cin >> number;

 
    int remainder_10 = number % 10;
    int remainder_11 = number % 11;
    int remainder_12 = number % 12;

    cout << "Remainder after dividing by 10: " << remainder_10 << endl;
    cout << "Remainder after dividing by 11: " << remainder_11 << endl;
    cout << "Remainder after dividing by 12: " << remainder_12 << endl;

    return 0;
}