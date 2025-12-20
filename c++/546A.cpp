#include <iostream>
int main(){
    int k,n,w;
    std::cin>> k >> n >> w; //k is first banana price , n is the doller he hav , w is banana amount
    int bill =0;
    for (int i =1;i<=w;i++){
        bill += i*k; 
    }
    int borrow = bill - n;
    if(borrow <0){
        std::cout<< 0;
    }
    else{
        std::cout<< borrow;
    }
}