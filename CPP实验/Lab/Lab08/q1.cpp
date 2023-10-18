/*
question1:

Suppose you are developing management software for KFC selling fried chicken, 

which has three classes, namely FC (Fried Chicken), Consumer, and Producer. 

Producer is the person in charge of making fried chicken while Consumer is in charge of eating. They have the following requirements:


FC

· It has a property called flavor, representing that different pieces of fried chicken can have different flavors, e.g. sweet, salty, sour, spicy, etc.

· It has a static property N indicating the total number of fried chicken.


Producer

·         It has a method named produce(FC** space) to make fried chicken.

·         Using new to make an object of FC and put it into the space.

·         Because of the limitation of the space on the counter, 
          
          the total number of fried chicken N cannot be greater than 5.


Consumer

·         It has a method named consume(FC** space) to eat fried chicken.

·         Using delete to eat the object of FC

·         As common sense, the total number of fried chicken N cannot be smaller than 0.


Try to correctly run the following main() function:

void main() {

   FC* space[5] = { 0 };

 

   Producer p;

   Consumer c;

 

   c.consume(space);

   cout << FC::N << " ";

   p.produce(space);

   cout << FC::N << " ";

   p.produce(space);

   cout << FC::N << " ";

   p.produce(space);

   cout << FC::N << " ";

   p.produce(space);

   cout << FC::N << " ";

   p.produce(space);

   cout << FC::N << " ";

   p.produce(space);

   cout << FC::N << " ";

   c.consume(space);

   cout << FC::N << " ";

   c.consume(space);

   cout << FC::N << " ";

   c.consume(space);

   cout << FC::N << " ";

   c.consume(space);

   cout << FC::N << " ";

   c.consume(space);

   cout << FC::N << " ";

   c.consume(space);

   cout << FC::N << " ";

}

Output:

0 1 2 3 4 5 5 4 3 2 1 0 0




*/


#include<iostream>

#include<string>

#include<random>

using namespace std;


    class FC{

        public:

        int wei;

        static inline int N = 0;

        FC(){

            default_random_engine e;

            uniform_int_distribution<unsigned>u(0,3);

            wei = u(e);

            N++;

        }

    };

    class Producer{

        public:

        void produce(FC **space){

           

            if(FC::N<5){

                FC * chicken = new FC();

                space[(FC::N)-1] = chicken;}

           

        }

    };

    class Consumer{

        public:

        void consume(FC **space){

           

            if(FC::N > 0){

                delete space[FC::N-1];

                FC::N--;

            }

        }

    };



   


int main() {


    string flavor[4]{"sweet", "salty", "sour", "spicy"};



   

   


   FC* space[5] = { 0 };


 


   Producer p;


   Consumer c;


 


   c.consume(space);


   cout << FC::N << " ";


   p.produce(space);


   cout << FC::N << " ";


   p.produce(space);


   cout << FC::N << " ";


   p.produce(space);


   cout << FC::N << " ";


   p.produce(space);


   cout << FC::N << " ";


   p.produce(space);


   cout << FC::N << " ";


   p.produce(space);


   cout << FC::N << " ";


   c.consume(space);


   cout << FC::N << " ";


   c.consume(space);


   cout << FC::N << " ";


   c.consume(space);


   cout << FC::N << " ";


   c.consume(space);


   cout << FC::N << " ";


   c.consume(space);


   cout << FC::N << " ";


   c.consume(space);


   cout << FC::N << " ";

    return 0;

}


