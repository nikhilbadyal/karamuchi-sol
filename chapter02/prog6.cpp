#include<iostream>
#include<vector>
using namespace std;

int getMax(vector<vector<int>>& nums,int rows , int columns, int curRow,int curCol){
    int ans = 0 ;


    if(curRow<0|| curCol<0 || curRow>=rows||curRow>=columns){
        ans = 0;
    }else if(nums[curRow][curCol] ==1){
        nums[curRow][curCol] =0;
        ans = 1
        +getMax(nums,rows,columns,curRow-1,curCol)
        +getMax(nums,rows,columns,curRow+1,curCol)+
        +getMax(nums,rows,columns,curRow,curCol+1)+
        +getMax(nums,rows,columns,curRow,curCol-1)+
        +getMax(nums,rows,columns,curRow-1,curCol-1)+
        +getMax(nums,rows,columns,curRow-1,curCol+1)+
        +getMax(nums,rows,columns,curRow+1,curCol-1)+
        +getMax(nums,rows,columns,curRow+1,curCol+1);
    }

    return ans ;
}
int connectedLength(vector<vector<int>> & nums,int rows , int columns){
    int maxLength = 0 ;

    for(int i= 0 ;i<rows;++i){
        for(int j=0; j<columns;++j){
            maxLength = max(maxLength,getMax(nums,rows,columns,i,j));
        }
    }
    return maxLength;
}
int main()
{
    vector<vector<int>> nums = {{0,0,1,1},{1,0,1,1},{0,0,1,1}};
    // vector<vector<int>> nums = {{0,0,1,1},{1,0,1,1},{0,0,1,1}};

    std::cout << connectedLength(nums,nums.size(),nums[0].size())<< '\n';
    std::cout << "Done" << '\n';
    return 0 ;
}
