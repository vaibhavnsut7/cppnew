//
//  main.cpp
//  Jan practice
//
//  Created by Vaibhav Anand on 13/01/22.
//

#include <iostream>
#include <string>
using namespace std;
//void increment(int *a){
//    *a++;
//}
//void swap(int *a,int *b){
//    int temp=*a;
//    *a=*b;
//    *b=temp;
//}
//
//int main(){
//    string str1="rahulraa";
//    string str2="rakesh";
//    str2="";
//    str2+="s";
//    cout<<size(str2)<<endl;
//
////    getline(cin,str);
//    return 0;
//}
void largestword(char arr[],int n){
    string curr="";
    string ans="";
    int i=0;
    while (1){
        if (arr[i]==' ' || arr[i]=='\0'){
            if (size(curr)>size(ans)){
                ans=curr;
            }
            curr="";
        }
        else{
            curr+=arr[i];
        }
        if (arr[i]=='\0')
            break;
        i++;
    }
    cout<<ans<<endl;
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

