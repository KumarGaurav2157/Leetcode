class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
         stack<int>st;
         st.push(-1);
         int n=nums2.size();
         mpp[nums2[n-1]]=-1;
         st.push(nums2[n-1]);
         for(int i=n-2;i>=0;i--)
         {
             while(st.top()!=-1 && st.top()<nums2[i])
             st.pop();
             mpp[nums2[i]]=st.top();
             st.push(nums2[i]);
         }
         vector<int>ans;
         for(int i=0;i<nums1.size();i++)
         ans.push_back(mpp[nums1[i]]);
         return ans;
    }
};