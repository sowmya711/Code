//leetcode
class Solution {
public:
    
   
    string longestCommonPrefix(vector<string>& strs) {
        
        int i=0,j;
         sort(strs.begin(),strs.end());
 
        int en = min(strs[0].size(),
                 strs[strs.size() - 1].size());
         string first = strs[0], last = strs[strs.size() - 1];
         while (i < en && first[i] == last[i])
        i++;
 
    string pre = first.substr(0, i);
    return pre;
        
        
    }
};
