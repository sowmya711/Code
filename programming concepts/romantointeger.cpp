class Solution {
public:
    int romanToInt(string s) {
        int x,sum=0,i;
         unordered_map<char,int> umap;
        umap['I'] = 1;
        umap['V'] = 5;
        umap['X'] = 10;
        umap['L'] = 50;
        umap['C'] = 100;
        umap['D']=500;
        umap['M'] = 1000;
        for(i=0;i<s.length();i++)
        {
            if(i+1<s.length() && umap[s[i]]<umap[s[i+1]])
                sum=sum-umap[s[i]];
            else
                sum=sum+umap[s[i]];
        }
        return sum;
    }
};
