class Solution {
public:
    bool isPalindrome(string s) {
        string sum="";
        for(char &x:s){
            if(isalpha(x)||isdigit(x)) sum+=tolower(x);
        }
        cout<<sum;
        int l=0,r=sum.size()-1;
        while(l<r){
            if(sum[l]!=sum[r]){
                return false;
            }
            l++,r--;
        }
        return true;
    }
};
