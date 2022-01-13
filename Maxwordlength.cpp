#include<iostream>
using namespace std;
int largestword(char arr[],int n){
    int currlen=0;
    int maxlen=0;
    int st=0;int maxst=0;
    int i=0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if (currlen>maxlen){
                maxlen=currlen;
                maxst=st;
            }

            currlen=0;
            st=i+1;;
        }
        else{
            currlen++;
        }
        
        if (arr[i]=='\0')
            break;
        i++;
    }
    
    for(int i=0;i<maxst;i++){
        cout<<arr[i+maxst];
    }
    cout<<"\n";
    return maxlen;
    
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    largestword(arr,n);
    return 0;
}
