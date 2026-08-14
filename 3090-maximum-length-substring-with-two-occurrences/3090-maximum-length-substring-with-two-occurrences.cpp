class Solution {
public:
    int maximumLengthSubstring(string s) {
        int c = 0;
        string str = "";

        for (int i = 0; i < s.size(); i++) {
            str += s[i];

            while (count(str.begin(), str.end(), s[i]) > 2) {
                str.erase(0, 1);
            }

            c = max(c, (int)str.size());
        }

        return c;
    }
};
