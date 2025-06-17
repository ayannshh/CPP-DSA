class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int l = 0;
        int r = 0;
        int length = 0;
        int zero = 0;

        while (r < nums.size())
        {
            if (nums[r] == 0)
            {
                zero++;
            }

            while (zero > k)
            {
                if (nums[l] == 0)
                {
                    zero--;
                }
                l++;
            }
            int len = r - l + 1;
            length = max(length, len);
            r++;
        }
        return length;
    }
};