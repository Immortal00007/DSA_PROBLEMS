class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> numsall;
        double ans;
        int i=0, j=0;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int k = (n1+n2);
        int ind2 = k/2;
        int ind1 = ind2-1;
        int count =0;
        int ans1 =-1, ans2 =-1;
        while(i<n1&&j<n2&&(i+j)<=((n1+n2)/2)){
            if(nums1[i]<nums2[j]){
                // numsall.push_back(nums1[i]);
                if(count == ind1) ans1 = nums1[i];
                if(count == ind2) ans2 = nums1[i];
                count++;
                i++;
            } else {
                // numsall.push_back(nums2[j]);
                if(count == ind1) ans1 = nums2[j];
                if(count == ind2) ans2 = nums2[j];
                count++;
                j++;
            }
        }
        // if((i+j)<=((n1+n2)/2)){
        //     while((i+j)<=((n1+n2)/2)){
        //         if(i==n1){
        //             numsall.push_back(nums2[j]);
        //             j++;
        //         } else {
        //             numsall.push_back(nums1[i]);
        //             i++;
        //         }
        //     }
        // }
        while(i<n1){
            if(count==ind1) ans1 = nums1[i];
            if(count == ind2) ans2 = nums1[i];
            count++;
            i++;
        }
        while(j<n2){
            if(count==ind1) ans1 = nums2[j];
            if(count == ind2) ans2 = nums2[j];
            count++;
            j++;
        }
        // int k = (n1+n2)/2;
        if((n1+n2)%2==1){
        
            // ans = ((double)numsall[k]+(double)numsall[k-1])/2;
            return ans2;
            
        } else {
            // ans = numsall[k];
            return (double)((double)(ans1+ans2))/2.0;
            
        }
        // return ans;
    }
};