#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=8;
    vector<int> arr={3,5,8,9,6,7,3,2};
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            for(int k=i;k<j;k++){
              cout<< arr[k]<<" ";
            }
             cout<<endl;
        }
       
    }
    return {};
}