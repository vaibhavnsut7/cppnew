
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class circle{
private:
    char color;
    float radius;
    static int count;//USING STATIC MAKES COUNT USABLE FOR ALL OBJECTS OF THE CLASS.
public:
    circle(char c,float r){
        color=c;
        radius=r;
        count++;
    }
    static void showcount(){
        cout<<"count "<<count<<endl;
    }
};
int circle::count=0;//COUNT IN showcount() IS NOT SPECIFIC TO ANY OBJECT HENCE IT IS NOT CALLED USING ANY OBJECT. BUT BY THE CLASS CIRCLE :: SYNTAX.

int main(){
    circle c1('R', 1.2f);
    circle::showcount();
    circle c2('G',2.2f);
    circle::showcount();
    circle c3('B',3.2f);
    circle::showcount();
    circle c4=c3; //CALLS COPY CONSTRUCTOR
    c4.showcount();
}




