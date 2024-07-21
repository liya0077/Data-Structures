#include<iostream>
#include <vector>
using namespace std;
vector<int> productarray(int arr[],int n){
     vector<int>ans; 
     int prod=1;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                continue;
            }
            else{
                prod=prod*arr[i];
                
            }
            ans.push_back(prod);
        }
     }