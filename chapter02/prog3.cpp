#include<iostream>
#include <vector>
using namespace std;


bool isSorted(vector<int> nums,int size){
    if(size==1){
        return true;
    }else{
        return nums[size-1] < nums[size-2] ? false : isSorted(nums,size-1);
    }

return false;
}

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    std::cout <<isSorted(nums,nums.size())<<endl;
    cout << "Done";
    return 0;
}
