//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    private:
    bool isPossible(int i,int j,string S,vector<int>&lcs,vector<int>&ucs)
    {
        int lc=0,uc=0;
        if(i==0)
        {
            lc=lcs[j];
            uc=ucs[j];
        }
        else
        {
            lc=lcs[j]-lcs[i-1];
            uc=ucs[j]-ucs[i-1];
        }
        return lc==uc;
    }
    public:
    int countSubstring(string S)
    {
        // code here
      
        int ans=0;
        int n=S.size();
        vector<int>lcs(n,0),ucs(n,0);
        
        lcs[0]=(S[0]>='a' && S[0]<='z')?1:0;
        ucs[0]=(S[0]>='A' && S[0]<='Z')?1:0;
        for(int i=1;i<n;i++)
        {
            lcs[i]=lcs[i-1]+(S[i]>='a' && S[i]<='z');
            ucs[i]=ucs[i-1]+(S[i]>='A' && S[i]<='Z');
        }
        // for(auto it:ucs)cout<<it<<"  ";
        for(int i=0;i<n;i++)
        {
            for(int j=i+1 ;j<n;j++)
            {
               ans+=(isPossible(i,j,S,lcs,ucs));
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends
