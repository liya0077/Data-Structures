#include<iostream>
using namespace std;
int num1(int n){
   int  count=0;
    while(n!=0){
        if(n&1){
         count++;
        }
       n= n>>1;
      
    }
  return  count;
}
int num2(int n){
   int  count=0;
    while(n!=0){
        if(n&1){
         count++;
        }
       n= n>>1;
      
    }
  return  count;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=num1(a)+num2(b);
    cout<<ans;
}  