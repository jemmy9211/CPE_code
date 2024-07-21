public class Solution {
    public int SearchInsert(int[] nums, int target) {
        int r,l,m;
        l=0;
        r=nums.Length-1;
        while(true){
            
            if(target>nums[nums.Length-1]){
                return nums.Length;
            }else if(target<=nums[0]){
                return 0;
            }
            
            m=(r+l)/2;
            
            if(target<=nums[m+1] && target>nums[m]){
                return m+1;
            }else if(target <= nums[m]){
                r=m;                
            }else if(target > nums[m]){
                l=m;
            }
        }
        return 0;
    }
}
