#include <iostream>
int main(){
    int n,x = 0;
    std::cin>> n;
    std::string statement;
    int result =0;
    for(int i=0;i<n;i++){
        std::cin >> statement;
        if(statement[0] == '+' || statement[2] == '+'){
            x += 1;
        }
        else{
            x -= 1;
        }
    }
    std::cout<< x;
}