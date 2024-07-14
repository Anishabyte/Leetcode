class Solution {
public:
    int reverse(int x) {
        int count=0;
        while(x){
            if(count>INT_MAX/10||count<INT_MIN/10)
            return 0;
            count=(count*10)+x%10;
            x=x/10;
        }
        return count;
    }
};
