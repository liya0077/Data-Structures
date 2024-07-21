#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    for(auto v=arr.begin();v=arr.end();++v){
                cout<<* v<<" ";
    }
}