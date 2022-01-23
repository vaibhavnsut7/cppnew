
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


pair<int,int> minDifference(vector<int> a1,vector<int> a2){
    int n1 = a1.size();
    int n2 = a2.size();
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());
    int i=0;
    int j=0;
    int diff=0;
    int mindiff=INT_MAX;
    pair<int,int> result;
    while(i<n1 and j<n2){
        diff=abs(a1[i]-a2[j]);
        if (mindiff>diff){
            mindiff=diff;
            result=make_pair(a1[i],a2[j]);
        }
        if (a1[i]<=a2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return result;
}
int main(){
    vector<int> a1{23,5,10,17,30};
    vector<int> a2{26,134,135,14,19};
    auto res=minDifference(a1,a2);
    cout<<res.first<<" "<<res.second<<endl;
   
    return 0;
}



