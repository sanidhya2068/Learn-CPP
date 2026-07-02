#include <iostream>
#include <vector>
using namespace std;


vector<int> pairSum(vector<int> arr, int target) {
    vector<int> ans;
    int size = arr.size();
    
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            // Sahi input array (arr) par check lagaya
            if(arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans; // Pair milte hi return
            }
        }
    }
    return ans; // Agar koi pair na mile
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 17;
    
    vector<int> ans = pairSum(arr, target);
    
    // Output check karne ke liye
    if(ans.size() == 2) {
        cout << "Indices are: " << ans[0] << " , " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}