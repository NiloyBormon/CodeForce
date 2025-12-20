//not submitted
#include <iostream>
using namespace std;
int main()
{
    int t;
    int operation=0;
    cin >> t;
    for(int i =0;i<t;i++){
        int n ;
        cin>> n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin >> arr[j];
        }
        int j = 0;
        while(j<n-1 && j>-1){
            if(arr[j]>arr[j+1]){
                operation +=1;
                for(int k=0;k<n;k++){
                    arr[k+1]=arr[k+2];
                    n -=1;
                }
            }
            else{
                for(int k=0;k<n;k++){
                   arr[k+1]=arr[k+2];
                   n -=1;
                }
            }
        }
        cout << operation << endl;
    }
}
