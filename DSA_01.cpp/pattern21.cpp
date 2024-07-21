#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i=1;i<=n;i++){
        for(int s=i-1;s;s--  ){
            cout<<" ";
        }
        for(int st=n-i+1;st;st--){
            cout<< st;
        }
        cout<<endl;
    }
}