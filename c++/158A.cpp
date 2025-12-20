#include <iostream>
using namespace std;
int main()
{
    int n , k, advancers, cutoff;
    advancers = 0;
    cin >> n >> k ;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cutoff = arr[k-1];
    if(cutoff < 0){
        cutoff=0;
    }
    for(int i =0;i<n;i++)
    {
        if(arr[i]>= cutoff && arr[i]>0)
        {
            advancers += 1;
        }
    }
    cout<< advancers;
}
