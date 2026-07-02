class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();

        if(n>m) return false;

        vector<int>freqarr1(26,0), freqarr2(26,0);

        for(int i=0;i<n;i++){
            freqarr1[s1[i]-'a']++;
            freqarr2[s2[i]-'a']++;
        }

        if(freqarr1==freqarr2) return true;

        for(int i=n;i<m;i++){
            freqarr2[s2[i]-'a']++;
            freqarr2[s2[i-n]-'a']--;

            if(freqarr1==freqarr2) return true;
        }
        return false;
    }
};