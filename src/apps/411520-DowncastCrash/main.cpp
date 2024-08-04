#include <iostream>

class Animal
{
public:
    Animal() = default;
    virtual void breathe() const {};

private:
    std::string m_description;
};

class Dog : public Animal
{
public:
    Dog() = default;
    virtual void breathe() const override {};
    void run()
    {
        std::cout << "Dog running..." << std::endl;
    }

private:
    std::string m_fur_color;
};

int main()
{

    // Downcast using dynamic_cast with references
    // The hierarchy of Animal->Dog has to be polymorphic to be able to do
    // this. This throws an exception because animal has no dog part so the
    // cast won't really work.

    Animal a;

    std::cout << "About to down cast ... " << std::endl;

    Dog &d{dynamic_cast<Dog &>(a)};

    std::cout << "Done!" << std::endl;

    return 0;
}