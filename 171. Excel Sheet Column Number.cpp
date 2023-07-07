//maths
//Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.


class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        int res=0;
        for(char c: columnTitle){
            int a=c-'A'+1;
            res=res*26 +a; 
        }       
        return res; 
    }
};
