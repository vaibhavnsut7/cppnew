#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int sumsubarr(int arr[],int n){
    int sum=0;
    int maxsum=0;
    for (int i=0;i<n;i++){
        sum=0;
        for (int j=i;j<n;j++){
            sum=sum+arr[j];
            maxsum=max(sum,maxsum);
//            cout<<sum<<endl;
        }

    }
    cout<<maxsum<<endl;
    return 0;
}
int kadane(int arr[],int n){
    int sum=0;
    int maxsum=INT_MIN;
    for (int i=0;i<n;i++){
        sum=sum+arr[i];
        if (sum<0){
            sum=0;
        }
        maxsum=max(sum,maxsum);
    }
    cout<<maxsum<<endl;
    return 0;
}
int circularsum(int arr[],int n){
    int arrsum=0;int maxsum=0;
    int nonwrapsum=0;int sum=0;
    for (int i=0;i<n;i++){
        arrsum+=arr[i];
//        arr[i]=-arr[i];
    }
    for (int j=0;j<n;j++){
        sum+=(-arr[j]);
        if (sum<0){
            sum=0;
        }
        nonwrapsum=max(nonwrapsum,sum);
    }
    maxsum=arrsum-(-nonwrapsum);
    cout<<maxsum<<endl;
    return 0;
}

int maxarthsub(int arr[],int n){
    int pd=arr[1]-arr[0];
    int ans=2;
    int curr=2;
    for (int i=2;i<n;i++){//WHILE CAN BE USED AS IN VID NO  8.4 APNA COLLEGE
        if (pd==arr[i]-arr[i-1]){
            curr+=1;
        }
        else{
            pd=arr[i]-arr[i-1];
            curr=2;
        }
        ans=max(ans,curr);

    }
    return ans;
}
int recordbrk(int arr[],int n){//MineCode
    int rb=0;
    int prevsum=arr[0];
    for (int i=1;i<n-1;i++){
        if(arr[i]>prevsum && arr[i]>arr[i+1]){
            rb+=1;
        }
        prevsum+=arr[i];
    }
    if (arr[0]>arr[1]){
        rb+=1;
    }
    if(arr[n-1]>prevsum){
        rb+=1;
    }
    return rb;


}
int recordbrk2(int arr[],int n){
    int rb=0;
    int max=-1;
    for (int i=0;i<n;i++){
        if(arr[i]>>max && arr[i]>arr[i+1]){
            rb+=1;
        }
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return rb;
}
int firstrepele(int arr[],int n){
    int minindex=INT_MAX;
    const int x=1e6+2;
    int indarr[x];
    for (int m=0;m<=n;m++){
        indarr[m]=-1;
    }
    for (int i=0;i<n;i++){
        if (indarr[arr[i]]==-1){
            indarr[arr[i]]=i;
        }
        else if(minindex>indarr[arr[i]]){
            minindex=indarr[arr[i]];
        }
//        cout<<minindex<<endl;
    }
    if (minindex>n){
        cout<<"NO repeating elements "<<endl;
    }
    else{
        cout<<"min index is "<<minindex<<endl;
    }
    return 0;
}
int subarrsum(int arr[],int n,int s){//-----------O(n^2)
    int sum;
    for (int i=0;i<n;i++){
        sum=0;
        for (int j=i;j<n;j++){
            sum+=arr[j];
            if (sum==s){
                cout<<i+1<<" "<<j+1<<endl;
                abort();
            }
        }
    }
    return 0;

}
int subarrsum2(int arr[],int n,int s){
    int j=0,i=0;
    int st=-1;
    int en=-1;
    int sum=0;
    while (j<n && sum+arr[j]<=s){
        sum+=arr[j];
        j++;
    }

    if (sum==s){
        cout<<i+1<<" "<<j;
        return 0;
    }
    while (j<n){
        sum+=arr[j];
        while (sum>s){
            sum-=arr[i];
            i++;
        }
        if(sum==s){
            en=j+1;
            st=i+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en <<endl;
    return 0;
}
int spm(int arr[],int n){ //smallestpositivemissing
    const int size=1e6+2;
    int ans=-1;
    int check[size];
    for (int i=0;i<size;i++){
        check[i]=-1;
    }
    for (int i=0;i<n;i++){
        if (arr[i]>=0){
            check[arr[i]]=1;
        }
    }
    for (int j=0;j<n;j++){
        if (check[j]==-1){
            ans=j;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
bool pairsum(int arr[],int n,int s){
    int i=0;int j=n-1;
    while (true){
        if (arr[i]+arr[j]<s){
            i+=1;
        }
        else if (arr[i]+arr[j]>s){
            j-=1;
        }
        if (arr[i]+arr[j]==s){
            cout<<i<<" "<<j<<endl;
            return true;

        }
    }

}
