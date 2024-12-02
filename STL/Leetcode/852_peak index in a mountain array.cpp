Problm link:
https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
Soluion:
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        return max_element(arr.begin(), arr.end())-arr.begin();
    }
};
