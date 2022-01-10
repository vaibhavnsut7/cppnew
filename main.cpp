//
//  main.cpp
//  C++ DAA
//
//  Created by Vaibhav Anand on 07/12/21.
//

//#include <iostream>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}
//#include <iostream>
//using namespace std;
//const int N= 1e6 +4;
//int a[N];
//int n;
//int ele;
//bool check(int pos){
//    int chkele=a[pos];
//    if (ele<=chkele){
//        return 1;
//    }
//    else{
//        return 0;
//    }
//}
//void binsrch(int left, int right){
//    while (left<right){
//        int midpos=(right+left)/2;
//        if (check(midpos)){
//            right=midpos;
//        }
//        else{
//            left=midpos+1;
//        }
//
//    }
//    if(a[right]==ele)
//        cout<<"element at position "<<right;
//    else
//        cout<<"element not present \n";
//}
//
//int main()
//{
//    cin>>n;
//    for (int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    cin>>ele;
//    binsrch(0,n);
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int product(int a,int b){
//    return a*b;
//}
//void swap(int* a,int* b){
//    int temp=*a;
//    *a=*b;
//    *b=temp;
//}
//void swap2(int &a,int &b){
//    int temp=a;
//    a=b;
//    b=temp;
//}
//
//int main(){
//    int a,b;
//    cout<<"Enter values of a and b"<<endl;
//    cin>>a>>b;
//    cout<<"Product of a and b is "<<product(a,b)<<endl;
//    swap(&a,&b);
//    cout<<"Value of a is "<<a<<"Value of b is "<<b<<endl;
//    cout<<"product is "<<product(a,b)<<endl;
//    swap2(a,b);
//    cout<<"Value of a is "<<a<<"Value of b is "<<b<<endl;
//    return 0;
//}
//LINEAR SEARCH
//#include <iostream>
//using namespace std;
//int linearSearch(int arr[],int key,int n){
//    for (int i=0;i<n;i++){
//        if (arr[i]==key){
//            return i;
//        }
//    }
//    return -1;
//}
////BINARY SEARCH
//int binarySearch(int arr[],int key,int n){
//    int s=0;
//    int e=n;
//    while(s<=e){
//        int mid=(s+e)/2;
//        if (arr[mid]==key){
//            return mid;
//        }
//        else if (arr[mid]>key){
//            e=mid-1;
//        }
//        else{
//            s=mid+1;
//        }
//    }
//    return -1;
//}
//int main(){
//    int n,i;
//    cin>>n;
//    int arr[n];
//    for (i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int key;
//    cin>>key;
////    cout<<linearSearch(arr,key,n)<<endl;
//    cout<<binarySearch(arr,key,n)<<endl;
//    return 0;
//}
//SELECTION SORT
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for (int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for (int i=0;i<n-1;i++){
//        for (int j=i+1;j<n;j++){
//            if (arr[j]<arr[i]){
//                int temp=arr[j];
//                arr[j]=arr[i];
//                arr[i]=temp;
//            }
//        }
//    }
//    for (int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }cout<<endl;
//    return 0;
//}
//BUBBLE SORT
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    for (int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int counter =1;
//    while(counter<n){
//        for (int i=0;i<n-counter;i++){
//            if (arr[i]>arr[i+1]){
//                int temp=arr[i];
//                arr[i]=arr[i+1];
//                arr[i+1]=temp;
//            }
//        }
//        counter++;
//    }
//    for (int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }cout<<endl;
//    return 0;
//}
//--------------------------------RECURSION----------------------------
//#include <iostream>
//using namespace std;
//int factorial(int a){
//    if (a<=1){
//        return 1;
//    }
//    return a*factorial(a-1);
//}
//int fibo(int n){
//    if (n<=1){
//        return 1;
//    }
//    return fibo(n-2)+fibo(n-1);
//}
//int sum(int n){
//    if (n<=1){
//        return n;
//    }
//    return n+sum(n-1);
//}
//int pow(int n,int p){
//    if(p==1){
//        return n;
//    }
//    if(p==0){
//        return 1;
//    }
//    if(n==1){
//        return 1;
//    }
//    return n*pow(n,p-1);
//}
//bool sorted (int arr[],int n){
//    if (n==1){
//        return true;
//    }
//    return (sorted(arr+1,n-1) && arr[0]<arr[1]);
//}
//void dec(int n){
//    if (n==0){
//        return;
//    }
//    cout<<n<<endl;
//    dec(n-1);
//}
//void inc(int n){
//    if (n==1){
//        cout<<1<<endl;
//        return;
//    }
//    inc(n-1);
//    cout<<n<<endl;
//}
//int firstocc(int arr[],int n,int key,int i){
//    if (i==n){
//        return -1;
//    }
//    if(arr[i]==key){
//        return i;
//    }
//    return firstocc(arr,n,key,i+1);
//}
//int lastocc(int arr[],int n,int key,int i){
//    if (i==0){
//        return -1;
//    }
//    if (arr[i]==key){
//        return i;
//    }
//    return lastocc(arr,n,key,i-1);
//
//}
//int lastocc2(int arr[],int n,int key,int i){
//    if (i==n){
//        return -1;
//    }
//    int restarr=lastocc2(arr,n,key,i+1);
//    if (restarr!=-1){
//        return restarr;
//    }
//    if (arr[i]==key){
//        return i;
//    }
//    return -1;
//
//}
//void reverse(string s){
//    if (s.length()==0){
//        return;
//    }
//    string rest=s.substr(1);
//    reverse(rest);
//    cout<<s[0];
//}
//void pi(string s,int i){
//    if (i==s.length()){
//        return;
//    }
//    if(s[i]=='p' && s[i+1]=='i'){
//        cout<<"3.14";
//        i=i+1;
//    }
//    else{
//        cout<<s[i];
//    }
//    pi(s,i+1);
//}
//void pi2(string s){
//    if (s.length()==0){
//        return;
//    }
//    if (s[0]=='p' && s[1]=='i'){
//        cout<<"3.14";
//        pi2(s.substr(2));
//    }
//    else{
//        cout<<s[0];
//        pi2(s.substr(1));
//    }
//}
//void towerofHanoi(int n,char src,char dest,char help){
//    if (n==0){
//        return;
//    }
//    towerofHanoi(n-1,src,help,dest);
//    cout<<"move from "<<src<<" to "<<dest<<endl;
//    towerofHanoi(n-1,help,dest,src);
//}
//void duplicate(string s){ //MINECODE
//    if (s.length()==0){
//        return;
//    }
//    if (s[0]!=s[1]){
//        cout<<s[0];
//        string reststr=s.substr(1);
//        duplicate(reststr);
//    }
//    else{
//        string reststr=s.substr(1);
//        duplicate(reststr);
//    }
//}
//string removedup(string s){
//    if (s.length()==0){
//        return "";
//    }
//    char c=s[0];
//    string ans=removedup(s.substr(1));
//    if (c==ans[0]){
//        return ans;
//    }
//
//    return (c+ans);
//}
//string endstrX(string s){
//    if (s.length()==0){
//        return "";
//    }
//    char ch=s[0];
//    string ans=endstrX(s.substr(1));
//    if (ch=='x'){
//        return (ans+ch);
//    }
//    return (ch+ans);
//}
//void subseq(string s,string ans){
//    if (s.length()==0){
//        cout<<ans<<endl;
//        return;
//    }
//    char ch=s[0];
//    string rest=s.substr(1);
//    subseq(rest,ans);
//    subseq(rest,ans+ch);
//}
//void subseqascii(string s,string ans){
//    if (s.length()==0){
//        cout<<ans<<endl;
//        return;
//    }
//    char ch=s[0];
//    int ascii=ch;
//    string rest=s.substr(1);
//    subseqascii(rest,ans);
//    subseqascii(rest,ans+ch);
//    subseqascii(rest,ans+to_string(ascii));
//
//}
////void keypad(string s,string ans){
////    char ch=s[0];
////    string rest=s.substr(1);
////    keypad(rest,ans+ch);
////}
//int main(){
//
//    int arr[]={4,2,1,2,5,2,7};
////    sorted(arr,7);
////    cout<<firstocc(arr,7,2,0)<<endl;
////    cout<<lastocc(arr,7,2,7)<<endl;
////    cout<<lastocc2(arr,7,2,0)<<endl;
////    reverse("esruoCtnemecalP");
////    cout<<endl;
////    pi("pippppiiiipi",0);
////    cout<<endl;
////    pi2("pippppiiiipi");
////    towerofHanoi(7,'A','C','B');
////    duplicate("aaaabbbeeecdddd");
////    cout<<endl;
////    cout<<removedup("aaaabbbeeecdddd")<<endl;
////    cout<<endstrX("absdxxisksxxxsxfxfxjnxx")<<endl;
////    subseq("ABC","");
//    subseqascii("AB","");
//    return 0;
//}

#include <iostream>
using namespace std;


void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int sumsubarr(int arr[],int n){
    int sum=0;
    int maxsum=0;
    for (int i=0;i<n;i++){
        sum=0;
        for (int j=i;j<n;j++){
            sum=sum+arr[j];
            maxsum=max(sum,maxsum);
//            cout<<sum<<endl;
        }

    }
    cout<<maxsum<<endl;
    return 0;
}
int kadane(int arr[],int n){
    int sum=0;
    int maxsum=INT_MIN;
    for (int i=0;i<n;i++){
        sum=sum+arr[i];
        if (sum<0){
            sum=0;
        }
        maxsum=max(sum,maxsum);
    }
    cout<<maxsum<<endl;
    return 0;
}
int circularsum(int arr[],int n){
    int arrsum=0;int maxsum=0;
    int nonwrapsum=0;int sum=0;
    for (int i=0;i<n;i++){
        arrsum+=arr[i];
//        arr[i]=-arr[i];
    }
    for (int j=0;j<n;j++){
        sum+=(-arr[j]);
        if (sum<0){
            sum=0;
        }
        nonwrapsum=max(nonwrapsum,sum);
    }
    maxsum=arrsum-(-nonwrapsum);
    cout<<maxsum<<endl;
    return 0;
}

int maxarthsub(int arr[],int n){
    int pd=arr[1]-arr[0];
    int ans=2;
    int curr=2;
    for (int i=2;i<n;i++){//WHILE CAN BE USED AS IN VID NO  8.4 APNA COLLEGE
        if (pd==arr[i]-arr[i-1]){
            curr+=1;
        }
        else{
            pd=arr[i]-arr[i-1];
            curr=2;
        }
        ans=max(ans,curr);

    }
    return ans;
}
int recordbrk(int arr[],int n){//MineCode
    int rb=0;
    int prevsum=arr[0];
    for (int i=1;i<n-1;i++){
        if(arr[i]>prevsum && arr[i]>arr[i+1]){
            rb+=1;
        }
        prevsum+=arr[i];
    }
    if (arr[0]>arr[1]){
        rb+=1;
    }
    if(arr[n-1]>prevsum){
        rb+=1;
    }
    return rb;


}
int recordbrk2(int arr[],int n){
    int rb=0;
    int max=-1;
    for (int i=0;i<n;i++){
        if(arr[i]>>max && arr[i]>arr[i+1]){
            rb+=1;
        }
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return rb;
}
int firstrepele(int arr[],int n){
    int minindex=INT_MAX;
    const int x=1e6+2;
    int indarr[x];
    for (int m=0;m<=n;m++){
        indarr[m]=-1;
    }
    for (int i=0;i<n;i++){
        if (indarr[arr[i]]==-1){
            indarr[arr[i]]=i;
        }
        else if(minindex>indarr[arr[i]]){
            minindex=indarr[arr[i]];
        }
//        cout<<minindex<<endl;
    }
    if (minindex>n){
        cout<<"NO repeating elements "<<endl;
    }
    else{
        cout<<"min index is "<<minindex<<endl;
    }
    return 0;
}
int subarrsum(int arr[],int n,int s){//-----------O(n^2)
    int sum;
    for (int i=0;i<n;i++){
        sum=0;
        for (int j=i;j<n;j++){
            sum+=arr[j];
            if (sum==s){
                cout<<i+1<<" "<<j+1<<endl;
                abort();
            }
        }
    }
    return 0;

}
int subarrsum2(int arr[],int n,int s){
    int j=0,i=0;
    int st=-1;
    int en=-1;
    int sum=0;
    while (j<n && sum+arr[j]<=s){
        sum+=arr[j];
        j++;
    }

    if (sum==s){
        cout<<i+1<<" "<<j;
        return 0;
    }
    while (j<n){
        sum+=arr[j];
        while (sum>s){
            sum-=arr[i];
            i++;
        }
        if(sum==s){
            en=j+1;
            st=i+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en <<endl;
    return 0;
}
int spm(int arr[],int n){ //smallestpositivemissing
    const int size=1e6+2;
    int ans=-1;
    int check[size];
    for (int i=0;i<size;i++){
        check[i]=-1;
    }
    for (int i=0;i<n;i++){
        if (arr[i]>=0){
            check[arr[i]]=1;
        }
    }
    for (int j=0;j<n;j++){
        if (check[j]==-1){
            ans=j;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
bool pairsum(int arr[],int n,int s){
    int i=0;int j=n-1;
    while (true){
        if (arr[i]+arr[j]<s){
            i+=1;
        }
        else if (arr[i]+arr[j]>s){
            j-=1;
        }
        if (arr[i]+arr[j]==s){
            cout<<i<<" "<<j<<endl;
            return true;

        }
    }

}
////---------2D ARRAY------------
//
void spiralprt(int **arr,int n,int m){
    int rowst=0;int rowen=n-1;int colen=m-1;int colst=0;
    while(rowst<=rowen && colst<=colen){
        for (int col=colst;col<=colen;col++){
            cout<<arr[rowst][col]<<" ";
        }
        rowst++;
        for (int row =rowst;row<=rowst;row++){
            cout<< arr[row][colen]<<" ";
        }
        colen--;
        for (int col=colen;col>=colst;col--){
            cout<<arr[rowen][col]<<" ";
        }
        rowen--;
        for (int row=rowen;row>=rowst;row--){
            cout<<arr[row][colen]<<" ";
        }
        colst++;
    }
}

int main(){
//    int n,m;
//            int mx=-989898;
//                cin>>n;
//                int arr[n];
//                for (int i=0;i<n;i++){
//                    cin>>arr[i];
//                }
//                for (int i=0;i<n;i++){
//                    mx=max(arr[i],mx);
//                    cout<<mx<<endl;
//                }
//                cout <<mx<<endl;
//                sumsubarr(arr,n);
//                cout<<maxarthsub(arr,n)<<endl;;
//                cout<<recordbrk(arr,n)<<endl;
//                cout<<recordbrk2(arr,n)<<endl;
//                firstrepele(arr,n);
//                int s;
//                cout<<"enter given sum"<<endl;
//                cin>>s;
//                subarrsum2(arr,n,s);
//                subarrsum(arr,n,s);
//                spm(arr,n);
//                kadane(arr,n);
//                circularsum(arr1,n);
//                quickSort(arr, 0, n-1);
//                cout<<pairsum(arr,n,s)<<endl;
    //    2D PART------------------------
//    cin>>n>>m;
//    int **arr[n][m];
//    for (int i=0;i<n;i++){
//        for (int j=0;j<m;j++){
//            cin>>**arr[i][j];
//        }
//    }
//
//    spiralprt(arr,n,m);
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a1[n1][n2];
    int a2[n2][n3];
    int ans[n1][n3];
    for (int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cin>>a1[i][j];
        }
    }
    for (int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cin>>a2[i][j];
        }
    }
    for (int i=0;i<n1;i++){
        for (int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j]+=a1[i][k]*a2[k][j];
            }
        }
    }
    for (int i=0; i<n1; i++){
        for (int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

