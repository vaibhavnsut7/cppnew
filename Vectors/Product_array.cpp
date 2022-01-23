
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


vector<int> productarray(vector<int> arr){
    int n=int(arr.size());
    if (n==1){
        return {0};
    }
    vector <int> res(n,1);
    int temp=1;
    //LEFT SIDE PRODUCT FROM 0TH TO iTH ELEMENT
    for (int i=0;i<n;i++){
        res[i]=temp;
        temp=temp * arr[i];
    }
    temp=1;//UPDATE TEMP
    
    
    //right side product
    for (int i=n-1;i>=0;i--){
        res[i]=res[i]*temp;//IMPORTANT
        temp=temp*arr[i];
    }
    return res;
}
int main(){
    vector <int> arr{2,2,3,4};
    auto res=productArray1(arr);
    for (int x:res){
        cout<<x<<" ";

    }
   
    return 0;
}



