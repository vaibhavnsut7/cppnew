
#include<iostream>
using namespace std;

class Circle{
private:
    int radius;
    int x,y;
public:
    Circle(){
        cout<<"default cons"<<endl;
    }
    Circle(int rr,float xx,float yy){
        rr=radius;
        xx=x;
        yy=y;
    }
    Circle &operator = (Circle &obj){
        cout<<"operator overload "<<endl;
        radius=obj.radius;
        x=obj.x;
        y=obj.y;
        return *this;
    }
    
    Circle(Circle &c){
        cout<<"copy constructor"<<endl;
        radius=c.radius;
        x=c.x;
        y=c.y;
    }
    void showdata(){
        cout<<"radius "<< radius <<endl;
        cout<<"x " << x <<endl;
        cout<<"y "<< y <<endl;
    }
};
int main(){
    Circle c1(10 , 2.5f ,2.5f);
    Circle c2,c3;
    c3=c2=c1;
    Circle c4=c3;
    cout<<endl;
    c1.showdata();
    cout<<endl;
    c2.showdata();
    cout<<endl;
    c3.showdata();
    cout<<endl;
    c4.showdata();
    return 0;

}



//-------------------------OUTPUT-------------------
//default cons
//default cons
//operator overload
//operator overload
//copy constructor
//
//radius 11816
//x 1
//y 835680
//
//radius 11816
//x 1
//y 835680
//
//radius 11816
//x 1
//y 835680
//
//radius 11816
//x 1
//y 835680
//Program ended with exit code: 0
