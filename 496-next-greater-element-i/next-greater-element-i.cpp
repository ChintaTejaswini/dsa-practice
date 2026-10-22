class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size();i++){
            int cur = nums1[i];
            int nextgreater = -1;
            int found = false;
            for(int j=0;j<nums2.size();j++){
                if(cur==nums2[j]){
                    found = true;
                }
                if(found && cur < nums2[j]){
                    nextgreater = nums2[j];
                    break;
                }

            }
            nums1[i]= nextgreater;
        }
        return nums1;
    }
};