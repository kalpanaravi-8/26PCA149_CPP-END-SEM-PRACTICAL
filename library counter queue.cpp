#include <iostream>
using namespace std;
class Animal
{
public:
virtual void makeSound()
{
cout << "Animal sound" << endl;
}
};
class Cat : public Animal
{
public:
void makeSound()
{
cout << "Meow Meow" << endl;
}
};
class Dog : public Animal
{
public:
void makeSound()
{
cout << "Woof Woof" << endl;
}
};
class Cow : public Animal
{
public:
void makeSound()
{
cout << "Ma Ma" << endl;
}
};
int main()
{
Animal animal;
Dog dog;
Cat cat;
Cow cow;
animal.makeSound();
dog.makeSound();
cat.makeSound();
cow.makeSound();
return 0;
}
