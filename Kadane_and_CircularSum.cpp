
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int kadane(vector <int> arr){
    int n=arr.size();
    int ans=INT_MIN;
    int currsum=0;
    for (int i=0;i<n;i++){
        currsum+=arr[i];
        if (currsum<0){
            currsum=0;
        }
        ans=max(currsum,ans);
    }
    return ans;
}
int circularmaxsum(vector <int> arr){
    int wrapsum=0;int n=arr.size();
    int arrsum=0;
    int nonwrapsum=kadane(arr);
    //TOTAL SUM OF GIVEN ARRAY AND REVERSING ELEMENTS TO CALCULATE NONWRAPSUM
    for (int i=0;i<n;i++){
        arrsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=arrsum-(-kadane(arr));

    
    return max(wrapsum,nonwrapsum);
}




