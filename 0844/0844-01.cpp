class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return buildit(s) == buildit(t);
    }
    
    string buildit(string st) {
        stack<char> r;
        
        for(int i=0; i < st.length(); i++){
            if(st[i] == '#'){
                if(!r.empty()){
                    r.pop();
                }
            }
            else
                r.push(st[i]);
        }
        
        string ans = "";
        while (!r.empty()) {
            ans += r.top();
            r.pop();
        }
        return ans;
    }
};
