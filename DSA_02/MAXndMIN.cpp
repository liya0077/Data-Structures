#include<iostream>
#include<climits>
using namespace std;
int getmax(int arr[],int size){
    int maxi= INT_MIN;
    for(int i=0;i<size;i++){
        maxi=max(arr[i],maxi);
       // if(arr[i]>maxi){
         //   maxi=arr[i];
        //}
    }
    return maxi;
}
int getmin(int arr[],int size){
     int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(arr[i],mini);
       // if(arr[i]<mini){
         //   mini=arr[i];
        //}
    }
    return mini;
}
int main(){
    int size;
    cin>>size;
    int arr[1000];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"the maximum value of array is"<<getmax(arr,size)<<endl;
    cout<<"the minimum value of the array is"<<getmin(arr,size)<<endl;

}
