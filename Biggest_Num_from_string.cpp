//
//  main.cpp
//  Jan practice
//
//  Created by Vaibhav Anand on 13/01/22.
//

#include <iostream>
#include <string>
using namespace std;

void maxstr(string s,int n){
    string max="0";
    string ans="";
    
    int index=0;
    while(1){
        for (int i=0;i<size(s);i++){
            if (s[i]>max[0]){
                max=s[i];
                index=i;
            }
        }
        ans.append(max);
        max="";
        s.erase(index,1);
        if (size(ans)==n){
            break;
        }
    }
    cout<<ans<<endl;
}
int main(){
    string s="122345987";
    int n=9;
    maxstr(s,n);
    return 0;
}


