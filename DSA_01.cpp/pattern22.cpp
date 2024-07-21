#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //first space print karlo...
        for(int s=n-i; s;s--){
            cout<<" ";
        }
        //abb star print karlo...
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;


    }
}