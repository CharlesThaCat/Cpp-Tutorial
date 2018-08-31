#include <iostream>

using namespace std;

class Animal(){
    public:
        Animal();
        ~Animal();
        void eat();
        void drink();
        void sleep();
    private:
        int legs;
        int arms;
        int age;
};

class Cat : public Animal{
    public:
        int fur_color;
        void purr();
        void fish();
        void markTerriroty();
};