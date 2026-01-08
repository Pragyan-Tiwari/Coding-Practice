//solution using binary search inside given function without recursion (beats 100%)
class Solution {
public:
    int search(vector<int>& arr, int target) {
       int low=0;
        int high=arr.size()-1;
        while(low<=high){     
        int mid=(low+high)/2;
            if(arr[mid]==target)return mid;
            else if(arr[mid]<target)low=mid+1;
            else high =mid-1;
        }
        return -1;
    }
};

//solution using recursion beats(1 to 10%)
// class Solution {
// public:
//      int bs(vector<int>arr,int low,int high,int target){
//         if(high<low)return -1;
//         int mid=(low+high)/2;
//     if(arr[mid]==target)return mid;
//         else if(arr[mid]<target)return bs(arr,mid+1,high,target);
//     else return bs(arr,low,mid-1,target);
// }
//     int search(vector<int>& arr, int target) {
//        int low=0;
//        int high=arr.size()-1;
//         return bs(arr,low,high,target);
//     }

// };