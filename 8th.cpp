// PROGRAM TO CHECK IF AN ALPHABET IS A VOWEL OR CONSONANT
#include<iostream>

using namespace std;

int main(){
    char c;
    int isLowercaseVowel, isUppercaseVowel;
    cout<<"Enter the alphabet";
    cin>>c;
   isLowercaseVowel=(c == 'a' || c=='e' || c=='i'||c=='o'||c=='u');
   isUppercaseVowel=(c == 'A' || c=='E' || c=='I'||c=='O'||c=='U');
    if(isLowercaseVowel || isUppercaseVowel){
    cout<<"it is a vowel";

    }
    else{
        cout<<"It is a consonant";
    }
    
}