#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

bool comparater(string s1,string s2){
    if (s1.length()==s2.length()){
        return s1<s2;
    }
    else{
        return s1.length()<s2.length();
    }
}


void subsequence(string s,string o,vector<string> &v){
    if (s.size()==0){
        v.push_back(o);
        return;
    }
    char ch=s[0];
    string input_reduce=s.substr(1);
    //include
    subsequence(input_reduce,o+ch,v);
    //exclude
    subsequence(input_reduce,o,v);
    
}
int main(){
    string s;
    cin>>s;
    string o="";
    vector<string> v;
    subsequence(s,o,v);
    sort(v.begin(),v.end(),comparater);
    for (auto s:v){
        cout<<s<<",";
        
    }

    return 0;
    
}
/*
 input
 
 abcd
 ----
 output
 ----------
 
 ,a,b,c,d,ab,ac,ad,bc,bd,cd,abc,abd,acd,bcd,abcd,
 ------------------------------------------------
 */
