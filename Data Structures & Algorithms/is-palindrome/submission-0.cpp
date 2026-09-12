class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char ch)
        {
        return !isalnum(ch) ;
        }), s.end());
        int l=0,r=s.length()-1;
        while(l<=r){
            if(tolower(s[l])!=tolower(s[r]))
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
