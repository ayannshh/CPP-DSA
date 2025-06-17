class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        unordered_map<char, int> win;
        int maxLen = 0;
        int l = 0;
        int r = 0;
        int n = s.size();
        while (r < n)
        {
            char ch = s[r];
            if (win.find(ch) != win.end() && win[ch] >= l)
            {
                l = win[ch] + 1;
            }
            win[ch] = r;
            maxLen = max(maxLen, r - l + 1);
            r++;
        }
        return maxLen;
    }
};