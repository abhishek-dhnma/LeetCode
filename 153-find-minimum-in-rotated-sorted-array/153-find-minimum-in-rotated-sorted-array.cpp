class Solution {
public:
    int findMin(vector<int>& arr) {
        
        // https://www.callicoder.com/find-minimum-element-in-rotated-sorted-array/
        int n = arr.size();
        int s =0;
    int e = n-1;

    if(arr[s] <= arr[e]){
        return arr[s];
    }


    while(s <= e){

        int mid = s + ((e-s)>>1);

        if(mid > 0 and arr[mid] < arr[mid-1]){
                return arr[mid];

        }
         if(mid < n-1 and arr[mid+1] < arr[mid] ){
             return arr[mid+1];
        }


        if(arr[s] <= arr[mid]){
            s = mid+1;
        }else{
            e = mid-1;
        }

        
    }

    return -1;
        
    }
};