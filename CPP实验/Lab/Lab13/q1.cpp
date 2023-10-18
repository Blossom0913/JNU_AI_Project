/*
question1；

Write a class template that imitates the functionality of a dynamic array “vector”, which requires：

 

1.       The name of the class is my_vct.

2.       my_array contains at least one property “arr” of type “T*”, which stores the elements of the array.

3.       You are free to add more properties.

4.       Design your constructor and destructor.

5.       Implement a method that imitates the function “push_back()” to insert elements at the end of the array, 

         requiring the size of the array to be automatically enlarged when the size is not enough.

6.       Implement a method that imitates the function “capacity()”. 
         
         It returns the total number of elements that can be stored in the array.

7.       Implement a method that imitates the function “size()”. 

         It returns the number of elements currently stored in the array.

8.       Overload the [] operator so that the object of Person can return the elements at a specified position in “arr”. 

         In addition, check if the position is out of range.

9.       Implement a method that simultaneously deletes all elements and clears the memory occupied by all the elements.
*/


#include<iostream>


using namespace std;

#define Max 20


template<class T>

class my_vct{

    T* arr;

    int len;

    public:

    my_vct();

    ~my_vct();

    bool push_back(const T& e);

    int capacity();

    int size();

    T operator [](int i);

};


template<class T>

my_vct<T>::my_vct(){

    len = 0;

    arr = (T*)malloc(sizeof(T)*len);

}


template<class T>

my_vct<T>::~my_vct(){

    free(arr);

}


template<class T>

bool my_vct<T>::push_back(const T& e){

    if(len<Max){

    len++;

    arr = (T*)realloc(arr,len);

    arr[len-1] = e;

    return true;

    }

    else{

        return false;

    }

}


template<class T>

int my_vct<T>::capacity(){

    return Max-this->len;

}


template<class T>

int my_vct<T>::size(){

    return this->len;

}


template<class T>

T my_vct<T>::operator [](int i){

    if(i>=len){

        cout << "out of bounds!" <<endl;

    }

    else{

        return arr[i];

    }

    return arr[0];

}


int main(){

    my_vct<int> test = my_vct<int>();

    cout << test.size() << endl;

    test.push_back(8);

    test.push_back(6);

    cout << test.size() << endl;

    cout << test.capacity() <<endl;

    cout << test.size() << endl;

    cout << test[1] << endl;

    return 0;

}


