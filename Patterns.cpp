// #include<iostream>
// using namespace std;

// int main(){
//  int r,c;
//  cin >> r >> c;
//  for(int i=0;i<r;i++){
//     for (int j=0;j<c;j++){
//         cout << "* ";
//     }
//   cout<<endl;
//  } 

//   return 0;
// }

// //            // ====Recursive====//
// //  #include<iostream>
// //  using namespace std;
 
// //  int main(){

// //   long long int factorial(int N){

// //     if(n==1 || N==0){
// //       return 1;
// //     }
// //     int recResult = factorial(N-1);
// //     int Result = N * recResult;
// //     return Result;
// //   } 
// //    return 0;
// //  }


// #include<iostream>
// using namespace std;

// class Solution {
//   public:
//     long long int nthFibonacci(long long int n){
//         // code here
//         if(n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }
//         long long int recCall1 = nthFibonacci(n-1);
//         long long int  recCall2 = nthFibonacci(n-2);
    
        
//         int smallcal = recCall1 + recCall2;
//         return smallcal;
        
//     }
// };

#include<iostream>
using namespace std;

int main(){

 int rows, columns;
 cout <<" Enter the rows "<<endl;
  cin >> rows;
  cout<< "Enter the coloumns "<<endl;

 if ( int i=0; i<rows; i++){
  for(int j=0; j<=columns; j++){
    if( j==1 || i == rows || j==1 ||j==columns){
    cout<<" * "<< endl; 
    }
    else{
    }
      cout<<" ";
  }
  return 0;
}