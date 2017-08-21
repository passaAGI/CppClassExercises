#include <iostream>

using namespace std;

class Rectangle{
    protected:
        int height;
        int length;
    public:
        Rectangle(int height, int length);
        int perimeter(){
            return(height+length)*2;
        };
        int area(){
            return(height*lenght);
        };
};

class Square: public Rectangle{
    protected:
        int side;
    public:
    Square(int the_side): Rectangle(the_side, the_side){};
};
