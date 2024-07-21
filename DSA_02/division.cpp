#include<iostream>
#include<climits>
using namespace std;
int FindQoutient(int divisior,int divident){
    int s=0;
    int e=divident;
    int mid=s+(e-s)/2;
     int ans=-1;
     int undefined=INT_MAX;
     if(divisior==0){
        return undefined;
     }
    while (s<=e)
    {
        int target=mid*divisior;
        if(target == divident){
            return mid;
        }
        else if(target < divident){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    
}


int main(){
    int divisor=0;
    int divident=29;
   
    int ans=FindQoutient(abs(divisor),abs(divident));
    if(divisor<0 && divident >0   || divisor>0 && divident<0){
        ans=0-ans; 
         }
    cout<<ans<<endl;

}