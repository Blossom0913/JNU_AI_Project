/*
question1:
Write a system for creating geometric shapes using Inheritance we just learned.


1.         The system needs to support the 2-dimensional circle, rectangle, square, and regular triangle.

2.         The system needs to support the 3-dimensional sphere, cylinder, cuboid, cube, and regular triangular prism.

3.         Each shape needs to include two methods, perimeter (surface area) and area (volume).


Note: Design your own inheritance relationship and properties between each class. 

You may search the formula to calculate the perimeter (surface area) and area (volume) of each geometric shape.
*/


#include<iostream>

#include<math.h>

using namespace std;


#define Pai (3.14)


class dimension2{

    public:

    double perimeter();

    double surfaceArea();

};

class dimension3{

    public:

    double area();

    double volume();

};



class Circle : public dimension2{

    public:

    double r;

    Circle(double r){

        this->r = r;

    }

    double perimeter(){

        return Pai*r*2;

    }

    double area(){

        return Pai*r*r;

    }

};


class Rectangle: public dimension2{

    public:

    double chang;

    double kuan;

    Rectangle(double chang,double kuan){

        this->chang = chang;

        this->kuan = kuan;

    }

    double perimeter(){

        return 2*(chang+kuan);

    }

    double area(){

        return chang*kuan;

    }

};


class Triangle:public dimension2{

    public:

    double a;

    double b;

    double c;

    Triangle(double a,double b,double c){

        this->a = a;

        this->b = b;

        this->c = c;

    }

    double perimeter(){

        return a+b+c;

    }

    double area(){

        double p = (a+b+c)/2;

        double s = p*(p-a)*(p-b)*(p-c);

        return sqrt(s);

    }

};


class Sphere:public dimension3{

    public:

    double r;

    Sphere(double r){

        this->r = r;

    }

    double surfaceArea(){

        return Pai*r*r*4;

    }

    double volume(){

        return Pai*r*r*4*r/3;

    }

};


class Cylinder : public dimension3{

    public:

    Circle* bottom;

    double h;

    Cylinder(double r,double h){

        this->h = h;

        this->bottom = new Circle(r);

    }

    double surfaceArea(){

        return bottom->area()*(h+2);

    }

    double volume(){

        return bottom->area()*h;

    }

};


class Cube:public dimension3{

    public:

    Rectangle* bottom;

    double h;

    Cube(double a,double b,double c){

        this->bottom = new Rectangle(a,c);

        h = b;

    }

    double surfaceArea(){

        return bottom->perimeter()*h + bottom->area()*2;

    }

    double volume(){

        return bottom->area()*h;

    }

};



class Prism:public dimension3{

    public:

    double a;

    double b;

    double c;

    double di1;

    double di2;

    double di3;

    Prism(double a,double b,double c,double d,double e,double f){

        this->a = a;

        this->b = b;

        this->c = c;

        this->di1 = d;

        this->di2 = e;

        this->di3 = f;

    }

    double surfaceArea(){

        Triangle* A = new Triangle(a,b,di1);     // make use of Triangle to make code more 可读

        Triangle* B = new Triangle(a,c,di2);

        Triangle* C = new Triangle(b,c,di3);

        Triangle* D = new Triangle(di1,di2,di3);

        return A->area()+B->area()+C->area()+D->area();

    }

    double volume(){

        double a2 = a*a;

        double b2 = b*b;

        double c2 = c*c;

        double diI2 = di1*di1;

        double diII2 = di2*di2;

        double diIII2 = di3*di3;

        double Da = (b2 + c2 - a2+diII2+diIII2-diI2)*a2*diI2;

        double Db = (c2 - b2 + a2-diII2+diIII2+diI2)*b2*diII2;

        double Dc = (b2 - c2 + a2+diII2-diIII2+diI2)*c2*diIII2;

        double DD = a2*b2*c2 + a2*diII2*diIII2 + diI2*b2*diIII2 + diI2*diII2*c2;

       

        return sqrt(Da + Db + Dc - DD)/12;

    }


};


int main(){

    Circle* yuan = new Circle(2.0);

    cout <<  yuan->perimeter() << endl;     // 4*pai.

    Sphere* qiu = new Sphere(2.0);

    Cylinder* zhu = new Cylinder(2.0,4.0);

    cout << qiu->volume() << endl;          // 32*pai / 3

    cout << zhu->volume() << endl;          // 16 pai

    Prism* zhui = new Prism(2,2,2,2,2,2);   // for a size of 2 正四面体 ,surfaceArea is 4*sqrt(3),volume is sqrt(8)/3.

    cout << zhui->surfaceArea() << endl;

    cout << zhui->volume() << endl;

    return 0;

}


