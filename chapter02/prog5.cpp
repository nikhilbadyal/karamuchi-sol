#include<iostream>
#include <vector>
using namespace std;

const int arrSize =  4;
vector<int> nums(arrSize);


void print(vector<int> nums,int end){
    for(int i = 0 ; i < end ; ++i){
        cout<<nums[i]<<"  ";
    }
    cout << endl;
}

int count =0 ;

void kString(int size ,int i , int k){
    if(i==size){
        print(nums,i);
        count++;
        return ;
    }else{
        for(int j = 0 ;j<k; ++j){
            nums[i] = j;
            kString(size,i+1,k);
        }
    }

}

int main(){
    int k = 4;

    kString(arrSize,0,k);
    std::cout << count << '\n';
    std::cout << "Done" << '\n';
}
