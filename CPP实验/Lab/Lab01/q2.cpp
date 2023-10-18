/*
question2:

Encrypt the input letters. The rule of encryption is:

 A->Z, B->Y, C->X, …, a->z, b->y, c->x, …. 
 
 That means 26 letters are paired in reverse order.
*/


    #include<iostream>

    using namespace std;



    int main(){

        char a;

        while((a = getchar())!=EOF){

            getchar();

            if(a >= 'A'&& a<= 'Z'){

                a = 'Z' - a + 'A';

               

            }

            if(a>='a'&&a<='z'){

                a = 'z' - a + 'a';

            }

            putchar(a);

            printf("\n");

        }

        return 0;


    }


