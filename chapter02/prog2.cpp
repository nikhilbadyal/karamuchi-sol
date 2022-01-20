#include<iostream>
using namespace std;


void towerOfHanoi(int diskCount,string source , string destination , string aux){
    if(diskCount == 1){
        std::cout << "Moving disk from "<<source<< " to "<<destination<<"."<<endl;
        return;
    }
    towerOfHanoi(diskCount-1,source,aux,destination);
    std::cout << "Moving disk from "<<source<< " to "<<destination<<"."<<endl;
    towerOfHanoi(diskCount-1 , aux,destination,source);
}
int main(){
    string source = "A";
    string destination ="B";
    string aux = "C";
    towerOfHanoi(3,source ,destination , aux);
    cout<<"Done";

    return 0 ;
}
