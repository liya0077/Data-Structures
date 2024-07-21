//Alternate method of pattern13...
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch='A'+(i+j+1)-n;
            cout<<ch<<" ";
            ch++;
        }
         cout<<endl;
    }
    }
