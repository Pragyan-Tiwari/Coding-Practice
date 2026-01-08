class Solution {
public:
    int search(vector<int>& a, int target) {
        int st=0,end=a.size()-1,mid;
        while(st<=end){
            mid=st+(end-st)/2;
            if(target==a[mid]){
                return mid;
            }
            //for left sorted
            if(a[st]<=a[mid]){
                if(target>=a[st]&&target<=a[mid]){
                    end=mid-1;
                }//if
                else{
                    st=mid+1;
                }//else
            }
            //for right sorted
            else{
                if(target>=a[mid]&&target<=a[end]){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }//while
        return -1;
    }
};