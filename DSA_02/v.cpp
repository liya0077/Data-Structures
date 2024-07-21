#include <iostream>
#include <vector>
using namespace std;

vector<int> productarray(int arr[], int n) {
    vector<int> ans(n, 1); // Initialize ans vector with 1's
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) { // Corrected condition to exclude the current element
                ans[i]*= arr[j];
            }

    }
   
}
 return ans;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) { // Changed loop condition here
        cin >> arr[i];
    }
    vector<int> result = productarray(arr, n);
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}

