class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (s.size() < p.size())
            return ans;

        vector<int> freqP(26, 0);
        vector<int> freqW(26, 0);

        // Frequency of p
        for (char ch : p)
            freqP[ch - 'a']++;

        int st = 0;
        int end = p.size() - 1;

        // First window frequency
        for (int i = 0; i <= end; i++)
            freqW[s[i] - 'a']++;

        // Compare first window
        if (freqP == freqW)
            ans.push_back(st);

        // Slide window
        while (end < s.size() - 1) {

            freqW[s[st] - 'a']--;   // Remove left character
            st++;

            end++;
            freqW[s[end] - 'a']++;  // Add new right character

            if (freqP == freqW)
                ans.push_back(st);
        }

        return ans;
    }
};