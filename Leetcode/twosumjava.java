import java.util.HashMap;
import java.util.Map;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> numToIndex = new HashMap<Integer, Integer>();
        for(int i = 0; i < nums.length; i++){
            
            if(numToIndex.containsKey(target - nums[i]) == true){
                return new int[] {i, numToIndex.get(target - nums[i])};
            }
            else{
                numToIndex.put(nums[i], i);
            }
        }
        return new int [] {};
    }
}
