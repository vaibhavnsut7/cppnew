
#include<iostream>
#include<vector>
using namespace std;


int mountain(int arr[],int n){

    int count=0;
    int ans=0;
    for (int i=1;i<n-1;)
    {
        if (arr[i]>arr[i-1] and arr[i]>arr[i+1])
        {
            count=1;
            int j=i;
            while(arr[j]>arr[j-1] and j>0)
            {
                count++;
                j--;
            }
            while(arr[i]>arr[i+1])
            {
                count++;
                i++;
            }
        }
        else{
            i++;
        }
        ans=max(count,ans);
    }
    return ans;

}
int main(){
        int arr[]={0,1,2,3,4,5,4,3,2,1,0};
        cout<<mountain(arr,11)<<endl;
    return 0;
}



