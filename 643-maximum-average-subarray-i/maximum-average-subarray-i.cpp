class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      int i=0;
      int j=k-1;
      double average=0;
      int sum=0;
      int n=nums.size()-1;
      double maxavg=INT_MIN;
      for(int i=0;i<=j;i++){
        sum+=nums[i];
        average=double(sum)/double(k);
        maxavg=average;
      }  
      for(int i=1;i<=n-k+1;i++){
        j++;
        sum-=nums[i-1];
        sum+=nums[j];
        average=double(sum)/double(k);
        maxavg=max(average,maxavg);

      }
      return maxavg;
    }
};