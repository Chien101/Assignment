#include <iostream>
#include <cmath>
using namespace std;

const int _Pi=3;

class Circle{
public:
    virtual int fn_GetArea()=0;
    virtual int fn_SetRadious(int &_in)=0;
};

class CircleArea:public Circle{
private:
    int radious=0;
public:
    int fn_GetArea(){
        return pow(radious,2)*_Pi;
    }
    int fn_SetRadious(int &_in){
        radious=_in;
    }
};

/*class Rectangle{
public:
    int length=0,width=0;
};

class RectangleArea:public Rectangle{

};*/

int main(){
    int r=0;
    cin>>r;
    CircleArea my_Circle;
    my_Circle.fn_SetRadious(r);
    cout<<my_Circle.fn_GetArea()<<endl;
}
