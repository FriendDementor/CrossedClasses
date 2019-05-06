#include "TA.h"

TA::TA()
{
    std::cout << "TA creado" << std::endl;
}

void TA::Otro()
{
    std::cout << "Otro de TA" << std::endl;
    TB tbsolamente;
    std::cout << "fin de otro de TA" << std::endl;
}