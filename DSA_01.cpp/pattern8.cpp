#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
           
          cout<<i+j-1 ;
            
        }
        cout<<endl;
    }
}
// we can also do by taking a variable
// int value=i;
// use this value in for loop by printing it and increasw it (value++) 