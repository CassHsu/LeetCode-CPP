class Solution {
public:
    int calPoints(vector<string>& ops) {
        int v1;
        int v2;
        int ans = 0;
        stack<int> myStack;
        
        for (string op: ops) {
            switch (op[0]) {
                case '+':
                    v1 = myStack.top();
                    myStack.pop();
                    v2 = myStack.top();
                    myStack.push(v1);
                    myStack.push(v1 + v2);
                    break;
                    
                case 'C':
                    myStack.pop();
                    break;
                    
                case 'D':
                    myStack.push(myStack.top() * 2);
                    break;
                    
                default:
                    myStack.push(stoi(op));
            }
        }
        
        while (myStack.size() != 0) {
            ans += myStack.top();
            myStack.pop();
        }
        
        return ans;
    }
};
