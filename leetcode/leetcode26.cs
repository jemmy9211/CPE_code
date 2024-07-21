public class Solution {
    public int RemoveDuplicates(int[] nums) {
        if(nums.Length==1){
            return 1;
        }
        
        int k=1,index=0;
        for(int i=0;i<nums.Length-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[index]=nums[i];
                index++;
            }
        }
        
        
        nums[index]=nums[nums.Length-1];
        index++;
        
        return index;
    }
}
