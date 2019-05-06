#include "TA.h"

#include "TB.h"

TA::TA()
{
    std::cout << "TA creado" << std::endl;
}

TB TA::Otro()
{
    std::cout << "Otro de TA" << std::endl;
    TB tbsolamente;
    std::cout << "fin de otro de TA" << std::endl;
    return tbsolamente;
}