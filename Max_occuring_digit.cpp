//
//  main.cpp
//  Jan practice
//
//  Created by Vaibhav Anand on 13/01/22.
//

#include <iostream>
#include <string>
using namespace std;


int main(){
    string s="abccddeeeeefffff";
    int fre[26];
    for (int i=0;i<26;i++){
        fre[i]=0;
    }
    for (int i=0;i<size(s);i++){
        fre[s[i]-'a']++;
    }
    int mx=INT_MIN;
    char ans='a';
    for (int i=0;i<26;i++){
        if(fre[i]>+mx){
            mx=fre[i];
            ans=i+'a';
        }
       
    }
    cout<<ans<<endl;
    cout<<"no of times occuring "<< mx<<endl;
    return 0;
}


