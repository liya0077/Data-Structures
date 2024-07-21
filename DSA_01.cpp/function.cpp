#include<iostream>
using namespace std;
bool iseven(int a){
    if(a==0){
        return 10;
    }
   else if(a%2==0){
        return 1;
    }

    return 0;
}  
int main(){
    int num;
    cin >>num;
   
     if(iseven(num)){
        cout<<"num is even"<<endl;
        }
    
    else{
        cout<<"number is odd"<<endl;
    }
}

