class Solution {
public:
    string longestPalindrome(string s) {
        int left;
        int right;
        int l=0;
        int r = 0;
        for(int i = 0 ; i < s.length(); ++i){
            left = i;
            right = i;
            while(left >=0 && right < s.length() && s[left]==s[right]){
                --left;
                ++right;
            }
            int Oddleft = left+1;
            int Oddright = right-1;
            left = i;
            right = i+1;
            while(left >=0 && right < s.length() && s[left]==s[right]){
                --left;
                ++right;
            }
            ++left;
            --right;
            if((Oddright-Oddleft)>(right-left)){
                if((Oddright-Oddleft)>(r-l)){
                    l = Oddleft;
                    r = Oddright;
                }
            }else{
                if((right-left)>(r-l)){
                    l = left;
                    r = right;
                }
            }
        }
        return s.substr(l,r - l + 1);
    }
};