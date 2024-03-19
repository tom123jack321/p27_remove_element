// My solution to LeetCode problem "27. Remove Element" (https://leetcode.com/problems/remove-element/description/?envType=study-plan-v2&envId=top-interview-150)
// Submited to LeetCode and passed all tests with 0ms runtime (beats 100.00% of users with c++) and 11.02MB memory (beats 37.87% of users with c++)
// Funny and pleasant

#include <iostream>
#include <string>
#include <vector>
// #mark a#

using namespace std;


#include <bits/stdc++.h>            // functions : sort, 
class Solution {
public:
  int removeElement(vector<int>& nums, int val) {
    int s=nums.size();
    int k=s;
    for(int i=0;i<s;i++){
      if(nums[i]==val){
        nums[i]=-1;
        k--;
      }
    }
    sort(nums.rbegin(), nums.rend() );
    // cout << "nums ";
    // for (int i=0;i<nums.size();i++){ cout << nums[i] << " " ;}
    // cout << endl;
    return k;
  }
};

// #mark z#

int main(){
  Solution sol;
  vector<int> nums={0,1,2,2,3,0,4,2};
  int val=2;
  int k=sol.removeElement(nums, val);
  cout << "k " << k << "\n";
}
