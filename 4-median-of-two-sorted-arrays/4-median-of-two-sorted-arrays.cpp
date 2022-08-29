class Solution {
public:
    
     void merge(vector<int>& nums1, vector<int>& nums2, vector<int>& temp){
        int i = 0;
        int j = 0;
        int k = 0;
        
        while(i < nums1.size() and j < nums2.size()){
            
            if(nums1[i] <= nums2[j]){
                temp[k] = nums1[i];
                i++;
            }else if(nums1[i] >= nums2[j]){
                temp[k] = nums2[j];
                j++;
            }
            k++;
             if(k == temp.size()){
                 i = nums1.size();
                 j = nums2.size();
             break;
         }
        }
        
        while(i < nums1.size()){
            temp[k] = nums1[i];
            i++;
            k++;
             if(k == temp.size()){
                 i = nums1.size();
             break;
         }
        }
        
        while(j < nums2.size()){
            temp[k] = nums2[j];
            j++;
            k++;
             if(k == temp.size()){
                 j = nums2.size();
             break;
         }
        }

    }
    

    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int m = nums1.size();
        int n = nums2.size();
        
       // cout << m << " " << n ;
        
        int y = (m+n)/2;
       // cout << " " << y << " ";
        
        vector<int> nums3( y +1 );
        merge(nums1, nums2, nums3);
        //cout << endl;
        //for(auto xx : nums3){
        //    cout << xx << " ";
        //}
        
        double ans = 0;
        
        int l = nums1.size() + nums2.size();
       // cout << l;
        
        
        if(l%2 == 0){ // even
            
        int f = l/2;
           ans = double(nums3[f] + nums3[f-1] )/2 ;
            
        }else{ // odd
          ans = nums3[(l/2)];
            
        }
        
        return ans;
        
        
        
    }
};