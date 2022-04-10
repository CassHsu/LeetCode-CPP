class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        
        int i = 0;
        while (i++ < n) {
            string s = "";
        
            if (i % 3 == 0) s += "Fizz";
            if (i % 5 == 0) s += "Buzz";

            if (s.length() > 0) {
                ans.push_back(s);
            } else {
                ans.push_back(to_string(i));
            }
        }

        return ans;
    }
};
