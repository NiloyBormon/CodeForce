#include <iostream>
int main(){
    int arr[5][5];
    int cordinateX = 0, cordinateY = 0;
    for (int i =0;i<5;i++){
        for(int j =0;j<5;j++){
            std::cin >> arr[i][j];
            if(arr[i][j]==1){
                cordinateX = j+1;
                cordinateY = i+1;
            }
        }
    }
    int resultX =0, resultY=0, result=0;
    if(cordinateX<3){
        resultX = 3-cordinateX;
    }
    else if(cordinateX > 3){
        resultX = cordinateX-3;
    }
    if(cordinateY<3){
        resultY = 3-cordinateY;
    }
    else if(cordinateY>3){
        resultY = cordinateY -3;
    }
    result = resultX+resultY;
    std::cout << result;
}