class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq (piles.begin(),piles.end());
        while(k--)
        {
            auto firstval=pq.top();
            pq.pop();
            int val;
            if(firstval%2==0) val=firstval/2;
            else val=firstval/2+1;
            pq.push(val);
        }
        int sum=0;
        while(!pq.empty()){
            sum = sum+pq.top();
            pq.pop();
        }
        return sum; 
    }
};
