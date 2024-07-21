#include<iostream>
using namespace std;
int main(){
    int x=10;
    cout<<&x<<endl;
    int *xptr=&x;
    cout<<xptr<<endl;
    float f=10.5;
    cout<<&f<<endl;
    float *f1= &f;
    cout<<f1<<endl;
}
