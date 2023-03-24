class Solution {
  public:
    string removeReverse(string S) {
        // code here
        // return "ff";
        unordered_map<char,int>freq;
        for(auto it:S)freq[it]++;
        int ck=0;
        int low=0;
        bool reverse=false;
        int high=S.size()-1;
        while(low<high)
        {
            if(!reverse)
            {
                char c=S[low];
                if(freq[c]>1)
                {
                    S[low]='#';
                    reverse=!reverse;
                    freq[c]--;
                    ck++;
                    
                }
                else low++;
            }
            else
            {
                char c=S[high];
                if(freq[c]>1)
                {
                   S[high]='#';
                   reverse=!reverse;
                   freq[c]--;
                  ck++;
                   
                }
                else high--;
            }
        }
        string ans;
        for(auto it:S)
        {
            if(it!='#')ans+=it;
        }
        if(ck%2==0)
        { 
            return ans;
        }
        else
        {
            std::reverse(ans.begin(), ans.end());
            return ans;
        }
    }
};
