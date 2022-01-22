
#include<iostream>
#include<vector>
using namespace std;

pair <int,int> UnsortedSubarray(vector<int> arr){
    int n=int(arr.size());
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for (int i=0;i<n;i++){
        int x=arr[i];
        if(outoforder(arr,i)){
            smallest=min(smallest,x);
            largest=max(largest,x);
        }
    }
    if (smallest==INT_MAX){
        return{-1,-1};
    }
    int left=0;
    while(arr[left]<=smallest){
        left++;
    }
    int right=n-1;
    while(arr[right]>=largest){
        right--;
    }
    return {left,right};
    
}
    

int main(){
    vector<int>  arr{1,2,3,4,5,8,6,7,9,10,11};
    auto res=UnsortedSubarray(arr);
    cout<<res.first<<" and "<<res.second<<endl;;
   
    return 0;
}



