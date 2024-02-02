class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string expression)
    {
        // Your code here
        stack<int> st;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];
        if (ch >= '0' && ch <= '9')
        {
            int temp = (int)(ch - '0');
            st.push(temp);
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch (ch)
            {
            case '+':
                st.push(op2 + op1);
                break;
            case '-':
                st.push(op2 - op1);
                break;
            case '*':
                st.push(op2  * op1);
                break;
            case '/':
                st.push(op2 / op1);
                break;
            }
        }
    }
    return st.top();
}
    
};
