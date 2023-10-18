/*
Write a student management system using “struct”. 

The following functions are required:

·Add a student

Students should have basic information such as student ID, name, gender, etc. 

Make sure that every student ID is unique.

·Find a student

Find a student’s information by the student ID.

·Modify a student

Find the student first and modify their information next. 

Note the student ID cannot be modified.

·Delete a student

Find the student first and delete their information next.

·Show all students

Display the information of all students at once.
*/

#include<iostream>

#include<string>


using namespace std;


long xuehao = 2021100733;


typedef struct Stu{

    long id;

    string name;

    bool gender;

    struct Stu* next;

}student;


void StuInit(student *&p){

    p = (student*)malloc(sizeof(student));

    p->next = nullptr;

}


student* StuFind(student *&p,const long id){

    int idx = 1;

    student* l = p->next;

    while(l!=nullptr && l->id!=id){

        l = l->next;

        idx++;

    }

    if(l==nullptr)return nullptr;

    else return l;

}


void StuMod(student *&p,const long id,string bie){

    student* l = nullptr;

    l = StuFind(p,id);

    l->gender = !l->gender;

    l->name = bie;

}


void StuAdd(student *&p,int gen,string name){

    student* t = (student*)malloc(sizeof(student));

    if(gen==1){

        t->gender = true;

    }

    else {

        t->gender = false;

    }

    t->name = name;

    t->id = xuehao++;

    t->next = p->next;

    p->next = t;

}


void StuDel(student *&p,const long id){

    student* l = nullptr;

    l = StuFind(p,id);

    student * pre = p;

    while(pre!=nullptr && pre->next!=l){

        pre = pre->next;

    }

    pre->next = l->next;

    free(l);

}


void StuDisp(student *&p){

    student* tmp = p->next;

    while(tmp!=nullptr){

        cout << tmp->id << tmp->name << endl;


        if(tmp->gender){

            cout << "boy" << endl;

        }

        else{

            cout << "girl" << endl;

        }

        tmp = tmp->next;

    }

}


int main(void){

    student* jinan;

    StuInit(jinan);

    StuAdd(jinan,1,"cxt");

    StuAdd(jinan,1,"zhx");

    StuAdd(jinan,1,"pcx");

    StuMod(jinan,2021100735,"pcy");

    StuDel(jinan,2021100734);

    StuDisp(jinan);

    

    return 0;

}