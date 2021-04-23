#include <iostream> //for output

//initial value x & y;
#define Numx 28;
#define Numy 998789456;
//number of iterations of x & y;
#define Tofx 20;
#define Tofy 360;

using namespace std;

int main(void){
    unsigned long x = Numx;
    unsigned long y = Numy;
    unsigned long Tx = Tofx;
    unsigned long Ty = Tofy;
    unsigned long t = 0;
    cout<<"Value Sequence of x : ";
    for(t<Tx;t++){
        if( (x%2) == 0 ) x = x/2;
        else x = 3*x + 1;
        cout<<x<<"\t";}
    cout<<endl<<"Value Sequence of y : ";
    for(t=0;t<Ty;t++){
        if( (y%2) == 0 ) y = y/2;
        else y = 3*y + 1;
        cout<<y<<"\t";}
    cout<<endl;
    return 0;
}