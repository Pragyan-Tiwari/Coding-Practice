class Solution {
public:
    int maxArea(vector<int>& arr) {
        int maxx=0;
        int n=arr.size();
        int i=0,j=n-1;
        while(i<j){
               int height=min(arr[i],arr[j]);
               int width=j-i;
               int area=height*width;
               maxx=max(maxx,area);
            
        if(arr[i]<arr[j]){
            i++;
        }
        else{
            j--;
        }
        }
        return maxx;
    }
};