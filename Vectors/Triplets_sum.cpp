#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> triplets(vector<int> arr,int sum){
    int n=arr.size();

    vector< vector<int> > result;

    for (int i=0;i<n-3;i++){
        int j=i+1;
        int k=n-1;

        while (j<k){
            int currsum=arr[i];
            currsum+=arr[j];
            currsum+=arr[k];
            if (currsum==sum){
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if(currsum>sum){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return result;
}

int main(){

    vector<int> arr{1,2,3,4,5,6,7,8,9,15};
    int sum=18;
    auto ans=triplets(arr, sum);
    for (auto v:ans){
        for (auto no:v){
            cout<<no<<endl;
        }
        cout<<endl;
    }

    return 0;

}

