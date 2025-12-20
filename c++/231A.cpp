#include <iostream>
#include <vector>
int main (){
    int n,sum;
    int implementation =0;
    std::cin >> n;
    int sureArr[3]; 
    for(int i=0; i <n;i++){
        for(int j =0;j<3;j++){
            std::cin >> sureArr[j];
        }
        sum = sureArr[0] + sureArr[1] + sureArr[2];
        if(sum >= 2){
            implementation +=1;
        }
    }
    std::cout << implementation;
}