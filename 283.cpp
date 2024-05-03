class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // using two pointer approach
        // pointer j will check if value is not zero then it will swap the element at which i is pointing 
        // Here i is indicating the non zero value
        int i=0;
        int size = nums.size();
        for ( int j=0 ; j<size ; j++){
            if(nums[j] != 0){
                swap(nums[j] , nums[i]);
                i++;
            }
        }
    }
};
