class Solution {
public:
    int firstUniqChar(string s) {
        int count[125]={0};
        for(int i=0;i<s.length();i++)
            count[s[i]]++;
        for(int i=0;i<s.length();i++)
        {
            if(count[s[i]]==1)
                return i;
        }
        return -1;
    }
};
