#include<iostream>
#include<vector>
using namespace std;


const int  Arrsize = 10;
vector<int> numsArray(Arrsize);

void print(vector<int> nums,int end){
    for(int i = 0 ; i < end ; ++i){
        cout<<nums[i]<<"  ";
    }
    cout << endl;
}


int count =  0;
void binaryString(int size,int i){
    if(i == size){
        print(numsArray,i);
        count++;
        return;
    }
    numsArray[i] = 0 ;
    binaryString(size,i+1);
    numsArray[i] = 1;
    binaryString(size,i+1);
}

int main()
{
    binaryString(Arrsize,0);
    std::cout << count << '\n';
    std::cout << "Done" << '\n';
}
