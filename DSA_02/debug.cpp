
#include<iostream>
using namespace std;
void moveNegative(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
      if(arr[i]>0){
         i++;
      }
      if(arr[j]<0){
         j--;
      }
      if(arr[i]<0 && arr[j]>0){
         swap(arr[i],arr[j]);
         i++;
         j--;
      }
       
    }
}
int main(){
    int n = 10;
    int arr[n] = {-1,8,-2,-4,9,-8,2,-7,-5,4};
    moveNegative(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
