/*
Input format:-
    first line takes the no. of test cases
    second line takes n - the no of elements
    third lines takes input of n space seperated elements

Testcases:-
    Input:-
    2 
    5
    1 1 4 4 6
    14
    1 3 4 5 5 5 5 8 8 8 8 9 9 9 
    Output:-
    1 4 6
    1 3 4 5 8 9
*/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    // if size is 0 then there is no unique element
    if(nums.size()==0)
        return 0;
    int ans = 0;
    for (int i = 0; i < nums.size() - 1; i++)
        // if there is unique element then add it 
        if (nums[i] != nums[i + 1])
            nums[ans++] = nums[i];
    // finally add the last element as we have not checked for it before
    nums[ans++] = nums[nums.size() - 1];
    return ans;
}

int main() {
    int t;
    // for different testcases
    cin>>t;
    while(t--){
        int n;
        // size of array
        cin>>n;
        vector<int> nums;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            nums.push_back(temp);
        }
        int k = removeDuplicates(nums);
        for(int i=0; i<k; i++)
            cout<<nums[i]<<" ";
        cout<<endl;
    }

    return 0;
}