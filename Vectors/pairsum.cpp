//
//  main.cpp
//  Jan practice
//
//  Created by Vaibhav Anand on 19 /01/22.

#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;

vector<string> fizzbuzz(int n){
    vector<string> result;
    for (int i=1;i<=n;i++){
        if (i%15==0){
            result.push_back("FizzBuzz");
        }
        else if (i%3==0){
            result.push_back("Fizz");
        }
        else if (i%5==0){
            result.push_back("Buzz");
        }
        else{
            result.push_back(to_string(i));
        }
    }
    return result;
}
vector<int> pairsum(vector<int> arr,int sum){
    unordered_set<int> s;
    vector<int> result;
    for (int i=0;i<arr.size();i++){
        int x=sum-arr[i];
        if (s.find(x)!=s.end()){
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }
        s.insert(arr[i]);
        
    }
    return {};
    
}
int main(){
//    vector <string> output =fizzbuzz(10);
//    for (string x: output){
//        cout<<x<<"," ;
//    }
    vector <int> arr{10,5,2,3,-6,9,11};
    int sum=4;
    auto ans=pairsum(arr,sum);
    if (ans.size()==0){
        cout<<"no pair"<<endl;
    }
    else{
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }

    return 0;

}
//APNA COLLEGE VECTOR AND PAIR VIDEO
//    int arr[]={10,16,7,14,5,3,2,9};
//    vector < pair<int, int> > v;
//
//    for(int i=0; i<sizeof(arr)/sizeof(arr[0]);i++){
//        v.push_back(make_pair(arr[i],i));
//    }
//    sort(v.begin(), v.end(), myCompare);
//    for (int i=0;i<v.size();i++){
//        arr[v[i].second]=i;
//    }
//    for (int i=0;i<v.size();i++){
//        cout<<arr[i]<<" ";
//    }cout<<endl;
//    return 0;
//}

 




