
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Complex{//OPERATOR OVERLOAD
private:
    int real, imag;
public:
    Complex (int r=0,int i=0){               //SETTING REAL AND IMAG AS THEY ARE PRIVATE
        real=r;
        imag=i;
    }
    Complex operator + (Complex const &obj){
         Complex ans;
         ans.imag=imag + obj.imag;
         ans.real=real + obj.real;
         return ans;
    }
    Complex operator - (Complex const &obj){
        Complex ans2;
        ans2.real=real-obj.real;
        ans2.imag=imag-obj.imag;
        return ans2;
    }
    Complex operator * (Complex const &obj){
        Complex ans3;
        ans3.real=(real*obj.real) - (imag*obj.imag);
        ans3.imag=(imag*obj.real) +(real*obj.imag);
        return ans3;
        
    }
    void addcomplex(Complex x, Complex y){     //FUNCTION TO ADD COMPLEX NUMBERS
        real=x.real+y.real;
        imag=x.imag+y.imag;
        
    }
    void display(){
        cout<<real<<" + i"<<imag<<endl;
    }
    
};




