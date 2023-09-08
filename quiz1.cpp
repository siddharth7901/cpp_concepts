// // Create a function which takes two point objects and compute distance between them
// #include<iostream>
// #include<math.h>
// using namespace std;


// int main(){
//     float x1, y1, x2, y2, distance;                              //(x1,y1) & (x2,y2)
//     cout<<"Enter the value of x1 "<<endl;                        //
//     cin>>x1;
//     cout<<"Enter the value of x2 "<<endl;
//     cin>>x2;
//     cout<<"Enter the vaue of y1 "<<endl;
//     cin>>y1;
//     cout<<"Enter the value of y2 "<<endl;
//     cin>>y2;
//     distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2) );
//   cout<<"The distance between ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is"<<distance<<endl;
//   return 0;
// }

#include<iostream>
#include<math.h>
using namespace std;

class Point{
private:
    int x, y;
    friend float Distance(Point A, Point B);
public:
    Point(int , int );


    void ShowPoint() const{
        cout<<"Point is ("<<x<<", "<<y<<")"<<endl;
    }

};

Point ::Point(int a, int b) {
    x = a;
    y = b;
}

float Distance(Point A, Point B){
    int diffx, diffy;
    float Dist;
    diffx = A.x - B.x;
    diffy = A.y - B.y;

    int q, r;
    q = diffx * diffx;
    r = diffy * diffy;
    int sum;
    sum = q+r;

    Dist = sqrt(sum);

    return Dist;
}

int main() {
    int s, t;
    cin>>s;
    cin>>t;
    Point P(s, t);
    P.ShowPoint();
    cin>>s;
    cin>>t;
    Point Q(s, t);
    Q.ShowPoint();

    cout<<"The distance between the given points is "<<Distance(P, Q)<<endl;
    return 0;
}

