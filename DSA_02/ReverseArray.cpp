#include<iostream>
using namespace std;

void Printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
    
void  Reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
       swap(arr[start],arr[end]);
        start ++;
        end --;
    }
    
}



int main(){
     int arr[6]={2,5,4,6,8,9};
     int brr[5]={-2,5,-7,3,6};
     Reverse(arr,6);
     Reverse(brr,5);

     Printarray(arr,6);
     Printarray(brr,5);

     
     
     }