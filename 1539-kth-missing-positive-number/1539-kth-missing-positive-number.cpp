class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missing=0;
        int num=1;

        while(k>missing)
        {
            bool found=false;

            for(int x:arr)
            {
                if(x==num)
                {
                    found=true;
                    break;
                }
            }
            if(!found)
            {
                missing++;
            }
            if(missing==k)
            return num;

            num++;
        }
        return 0;
    }
};