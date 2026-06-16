class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp_s, mp_t;

        for (int i = 0; i < s.size(); i++)
            if(mp_s.find(s[i]) == mp_s.end())
                mp_s[s[i]] = 1;
            else
                mp_s[s[i]]++;

        for (int i = 0; i < t.size(); i++)
            if(mp_s.find(t[i]) != mp_s.end())
                mp_s[t[i]]--;
            else
                return false;

        for (int i = 0; i < s.size(); i++)
            if(mp_s.find(s[i]) != mp_s.end())
                if(mp_s[s[i]] > 0)
                    return false;
            
        return true;        
    }
};
