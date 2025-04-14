#include <iostream>
#include <vector>
#include <stdlib.h>

class Animals
{
    // private:
    //     int age;

public:
    void eat()
    {
        std::cout << "eating\n";
    }

    virtual void mood()
    {
        std::cout << "moooody animals\n";
    }
};

class Dog : public Animals
{
public:
    void bark()
    {
        std::cout << "bhaow\n";
    }
    void mood() override
    {
        std::cout << "happy dog\n";
    }
};

class Cat : public Animals
{
public:
    void meow()
    {
        std::cout << "meow\n";
    }
    void mood() override
    {
        std::cout << "bored\n";
    }
};

// class Complex
// {
// public:
//     int real, imag;

//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         imag = i;
//     }

//     Complex operator+(const Complex &obj)
//     {
//         return Complex(real + obj.real, imag + obj.imag);
//     }

//     // void display()
//     // {
//     //     // std::cout << m << "\n";
//     // }
// };

class A
{
public:
    virtual void show()
    {
        std::cout << "show A\n";
    }
};

class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
};

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    // Animals A;
    // A.eat();
    // A.mood();
    // Dog d;
    // d.eat();
    // d.bark();
    // d.mood();
    // Cat c;
    // c.eat();
    // c.meow();
    // c.mood();

    D d;

    d.show();

    // Complex c1(3, 2), c2(3, 4);
    // Complex c3 = c1 + c2;
    // Complex c4 = (c1 == c2);
    // c4.display();
    // std::cout << b << "\n";

    return 0;
}