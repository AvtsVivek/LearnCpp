#ifndef NURSE_H
#define NURSE_H
#include <iostream>
#include "person.h"

// Nurse will do protected inheritance
class Nurse : protected Person
{
    friend std::ostream &operator<<(std::ostream &, const Nurse &operand);

public:
    Nurse();
    ~Nurse();

    void treat_unwell_person()
    {
        m_full_name = "John Snow"; // OK
        m_age = 23;                // OK
        // m_address = "897-78-723"; Compiler error

        std::cout << "Treating " << m_full_name <<  " of age " << m_age  << std::endl;
    }

private:
    int practice_certificate_id{0};
};

#endif // NURSE_H
