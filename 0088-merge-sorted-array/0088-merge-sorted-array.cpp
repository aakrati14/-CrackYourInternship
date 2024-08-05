class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //using STL
        //Approach : Using STL
//Traverse through nums2 and append its elements to the end of nums1 starting from index m.
//Sort the entire nums1 array using sort() function.
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};