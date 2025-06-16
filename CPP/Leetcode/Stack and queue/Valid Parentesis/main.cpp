class Solution
{
public:
    bool isValid(string k)
    {
        stack<char> st;
        for (auto it : k)
        {
            if (it == '(' || it == '{' || it == '[')
            {
                st.push(it);
            }
            else
            {
                if (st.empty())
                    return false;
                if ((st.top() == '(' && it == ')') || (st.top() == '{' && it == '}') || (st.top() == '[' && it == ']'))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};