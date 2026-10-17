class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
       Arrays.sort(nums);
       List<List<Integer>> res=new ArrayList<>();
       int sum=0;
        for(int i=0;i<nums.length-2;i++){
            sum=0;
             int j=i+1;
            int k=nums.length-1;
            if(i>0 && nums[i-1]==nums[i]){
                continue;
            }
            while(j<k){
                sum=nums[i];
                 sum+=(nums[j]+nums[k]);
                if(sum==0){
                    List<Integer> resSet=new ArrayList<>();
                   
                    resSet.add(nums[i]);
                    resSet.add(nums[j]);
                    resSet.add(nums[k]);
                    res.add(resSet);
                    j++;k--;
                    while((j<k) && nums[j]==nums[j-1]){
                    j++;
                    }
                    while((k>j) && nums[k]==nums[k+1]){
                    k--;
                    }
                    }
                else if(sum<0){
                    j++;
                    while((j<k) && nums[j]==nums[j-1]){
                    j++;
                    }
                }else{
                    k--;
                    while((k>j) && nums[k]==nums[k+1]){
                    k--;
                    }
                    
                }

               
            }
           
        }
         
        return res;
    }
}