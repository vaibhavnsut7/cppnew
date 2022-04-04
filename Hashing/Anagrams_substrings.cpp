#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>



vector<int> gethashval(string s,int i,int j){
    vector<int> freq(26,0);
    for (int k=i;k<j;k++){
        char ch=s[k];
        freq[ch-'a']++;
    }
    return freq;
}

int anagrams(string s){
    map<vector<int>,int> m;
    for (int i=0;i<s.length();i++){
        for (int j=i;j<s.length();j++){
            vector<int> freqkey=gethashval(s, i, j);
            m[freqkey]++;
        }
    }
    int ans=0;
    for (auto p:m){
        int freq=p.second;
        if (freq>=2){
            ans+=(freq*(freq-1))/2;
        }
    }
    return ans;
}

/*
 INPUT

 -----------
 OUTPUT

 */
