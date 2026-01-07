class Solution {
public:
    int numberOfSteps(int num) {
        long long count=0;
        while(num){
            if(num%2==0){
                num/=2;
                count++;
            }
            else{
                num--;
                count++;
            }
        }
        return count;
    }
};