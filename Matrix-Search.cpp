#include <iostream>
using namespace std;
int main(){
    int n; int m; int N;
    cin>>n>>m;
    cout<<"\n";
    int arr[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter number to search in matrix"<<endl;
    cin>>N;
    int i=0;int j=n-1;
    bool found=false;
    while (i<n && j>=0){
        if (arr[i][j]==N){
            cout<<"index "<<i<<" and "<< j <<endl;
            found=true;
            return 0;

        }
        if (arr[i][j]>N){
            j-=1;
        }
        else{
            i+=1;
        }
    }
    if (not found)
        cout<<"Element not found"<<endl;

    return 0;
}
