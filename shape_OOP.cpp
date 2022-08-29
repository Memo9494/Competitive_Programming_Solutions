#include<iostream>
#include<cmath>
using namespace std;
class shape{
    private:
    int height;
    int width;
    public:
    shape(int,int);
    int get_height();
    int get_width();
};
class rectangle : public shape{
    public:
    rectangle(int,int);
    int area();
    int perimeter();

};
class triangle : public shape{
    public:
    triangle(int,int);
    int area();
    int perimeter();
};

shape::shape(int _height, int _width){
    height = _height;
    width = _width;
}
int shape::get_height(){
    return height;
}
int shape::get_width(){
    return width;
}
rectangle::rectangle(int _height, int _width) : shape(_height,_width){
}
int rectangle::area(){
    return get_height() * get_width();
}
int rectangle::perimeter(){
    return get_height()*2 + get_height()*2;
}
triangle::triangle(int _height, int _width) : shape(_height,_width){
}
int triangle::area(){
    return get_height()*get_width()/2;
}
int triangle::perimeter(){
    //find mising side with pytthagoran theorem
    int c = sqrt(pow(get_height(),2) + pow(get_width()/2,2));
    return 2*c + get_width();
}

int main(){
    rectangle r1(4,5);
    triangle t1(6,12);
    cout << r1.area() << endl;
    cout << t1.perimeter() << endl;
}