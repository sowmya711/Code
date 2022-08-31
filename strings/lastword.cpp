//leetcode
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length,i,j,count=0;
        bool flag=false;
        length=s.length();
        for(i=s.length()-1;i>=0;i--)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
            flag = true;
            count++;
            }
        
        else {
            if (flag == true)
                return count;
        }
        }
    
    return count;
    }
};
 
