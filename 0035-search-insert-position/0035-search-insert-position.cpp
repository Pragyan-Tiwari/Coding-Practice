class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int l = 0, r = arr.size() - 1, ans = arr.size(); // default: insert at end
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (arr[mid] >= target) {
                ans = mid;   
                r = mid - 1; 
            } else {
                l = mid + 1; 
            }
        }
        return ans;
    }
};