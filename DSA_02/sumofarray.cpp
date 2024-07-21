#include<iostream>
using namespace std;
int sumof(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int size;
    cin>>size;
    int arr[1000];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"the sum of the array"<<sumof(arr,size);

}  