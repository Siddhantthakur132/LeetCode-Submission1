class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int ans=0;
        int temp=x;
        while(temp)
        {
            int rem=temp%10;
             temp/=10;
            ans+=rem;
           
        }
        if(x%ans==0)
        return ans;

        else
        return -1;
    }
};