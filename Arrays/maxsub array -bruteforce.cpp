#include <iostream>
#include <climits>
using namespace std;
void printsunarrays(int *arr ,int n){
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
            int currsum=0;
            for(int k=i;k<=j;k++){
                currsum+=arr[k];
            }
            cout<<currsum<<",";
            maxsum=max(currsum,maxsum);
        }
        cout<<endl;
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
