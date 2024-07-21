#include<iostream>
using namespace std;
bool searchof(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
           return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={2,8,6,4,5,2,9,10,1,0};
    int key;
    cin>>key;
bool found= searchof(arr,10,key);
    if(found){
        cout<<" key is present ";
    }
    else{
        cout<<"key is absent";
    }

    
}