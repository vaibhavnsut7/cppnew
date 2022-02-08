#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
//sliding window
vector<pair<int,int>> housing(int arr[],int s,int n){
    int i=0;
    int j=0;
    int currsum=0;
    vector<pair<int,int>> ans;
    while (j<n){
        currsum+=arr[j];
        j++;
        while(currsum>s and i<j){
            currsum-=arr[i];
            i++;
        }

        if (currsum==s){
            ans.push_back(make_pair(i, j-1));

        }
    }
    return ans;
}
int main{
    int  arr[]={1,3,2,1,4 ,1,3,2,1,1};
    vector ans=housing(arr,8,11);
    int n=int(ans.size());
    for (int i=0;i<n;i++){
        cout<<ans[i].first<<" "<<ans[i].second;
        cout<<endl;
    }
    int x=-1,y=-1;
    int minwndow=INT_MAX;
    int sub=0;
    for (int i=0;i<n;i++){
        sub=ans[i].second-ans[i].first;
        if (sub<minwndow){
            minwndow=sub;
            x=ans[i].first;
            y=ans[i].second;
        }
    }
    cout<<"minimum window is "<<x<<" "<<y<<endl;
    return ;
    
}
