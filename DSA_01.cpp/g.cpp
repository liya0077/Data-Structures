#include<iostream>
using namespace std;  
int main(){
    int n ;
    cin>>n;
    int prod=1;
    int sum=0;
    for(n;n!=0;n/10){
          int digit=n%10;
          prod=prod*digit;
          sum=sum+digit;
    }
int sub=prod-sum;
cout<<sub;
}
   