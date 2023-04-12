//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
int getSatifiedElements(vector<int>&arr,int value)
{
    int n=arr.size();
    int l=n/2;
    int ans=-1;
    int h=arr.size()-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]*5>value)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
            ans=mid;
        }
    }
    return ans==-1?0:(ans-(n/2)+1);
}
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        int half=n/2;
        int ans=0;
        sort(arr.begin()+n/2,arr.end());
        for(int i=0;i<half;i++)
        {
            ans+=getSatifiedElements(arr,arr[i]);
        }
        return ans;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends
