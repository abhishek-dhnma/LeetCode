class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        
        int n = mat.size();
       
        
        for(int j=0; j<n; j++){ // j -> coloum || i -> row

        int s =0;
        int e = n-1;

        while(s<e){

            swap(mat[s][j], mat[e][j]);
            s++;
            e--;

        }
    }

    // STEP 2. swap elements above diagonal to below elements
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
        
        
        
    }
};