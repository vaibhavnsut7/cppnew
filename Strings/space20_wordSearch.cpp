#include <iostream>
#include <string>
#include <vector>
using namespace std;


void space20(char *str){
    int space=0;
    for (int i=0;str[i]!='\0';i++){
        if (str[i]==' '){
            space++;
        }
    }
    int finalindex = strlen(str) + 2*space;
    str[finalindex]='\0';
    for (int i=strlen(str)-1;i>=0;i--){
        if (str[i]==' '){
            str[finalindex-1]='0';
            str[finalindex-2]='2';
            str[finalindex-3]='%';
            finalindex-=3;
        }
        else{
            str[finalindex-1]=str[i];
            finalindex--;
        }
    }
}

int main(){
    char input[1000];
    cin.getline(input,1000);
    space20(input);
    cout<<input<<endl;
    return 0;
}
// INPUT= hello world how are you?
//OUTPUT= hello%20world%20how%20are%20you?


//SEARCH INDICES OF WORD IN A PARAGRAPH

vector<int> stringsearch(string big,string small){
    vector<int> result={};
 
    int index=big.find(small);
    while(index!=-1){
        result.push_back(index);
        index=big.find(small,index+1);
    }
    return result;

}

//view.
//3 68
