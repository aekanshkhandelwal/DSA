class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total= row*col;

        int str=0;
        int stc=0;
        int enr=row-1;
        int enc=col-1;

        while(count<total)
        {
            for(int index=stc  ;count<total && index <=enc ;index++)
            {
                ans.push_back(matrix[str][index]);
                count++;
            }
            str++;
            for(int index=str  ;count<total && index<=enr  ;index++)
            {
                ans.push_back(matrix[index][enc]);
                count++;
            }
            enc--;
            for(int index=enc  ;count<total && index>=stc  ;index--)
            {
                ans.push_back(matrix[enr][index]);
                count++;
            }
            enr--;
            for(int index=enr  ;count<total && index>=str  ;index--)
            {
                ans.push_back(matrix[index][stc]);
                count++;
            }
            stc++;
        }
        return ans;
        
    }
};