#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

string ExtractStringAtKey(string str,int key){
    char *s=strtok((char *)str.c_str()," ");
    while(key>1){
        s=strtok(NULL," ");
        key--;
    }
    return (string)s;
}

int convertToInt2 (string str){//Another method to Conver String to Integer
    stringstream ss(str);
    int x=0;
    ss>>x;
    return x;
}
int convertToInt(string s){//method to Conver String to Integer
    int ans=0;
    int p=1;
    for(int i=int(s.length()-1);i>=0;i--){
        ans=ans+((s[i]-'0')*p);//s[i]-'0' to get integer of digit
        p=p*10;//power is 10 times i.e. ones tens hundered thousand.........
    }
    return ans;
}
bool numericCompare(pair<string,string> p1,pair<string,string> p2){
    string n1,n2;
    n1=p1.second;
    n2=p2.second;
    return convertToInt(n1)<convertToInt(n2);

}


bool lexicoCompare(pair<string,string> p1,pair<string,string> p2){
    return p1.second<p2.second;
}


int main(){
    
    
    int n;
    cin>>n;
    cin.get();
    string temp;

    vector <string> s;

    for (int i=0;i<n;i++){
        getline(cin,temp);
        s.push_back(temp);
    }
    
    int key;
    string reversal,ordering;
    cin>>key>>reversal>>ordering;
    
    vector<pair<string,string>> vp;
    
    for (int i=0;i<n;i++){
        vp.push_back({s[i],ExtractStringAtKey(s[i],key)});
    }
    
    
    
    //--------SORTING
    if (ordering=="numeric"){
        sort(vp.begin(),vp.end(),numericCompare);
    }
    else{
        sort(vp.begin(),vp.end(),lexicoCompare);
    }
    
    //------reverse check
    if (reversal=="true"){
        reverse(vp.begin(),vp.end());
    
    }
    
    //------output
    for(int i=0;i<n;i++){
        cout<<vp[i].first<<endl;
    }

    return 0;
}
/*
 Sample Input
 ------------
 3
 92 022
 82 12
 77 13
 2 false numeric
 Sample Output
 -------------
 82 12
 77 13
 92 022
 -----------
 input

 3
 20 10 30
 30 40 05
 50 15 60
 3 false numeric
 ------------------
 Output

 20 10 30
 30 40 05
 50 15 60
 --------------
 */

