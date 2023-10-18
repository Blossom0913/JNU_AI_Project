/*
question1:

Write a class representing an array of “int”, which requires：

 

1.       The name of the class is my_array.

2.       my_array contains at least one property “arr” of type “int*”, which stores the elements of the array.

3.       You are free to add more properties.

4.       Design your constructor and destructor.

5.       Overload the [] operator so that the object of Person can return the elements at a specified position in “arr”. 

         In addition, check if the position is out of bounds.
*/

#include<iostream>

using namespace std;


class my_array{

    private:

    int* arr;

    int len;

    public:

   

    my_array(int* a);

    ~my_array();

    my_array& operator +(const my_array& b);

    my_array& operator -(const my_array& b);

    my_array& operator *(const int a);

    my_array& operator /(const int a);

    int operator *(const my_array& b);

    int operator [](int i);

    void arrDisp();

};


my_array::my_array(int* a){

    len = sizeof(a)/sizeof(a[0]) + 1;

    arr = new int[len];

    for(int i = 0;i < len;++i){

        arr[i] = a[i];

    }

   

}


my_array::~my_array(){

    delete[] arr;

}


my_array& my_array::operator+ (const my_array& b){

    for(int i = 0;i < this->len;++i){

        this->arr[i] += b.arr[i];

    }

    return *this;

}

my_array& my_array::operator -(const my_array& b){

    for(int i = 0;i < this->len;++i){

        this->arr[i] -= b.arr[i];

    }

    return *this;

}

my_array& my_array::operator *(const int a){

    for(int i = 0;i < this->len;++i){

        this->arr[i] *= a;

    }

    return *this;

}

my_array& my_array::operator /(const int a){

    for(int i = 0;i < this->len;++i){

        this->arr[i] /= a;

    }

    return *this;

}


int my_array::operator *(const my_array& b){

    int sum = 0;

    for(int i = 0;i < this->len;++i){

        sum += this->arr[i]*b.arr[i];

    }

    return sum;

}


int my_array::operator [](int i){

    if(i > len){

        cout<< "out of bounds!" << endl;

        return -1;

    }

    else{

        return this->arr[i];

    }

}


void my_array::arrDisp(){

    cout << "[";

    for(int i = 0; i < this->len;++i){

        cout << this->arr[i] << ",";

    }

    cout << "]" << endl;

}


int main(){

    //test arr +-*/ run successfully

    // basic operator need to complete closure.

    int a1[2] = {1,2};

    int b1[2] = {3,4};

    my_array a = my_array(a1);

    my_array b = my_array(b1);

    a.arrDisp();

    b.arrDisp();

    my_array c = a + b;

    c.arrDisp();

    int out = a * b;

    cout << "a * b is : " << out << endl;

    my_array d = b * 2;

    d.arrDisp();

    my_array e = d / 2;

    e.arrDisp();

    my_array f = d - e;

    f.arrDisp();

    cout << a[1] << endl;

}