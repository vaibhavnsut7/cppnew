
#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;



int largest_band(vector<int> arr){
    int n=arr.size();
    unordered_set<int> s;
    int ans=1;
    for (int x:arr){
        s.insert(x);
    }
    for (auto element:arr){
        int prev=element-1;
//        int next=arr[i]+1;
        if (s.find(prev)==s.end()){//prev not found i.e it is start of chain
            //find entire chain starting from this ellement
            int next=element+1;
            int count=1;
            while(s.find(next)!=s.end()){
                count++;
                next++;
            }
            ans=max(ans,count);
        }
        
    }
    return ans;
}

int main(){
    vector<int> arr{0,3,7,2,5,8,4,6,0,1};
    cout<<largest_band(arr)<<endl;;
    return 0;
}



