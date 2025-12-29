class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0; //temp sum
        //brute force, logic is the diagonal are in the 
        //index where i=j and i+j=square row or coloumn
        // tc = O(n**2) due to two for loops   //29/12/2025 learning arrays
        int n = mat.size();
        for(int i=0;i<n;i++){     
            for(int j=0;j<n;j++){
                if(i==j or i+j==n-1){
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
};