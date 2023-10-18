/*
question1:

Write a system for student course selection based on object-oriented programming.

·         At least write two classes, which are Student and Course respectively.

·         Every student can select or quit a course.

·         The user can check the list of courses selected by a student.

·         The user can check the list of students in a course.

*/

#include<iostream>

#include<string>

#include<vector>


using namespace std;



        class course{

            public: string name;

            public: vector<long> enroll;

            course(string xi){

                name = xi;

            }

            void stuAdd(long id){

                enroll.push_back(id);

            }

            void stuDisp(){

                cout << name << "lists:" << endl;

                for(long a:enroll){

                    cout << a << endl;

                }

            }

           

        };


        class student{

            long id;

            public: vector<string> selected;

            student(long xue){

                id = xue;

            }

            void courseSelect(course* a){

                selected.push_back(a->name);

                a->stuAdd(id);               //we need pointer to solve this!avoid value-copy

                                            // and data loss.

        }

            void courseQuit(course a){

                selected.pop_back();

                a.enroll.pop_back();

            }

             void courseDisp(){

            cout << id << "select:" << endl;

            for(string a:selected){

                    cout << a << endl;

                }

            }

        };

        int main(){

        student a = student(2021100733);

        student b = student(2021100734);

        student c = student(2021100735);

        course* math = new course("Math");

        course* Eng = new course("English");

        course* CPP = new course("C++");

        a.courseSelect(math);

        a.courseSelect(Eng);

        a.courseSelect(CPP);

        b.courseSelect(Eng);

        b.courseSelect(math);

        c.courseSelect(CPP);

        a.courseDisp();

        b.courseDisp();

        c.courseDisp();

        a.courseQuit(*CPP);

        a.courseDisp();

        math->stuDisp();

        return 0;

   

}