#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start/2)+(end/2);
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
              start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start/2)+(end/2);
        
    }
    return -1;
}
int main(){
    int even[6]={5,7,9,16,19,23};
    int odd[5]={3,6,8,19,23};
    int index=binarysearch(even,6,16);
    cout<<index<<endl;
}