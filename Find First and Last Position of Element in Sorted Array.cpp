class Solution {
private:
int upperBound(vector<int> &nums, int target){
	int s = 0, e = nums.size()-1;
	
	int ans = -1;
	while(s<=e){
	int mid =(s+e)/2;
    if(nums[mid]==target){
        ans = mid;
        s = mid+1;
    }
    if (nums[mid]>target){
	   
	   e = mid -1;
   }
   else {
	   s = mid +1;
  		 }
		 

	}
	return ans;	
}
int lowerBound(vector<int> &nums, int target) {
	int s = 0, e = nums.size()-1;
	
	int ans = -1;
	while(s<=e){
	int mid =(s+e)/2;
    if(nums[mid]==target){
        ans = mid;
        e = mid-1;
    }
    if (nums[mid]>=target){
	   
	   e = mid -1;
   }
   else {
	   s = mid +1;
  		 }
		 

	}
	return ans;

}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;
    ans.push_back(lowerBound(nums,target));
    ans.push_back(upperBound(nums,target));
    return ans;

    }

};