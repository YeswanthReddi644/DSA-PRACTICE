#include <iostream>
#include <climits>
using namespace std;
void printsunarrays(int *arr ,int n){
    int maxsum=INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
            
            maxsum=max(currsum,maxsum);
            if(currsum<0){    // if the sum is negative then initialize it with the "Zero"
                currsum=0;
            }
    }
        
    cout<<"Maximum subarray sum ="<<maxsum<<endl;
}
int main()
{
    int arr[]={12,3,3,4,5,6,6,7,7,8,};
    int n=10;
    printsunarrays(arr,n);
    return 0;
}
