class Solution {
    public boolean containsNearbyAlmostDuplicate(int[] nums, int indexDiff, int valueDiff) {
        TreeMap<Integer,Integer> freq= new TreeMap<>();
        int n=nums.length;
        int i=0;
        freq.put(nums[0], freq.getOrDefault(nums[0], 0) + 1);
        for(int j=1;j<n;j++){
            if(j-i>indexDiff){
                int old=nums[i];
                freq.put(old,freq.get(old)-1);
                if(freq.get(old)==0){
                    freq.remove(old);
                }
                i++;
            }
            Integer key = freq.floorKey(nums[j] + valueDiff);
            if(key!=null && key>=nums[j]-valueDiff){
                return true;
            }
            freq.put(nums[j], freq.getOrDefault(nums[j], 0) + 1);
        } 
      return false;  
    }
}