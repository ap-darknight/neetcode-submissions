class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int n = strs.size();
        if (n == 0) return s;
        if (n == 1) return strs[0];

        s = strs[0];
        for(int i=1; i<n; i++) {
            s = common(s, strs[i]);
        }

        return s;
    }

    string common(string a, string b) {
        if (a == "" || b == "") return "";
        int i = 0;
        string ans = "";
        while(a[i] == b[i] && i < a.size() and i < b.size()) {
            ans.push_back(a[i]);
            i++;
        }
        return ans;
    }
};