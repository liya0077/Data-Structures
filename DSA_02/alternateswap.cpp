#include<iostream>
using namespace std;
int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
       cout<<arr[i];
 }
    cout<<endl;
   
}
void alternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
          swap(arr[i],arr[i+1]);
        }       
    }
}
int main(){
    int arr[6]={3,4,6,7,2,9};
    alternate(arr,6);
   printarray(arr,6);


}