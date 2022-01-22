
#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;

int raintrap(int arr[],int n){//WITHOUT VECTOR
    int lmax[n];
    int rmax[n];

    int lmax1=0;
    int rmax1=0;
    int cap=0;
    for (int i=0;i<n;i++){
        lmax1=max(lmax1,arr[i]);
        lmax[i]=lmax1;
    }
    for (int i=0;i<n;i++){
        cout<<lmax[i]<<" ";
    }cout<<endl;
    
    for (int i=n-1;i>=0;i--){
        rmax1=max(rmax1,arr[i]);
        rmax[i]=rmax1;
    }
    for (int i=0;i<n;i++){
        cap+=min(lmax[i],rmax[i])-arr[i];
    }
    return cap;
}



int raintrap2(vector<int> height){
    int n=int(height.size());

    if (n<=2){
        return 0;
    }
    vector<int> left(n,0), right(n,0);
    left[0]=height[0];
    right[n-1]=height[n-1];
    for (int i=0;i<n;i++){//DONE IN SINGLE LOOP
        left[i]=max(left[i-1],height[i]);//IMPORTANT CONCEPT OF COMPARISION IN SINGLE LINE
        right[n-i-1]=max(right[n-i],height[n-i-1]);//IMPORTANT CONCEPT OF COMPARISION IN SINGLE LINE
    }
    int water=0;
    for (int i=0;i<n;i++){
        water+=min(left[i],right[i])-height[i];
    }
    return water;
    
}


int main(){
    vector<int> height{4,2,0,3,2,5};
    cout<<raintrap2(height)<<endl;
    return 0;






