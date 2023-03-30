//DATE ---  30-03-2023
class Solution {
  public:
    int minimumInteger(int N, vector<int> &A) {
        // code here
        long long  s=0;
        for(auto it:A)s+=it;
        long long ele=INT_MAX;
        for(auto it:A)
        {
            long long curE=it;
            if(s<=N*curE)
            {
               ele=min(curE,ele);
             }
        }
        return ele;
    }
};
