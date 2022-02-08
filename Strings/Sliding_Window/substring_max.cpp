#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
#include <unordered_map>
string unique_substring(string str){
    int i=0;
    int j=0;
    int n=int(str.size());
    unordered_map <char,int> m;
    int window_len=0;
    int max_window_len=0;
    int window_start=-1;
    while(j<n){
        char ch=str[j];
        //if it is inside hashmap and its index >= start of current window index
        if (m.count(ch) and m[ch]>=i){
            i=m[ch]+1;
            window_len=j-i;

        }
        m[ch]=j;
        window_len++;
        j++;
        if (max_window_len<window_len){
            max_window_len=window_len;
            window_start=i;
        }
 
    }
    return str.substr(window_start,max_window_len);

int main{
    string str;
    cin>>str;
    cout<<unique_substring(str)<<endl;
    
}
/*
 INPUT
 abcabed
 -----------
 OUTPUT
 cabed
 */
