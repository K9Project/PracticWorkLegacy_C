#include <iostream>
class Animal
{
public:
    virtual void Voice() const = 0;
};

class Cat : public Animal
{
public:
    void Voice() const override
    {
        std::cout << "Meow\n";
    }
};

class Dog : public Animal
{
public:
    void Voice() const override
    {
        std::cout << "Gaf!\n";
    }
};

class Cow : public Animal
{
public:
    void Voice() const override
    {
        std::cout << "Mooo\n";
    }
};


int main()
{
    Animal* animals[3];
    animals[0] = new Cat();
    animals[1] = new Dog();
    animals[2] = new Cow();

    for (Animal* a : animals)
        a->Voice();
}