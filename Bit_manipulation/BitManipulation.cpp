//
//  main.cpp
//  Jan practice
//
//  Created by Vaibhav Anand on 15 /01/22.
//

#include <iostream>
using namespace std;
int getbit(int n,int pos){
    if((n & (1<<pos))!=0){
        return 1;
    }
    return 0;
}
int setbit(int n,int pos){
    return (n | (1<<pos));
}
int clearbit(int n,int pos){
    int mask=~(1<<pos);
    return (n & mask);

}
int updatebit(int n,int pos,int val){
    int n1=clearbit(n,pos);
    int n2=setbit(n1,val);
    return n2;
}
bool ispowerof2(int n){
    if (n==0){
        return 0;
    }
    else{
        return !(n & n-1);
    }
}
int numofones(int n){
    int count=0;
    while(1){
        if ((n & n-1)!=0){
            count++;
            n--;
        }
        else{
            break;
        }
    }
    return count;

}
void subarr(int arr[],int n){
    for (int i=0;i < (1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}
int uniquenum(int arr[],int n){
    int xorsum=0;
    for (int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}



int uniquenumdouble(int arr[],int n){
    int xorsum=0;
    for (int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    int setBit=0;
    int pos=0;int i=0;
    while(1){
        setBit=getbit(xorsum,i);
        if(setBit==1){
            pos=i;
            break;
        }
        else{
            i++;
        }
    }
    int newxor=0;
    for (int i=0;i<n;i++){
        if (getbit(arr[i],pos)==1){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(newxor^xorsum)<<endl;
    return 0;

}


int uniquenumtriplet(int arr[],int n){
    int result=0;
    for (int i=0;i<64;i++){
        int sum=0;
        for (int j=0;j<n;j++){
            if (getbit(arr[j],i)){
                sum++; 
            }
        }
        if (sum%3!=0){
            result=setbit(result,i);
        }
    }
    return result;
}


int primesieve(int n){
    int prime[1000]={0};
    for (int i=2;i<n;i++){
        if (prime[i]==0){
            for(int j=i*i;j<n;j+=i){
                prime[j]=1;
            }
        }
    }
    int count=0;
    for (int i=0;i<n;i++){
        if (prime[i]==0){
            count++;
//            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<count<<endl;
    return 0;
}


void primefactorsieve(int n){
    int spf[1000]={0};
    for (int i=2;i<=n;i++){
        spf[i]=i;
    }
    for (int i=2;i<=n;i++){
        if (spf[i]==i){
            for (int j=i*i;j<=n;j+=i){
                if (spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while (n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
       
}


void gcd(int n,int m){
    if (n%m==0){
        cout<<m<<endl ;
        return;
    }
    gcd(m,n%m);
}


int main(){
//    int n;int m;
//    cin>>n;
//    cin>>m;
//    primefactorsieve(n);
//    gcd(n,m);
//    primesieve(n);
//    cout<<getbit(4,2)<<endl;
//    cout<<setbit(5,1)<<endl;
//    cout<<clearbit(5,2)<<endl;
//    cout<<updatebit(5,1,1)<<endl;
//    cout<<ispowerof2(2)<<endl;
//    cout<<numofones(18)<<endl;
//    subarr(arr,5);
//    cout<<uniquenum(arr,8)<<endl;
//    uniquenumdouble(arr,8);
//    cout<<uniquenumtriplet(arr,10)<<endl;
    int arr[] = {4,3,6,8,4,9,3,6};
    uniquenumdouble(arr,8);
    return 0;
}



