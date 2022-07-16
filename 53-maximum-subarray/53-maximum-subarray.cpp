class Solution {
public:
    int maxSubArray(vector<int>& A) {
        int n = A.size();
        int X = A[0];
	int maxSubArraySumSoFar = X;
	for(int i=1; i<n; i++) {
		X = max(X+A[i], A[i]);
		if(X > maxSubArraySumSoFar) {
			maxSubArraySumSoFar = X;
		}
	}

	return maxSubArraySumSoFar;

    }
};