
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


bool mycompare(pair<int,int> p1,pair<int,int>p2){
    return p1.first<p2.first;
}
vector<int> reduce(vector<int> v){
    int n=v.size();
    vector <pair <int,int> > v1;

    for (int i=0;i<v.size();i++){
        v1.push_back(make_pair(v[i],i));
    }
    sort(v1.begin(),v1.end(),mycompare);
    for (int i=0;i<n;i++){
        cout<<v1[i].first<<" "<<v1[i].second<<endl;;
    }
    vector <int> ans(n,0);
    for (int i=0;i<n;i++){
        ans[v1[i].second]=i;
    }
    return ans;
}
int main(){
    vector <int> v{10,16,7,14,5,3,12,9};
    auto ans=reduce(v);
    for(int x:ans){
        cout<<x<<" ";
    }
   
    return 0;
}



