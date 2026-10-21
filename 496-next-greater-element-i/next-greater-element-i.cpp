class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        
        for(int i=0;i<nums1.size();i++){
            int temp = 0,ans=-1;  
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    temp = j+1;
                    while(temp<nums2.size() && nums2[temp]<nums2[j]){
                        
                        temp+=1;
                    }
                    if(temp<nums2.size()){
                        ans = nums2[temp];
                    }
                    vec.push_back(ans);
                }
            }
        }
        return vec;
        

        
    }
};