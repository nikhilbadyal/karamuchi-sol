#include<iostream>

int fact(int num){
    if(num ==0 || num == 1){
        return 1;
    }
    return num * fact(num-1);
}

int m
ain(){
    int num = 5;
    std::cout<<fact(num);
    return 0 ;
}
