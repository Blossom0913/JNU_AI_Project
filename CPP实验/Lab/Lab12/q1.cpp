/*
question1:

Write a geometry software using the idea of “polymorphism” so that the following code can run successfully.

 

1.       Implement the 2-dimensional circle, rectangle, square, and regular triangle.

2.       Implement the 3-dimensional sphere, cylinder, cuboid, cube, regular triangular prism, and tetrahedron.

3.       Implement the method to calculate their areas (volumes).

Note: Design your own inheritance relationship and properties between each class. 

Search the formula for the area (volume) of each geometric shape with PI equal to 3.14159.

void main() {

       Circle c = Circle(2);      //Circle with radius 2

       Rectangle r = Rectangle(2, 3);    //Rectangle with length 2 and width 3

       Square s = Square(2);      //Square with length 2

       Triangle t = Triangle(2);  //Regular triangle with length 2

 

       Sphere sp = Sphere(2);     //Sphere with radius 2

       Cylinder cy = Cylinder(2, 4);     //Cylinder with radius 2 and height 4

       Cuboid cd = Cuboid(2, 3, 4);      //Cuboid with length2, width 3, and height 4

       Cube cb = Cube(2);   //Cube with length 2

       Prism ps = Prism(2, 5);    //Regular triangular prism with length 2 and height 5

       Tetrahedron tt = Tetrahedron(2);  //Tetrahedron with length 2

 

       const int n = 10;

       Shape* ss[n] = {&c, &r, &s, &t, &sp, &cy, &cd, &cb, &ps, &tt};

       for (int i = 0; i < n; ++i) {

              cout << ss[i]->area() << endl;

       }

}

 

Result:

12.5664

6

4

1.73205

25.1327

50.2654

24

8

8.66025

0.942809
*/

#include<iostream>

#include<cmath>


#define PI (3.1415)


class Shape{

    public:

    virtual float area(){

        return 0.0;

    }

};


class Circle : public Shape{

    protected:

    float r;

    public:

    Circle(float r){

        this->r = r;

    }

    virtual float area(){

        return PI*r*r;

    }

};


class Rectangle: public Shape{

    protected:

    float len;

    float wid;

    public:

    Rectangle(float a,float b){

        len = a;

        wid = b;

    }

    virtual float area(){

        return len*wid;

    }

};


class Square : public Shape{

    protected:

    float a;

    public:

    Square(float a){

        this->a = a;

    }

    virtual float area(){

        return a*a;

    }

};


class Triangle:public Shape{

    protected:

    float a;

    public:

    Triangle(float a){

        this->a = a;

    }

    virtual float area(){

        return (sqrt(3)*a*a)/4;

    }

};


class Sphere:public Shape{

    protected:

    float r;

    public:

    Sphere(float r){

        this->r = r;

    }

    virtual float area(){

        return (4*PI*r*r*r)/3;

    }

};


class Cylinder:public Shape{

    protected:

    float r;

    float h;

    public:

    Cylinder(float r,float h){

        this->r = r;

        this->h = h;

    }

    virtual float area(){

        return PI*r*r*h;

    }

};


class Cuboid:public Shape{

    protected:

    float len;

    float wid;

    float height;

    public:

    Cuboid(float len,float wid,float height){

        this->len = len;

        this->wid = wid;

        this->height = height;

    }

    virtual float area(){

        return len*wid*height;

    }

};


class Cube:public Shape{

    protected:

    float a;

    public:

    Cube(float a){

        this->a = a;

    }

    virtual float area(){

        return a*a*a;

    }

};


class Prism:public Shape{

    protected:

    float len;

    float h;

    public:

    Prism(float len,float h){

        this->len = len;

        this->h = h;

    }

    virtual float area(){

        return (sqrt(3)*len*len*h)/4;

    }

};


class Tetrahedron:public Shape{

    protected:

    float len;

    public:

    Tetrahedron(float len){

        this->len = len;

    }

    virtual float area(){

        return (sqrt(2)*len*len*len)/12;

    }

   

};








int main() {


        using namespace std;


       Circle c = Circle(2);      //Circle with radius 2


       Rectangle r = Rectangle(2, 3);    //Rectangle with length 2 and width 3


       Square s = Square(2);      //Square with length 2


       Triangle t = Triangle(2);  //Regular triangle with length 2


 


       Sphere sp = Sphere(2);     //Sphere with radius 2


       Cylinder cy = Cylinder(2, 4);     //Cylinder with radius 2 and height 4


       Cuboid cd = Cuboid(2, 3, 4);      //Cuboid with length2, width 3, and height 4


       Cube cb = Cube(2);   //Cube with length 2


       Prism ps = Prism(2, 5);    //Regular triangular prism with length 2 and height 5


       Tetrahedron tt = Tetrahedron(2);  //Tetrahedron with length 2


 


       const int n = 10;


       Shape* ss[n] = {&c, &r, &s, &t, &sp, &cy, &cd, &cb, &ps, &tt};


       for (int i = 0; i < n; ++i) {


              cout << ss[i]->area() << endl;


       }

    return 0;

}