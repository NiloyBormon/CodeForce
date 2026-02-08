#include<iostream>
int main()
{
    char arr1[100] = {};
    for(int i=0;i<100;i++)
    {
        arr1[i] = '0' ;
    }
    for(int i=0;i<100;i++)
    {
        std::cin >> arr1[i] ;
    }
    char arr2[100] = {};
    for(int i=0;i<100;i++)
    {
        arr2[i] = '0' ;
    }
    for(int i=0;i<100;i++)
    {
        std::cin >> arr1[i] ;
    }
    int arr3[100];
    int arr4[100];
    for(int i=0;i<100;i++)
    {
        arr3[i] = 0 ;
        arr4[i] = 0 ;
    }
    for(int i=0; i<100; i++)
    {
        arr3[i] = arr1[i];
        arr4[i] = arr2[i];
    }
    int sum1 =0;
    int sum2 =0;
    for(int i=0; i<100; i++)
    {
         sum1 += arr3[i];
         sum2 += arr4[i]; 
    }
    if(sum1 < sum2)
    {
        std::cout << "-1";
    }
    else if(sum1 > sum2)
    {
        std::cout << "1";
    }
    else
    {
        std::cout << "0";
    }
}