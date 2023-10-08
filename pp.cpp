class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n=matrix.size();
        int m=matrix[0].size();
        int r=n-1;
        int c=0;

        int poi = matrix[r][c];

        while(r>=0){

            if(poi<=target){

                if(poi==target)
                    return true;

                while(poi<target && c<m)
                       c++;
            

                if(poi==target && c<m)
                    return true;
                
                else
                    c=0;

            }

            r--;
        }


        return false;
             
    }
};