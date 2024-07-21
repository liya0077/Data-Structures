#include<iostream>
#include<vector>
using namespace std;
void waveprint(vector<vector<int> > v){
    int m=v.size();
    int n=v[0].size();
    for(int startcol=0;startcol <n;startcol++){
        if((startcol & 1)==0){
            for(int i=0;i<m;i++){
                cout<<v[i][startcol]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<v[i][startcol]<<" ";
            }
        }
    }
}

int main(){
    vector<vector<int> >arr={
{1,2,3,4},
{5,6,7,8},
{9,10,11,12}};
waveprint(arr);
return 0;
}