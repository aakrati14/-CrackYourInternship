class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
int f=0, ans=0;
for(int i=0;i<n;i++){
    if(f==0){
        ans=nums[i];
    }if(ans==nums[i]){
        f++;
    }else
    {
        f--;
    }
}return ans;

    }
};