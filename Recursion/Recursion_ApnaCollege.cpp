#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

//--------------------------------RECURSION----------------------------
#include <iostream>
using namespace std;
int factorial(int a){
    if (a<=1){
        return 1;
    }
    return a*factorial(a-1);
}
int fibo(int n){
    if (n<=1){
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
int sum(int n){
    if (n<=1){
        return n;
    }
    return n+sum(n-1);
}
int pow(int n,int p){
    if(p==1){
        return n;
    }
    if(p==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    return n*pow(n,p-1);
}
bool sorted (int arr[],int n){
    if (n==1){
        return true;
    }
    return (sorted(arr+1,n-1) && arr[0]<arr[1]);
}
void dec(int n){
    if (n==0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n){
    if (n==1){
        cout<<1<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
int firstocc(int arr[],int n,int key,int i){
    if (i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,key,i+1);
}
int lastocc(int arr[],int n,int key,int i){
    if (i==0){
        return -1;
    }
    if (arr[i]==key){
        return i;
    }
    return lastocc(arr,n,key,i-1);

}
int lastocc2(int arr[],int n,int key,int i){
    if (i==n){
        return -1;
    }
    int restarr=lastocc2(arr,n,key,i+1);
    if (restarr!=-1){
        return restarr;
    }
    if (arr[i]==key){
        return i;
    }
    return -1;

}
void reverse(string s){
    if (s.length()==0){
        return;
    }
    string rest=s.substr(1);
    reverse(rest);
    cout<<s[0];
}
void pi(string s,int i){
    if (i==s.length()){
        return;
    }
    if(s[i]=='p' && s[i+1]=='i'){
        cout<<"3.14";
        i=i+1;
    }
    else{
        cout<<s[i];
    }
    pi(s,i+1);
}
void pi2(string s){
    if (s.length()==0){
        return;
    }
    if (s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        pi2(s.substr(2));
    }
    else{
        cout<<s[0];
        pi2(s.substr(1));
    }
}
void towerofHanoi(int n,char src,char dest,char help){
    if (n==0){
        return;
    }
    towerofHanoi(n-1,src,help,dest);
    cout<<"move from "<<src<<" to "<<dest<<endl;
    towerofHanoi(n-1,help,dest,src);
}
void duplicate(string s){ //MINECODE
    if (s.length()==0){
        return;
    }
    if (s[0]!=s[1]){
        cout<<s[0];
        string reststr=s.substr(1);
        duplicate(reststr);
    }
    else{
        string reststr=s.substr(1);
        duplicate(reststr);
    }
}
string removedup(string s){
    if (s.length()==0){
        return "";
    }
    char c=s[0];
    string ans=removedup(s.substr(1));
    if (c==ans[0]){
        return ans;
    }

    return (c+ans);
}
string endstrX(string s){
    if (s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=endstrX(s.substr(1));
    if (ch=='x'){
        return (ans+ch);
    }
    return (ch+ans);
}
void subseq(string s,string ans){
    if (s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string rest=s.substr(1);
    subseq(rest,ans);
    subseq(rest,ans+ch);
}
void subseqascii(string s,string ans){
    if (s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int ascii=ch;
    string rest=s.substr(1);
    subseqascii(rest,ans);
    subseqascii(rest,ans+ch);
    subseqascii(rest,ans+to_string(ascii));

}
