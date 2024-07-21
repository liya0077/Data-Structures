#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
		sort(arr.begin(),arr.end());   
    vector<vector<int>> ans;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int m=j+1;m<n;m++){
                          if (arr[i] + arr[j] + arr[m] == K) {
                            ans.push_back(arr[i], arr[j], arr[m]);
                          }
                        }
                }
        }
        sort(ans.begin(), ans.end());
        return ans;
}
   