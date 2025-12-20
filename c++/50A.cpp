#include <iostream>
int main(){
    int m , n;
    std::cin>> m >> n;
    int area = n*m;
    int maxDomino = area /2;
    std::cout << maxDomino;
}