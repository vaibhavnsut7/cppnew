#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int count_gpTriplets(vector<int> arr,int r){
    int n=sizeof(arr);
    unordered_map<long,long> left;
    unordered_map<long,long> right;
    for (auto x:arr){
        right[x]++;
        left[x]=0;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        right[arr[i]]--;
        if(arr[i]%r==0){
            long a=arr[i]/r;
            long b=arr[i];
            long c=arr[i]*r;
            ans+=left[a]*right[c];
            if (left[a]>0 and right[c]>0){
                long x=max(left[a],right[c]);
                for (int i=0;i<x;i++){
                    cout<<a<<" "<<b<<" "<<c<<endl;
                }
            }
        }
        left[arr[i]]++;
    }
//    cout<<ans<<endl;
    return ans;

}

/*
 INPUT
 vector<int> arr{1,16,4,16,64,16};
 int r=4;
 cout<<count_gpTriplets(arr,r);
 -----------
 OUTPUT
 1 4 16
 1 4 16
 4 16 64
 */
