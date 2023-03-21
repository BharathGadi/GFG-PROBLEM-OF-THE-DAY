/*

Problem: DATE 21-03-2023
  You are going to book a taxi. There are infinite number of points 1, 2, 3... 
  on the X axis and your current position is cur. There are N Taxis near you, and the position of those taxis
  is given as an array pos. Where pos[i] denotes the position of the ith taxi. You are also given an array time. 
  Where time[i] denotes the time taken by the ith taxi to cover 1 unit of distance.
  Your task is to find the minimum time to board a taxi.

    Example
    N = 3, cur = 4
    pos = [1, 5, 6]
    time = [2, 3, 1]  
*/

class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int ans=INT_MAX;
        for(int i=0;i<N;i++)
        {
            ans=min(ans,abs(cur-pos[i])*time[i]);
        }
        return ans;
    }
};

