#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void sortone(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
       
        while(arr[left]==0){
            left++;
        }
        while(arr[right]==1){
            right--;
        }
        if(arr[left]==1&&arr[right]==0&& left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}

int main(){
    int arr[]={0,1,0,0,1,0,1,1};
    sortone(arr,8);
    printarray(arr,8);
}