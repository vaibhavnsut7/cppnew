#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector <string> tokeniser(string str){
    stringstream ss(str);
    string token;
    vector <string> tokens;
    while(getline(ss,token,' ')){
        tokens.push_back(token);
    }
    for (auto token: tokens){
        cout<<token<<",";
    }
    return tokens;
    
}
void chartokeniser(char *str){
    char *token=strtok(str," ");
    while (token!=NULL){
        cout<<token;
        token=strtok(NULL," ");
    }
}

char *mytokeniser(char *str,char delim){
    static char *input=NULL;
    if (str!=NULL){
        input=str;
    }
    if (input==NULL){
        return NULL;
    }
    char *token=new char[strlen(input)+1];
    int i=0;
    for (;input[i]!='\0';i++){
        if (input[i]!=delim){
            token[i]=input[i];
        }
        else{
            input[i]='\0';
            input+=i+1;
            return token;
        }
    }
    //loop ends
    token[i]='\0';
    //reset input as NULL
    input =NULL;//as we know at last token has to return NULL
    return token;

}

int main(){
    char  str[1000];
    cin.getline(str,1000);
    char *token=mytokeniser(str, ' ');
    while (token!=NULL){
        cout<<token<<endl;;
        token=mytokeniser(NULL,' ');
    }
    return 0;
}
