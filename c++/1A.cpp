#include <iostream>
int main(){
    long long n ,m, a, nSide, mSide, result;
    std::cin>> n >> m >> a;
    if (n%a == 0 && m%a ==0)
    {
        nSide = n/a;
        mSide = m/a;
        result = nSide * mSide;
    }
    else if(n%a == 0 && m%a != 0){
        nSide = n/a;
        // nSide += 1;
        mSide = m/a;
        mSide += 1;
        result = nSide * mSide;
    }
    else if (n%a != 0 && m%a ==0){
        nSide = n/a;
        nSide += 1;
        mSide = m/a;
        // mSide += 1;
        result = nSide * mSide;
    }
    else{
        nSide = n/a;
        nSide += 1;
        mSide = m/a;
        mSide += 1;
        result = nSide * mSide;
    }
    std::cout << result;
}