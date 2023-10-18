/*
question1:
Write your own “string” class.

 

1.       The name of the class is “my_str”.

2.       “my_str” has two properties, a “char*” representing the string and an “int” representing the length of the string.

3.       Design your constructor and destructor.

4.       Overload the “=” operator to avoid memory leaking.

5.       Overload the “==” and “!=” operators so that we can know if two “my_str” objects are equal.

6.       Overload the “<” and “>” operators so that two “my_str” objects can be compared in dictionary order, e.g. (“abcd” > “abbe”) is true.

7.       Overload the “<<” operator so that “my_str” objects can be output directly instead of using the “object.property” form.

8.       Overload the “+” operator so that two “my_str” objects can be concatenated together, e.g. “ab” + “cd” equals “abcd”.

*/


#include<iostream>
#include<stdlib>
#include <cstring>

using namespace std;


class my_str

{


   

public:

    char* str;

    int length;

    my_str(const char* a);

    ~my_str();

    my_str& operator + (const my_str& s2);

    my_str& operator = (const my_str& b);

    bool operator ==(const my_str& b);

    bool operator !=(const my_str& b);

    ostream& operator << (ostream& out);

    bool operator <(const my_str& b);

    bool operator >(const my_str& b);

};


my_str::my_str(const char* a)

{  

    length = strlen(a);

    str = new char[length];

    for(int i = 0;i < length;++i){

        str[i] = a[i];

    }

   

}


my_str::~my_str()

{

    delete[] str;

}


my_str& my_str::operator + (const my_str& s2){

    this->str = strcat(this->str,s2.str);

    this->length = this->length + s2.length;

    return *this;

}


my_str& my_str::operator = (const my_str& b){

    if(this != &b){

        if(length < b.length){

            delete[] str;

            str = new char[b.length + 1];

        }

        length = b.length;

        strcpy(str,b.str);

    }

    return *this;

}


bool my_str::operator ==(const my_str& b){

    if(this->length!=b.length)return false;

    else{

        for(int i = 0;i < b.length;++i){

            if(this->str[i]!=b.str[i])return false;

        }

    }

    return true;

}


bool my_str::operator !=(const my_str& b){

    if(this->length!=b.length)return true;

    else {

        for(int i = 0;i < b.length;++i){

            if(this->str[i]!=b.str[i])return true;

        }

    }

    return false;

}


ostream& operator<< (ostream& out,const my_str &str)

    {

        if(str.str != NULL)

        {

            out << str.str;

        }

        return out;

    }


bool my_str::operator <(const my_str& b){

    int n = min(this->length,b.length);

    for(int i = 0;i < n;++i){

        if(this->str[i]<b.str[i])return true;

        else if(this->str[i]>b.str[i])return false;

    }

    return false;

}


bool my_str::operator >(const my_str& b){

    int n = min(this->length,b.length);

    for(int i = 0;i < n;++i){

        if(this->str[i]>b.str[i])return true;

        else if(this->str[i]<b.str[i])return false;

    }

    return false;

}



int main(){

    const char* a = "Jinan";

    const char* b = "University";

    my_str str1 = my_str(a);

    my_str str2 = my_str(b);

    cout << str1 << endl;   // << run successfully.

    my_str str3 = str1;

    cout << str3 << endl;   // = run successfully.

    if(str1 != str2){cout << "str1 isn't equal to str2." << endl;}  // !=  run successfully.

    if(str1 == str3){cout << "str1 is equal to str3." << endl;} // ==  run successfully.

    my_str str4 = str3 + str2;

    cout << str4 << endl;  // + run successfully.

    if(str1 > str2){cout << "str1 is bigger than str2." << endl;}  

    else if(str2 > str1){cout << "str2 is bigger than str1." << endl;}  // > & < run successfully.


}


