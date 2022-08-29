#include<iostream>
using namespace std;
class rectangle{
    private:
    int height,width;
    public:
    rectangle(int,int);
    int get_height();
    int get_width();
    int area();
    int perimeter();
};
rectangle::rectangle(int _height, int _width){
    height = _height;
    width = _width;
}
int rectangle::get_height(){
    return height;
}
int rectangle::get_width(){
    return width;
}
int rectangle::area(){
    return width*height;
}
int rectangle::perimeter(){
    return width*2 + height*2;
}
int main(){
    rectangle r1(100,5);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    cout << r1.get_width() << endl;
    cout << r1.get_height() << endl;
}
    