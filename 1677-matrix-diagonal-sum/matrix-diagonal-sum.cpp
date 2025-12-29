class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        //optimized solution 
        // logic the diagonals are in such a way that i=j and i+j=n-1, j=n-1-i
        //where n is row or coloumn since its a square we could say mat[i][i] and mat[i][n-1-i] but when adding mat[i][n-1-i] the center element might be added again. So in order to avoid that we check if i!= n-1-i then we add that element.
        //Praticing arrays //29/12/2025
        for(int i=0;i<n;i++){
            sum += mat[i][i];
            if(i!=n-1-i){
                sum+=mat[i][n-1-i];
            }
        }
        return sum;
    }
};