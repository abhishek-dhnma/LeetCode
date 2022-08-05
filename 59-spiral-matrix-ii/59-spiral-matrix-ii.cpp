class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
    int pp = pow(n,2);
    
    vector<vector<int>> matrix(n, vector<int>(n));

    int t = 0;
    int d = n-1;
    int l = 0;
    int r = n-1;
    int dir = 0;
    int g=1;

    while(t<=d && l<=r){
        // l->r
        if(dir==0){
        for(int i=l; i<=r; i++){
            matrix[t][i] = g++;;
        }
        //dir = 1;
        t++;
        // t -> d
        }else if(dir==1){
            for(int i=t; i<=d; i++){
               matrix[i][r] = g++;;
            }
            r--;
           // dir = 2;
            // r -> l
        }else if(dir==2){
            for(int i=r; i>=l; i--){
                matrix[d][i] = g++;;
            }
            d--;
          //  dir = 3;
            // d -> t
        }else if(dir==3){
            for(int i=d; i>=t; i--){
                matrix[i][l] = g++;;
            }
            l++;
          //  dir = 0;
        }
        dir = (dir+1)%4;
    }
        
        return matrix;
    }
};