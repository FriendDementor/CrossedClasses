#include "TB.h"

#include "TA.h"

TB::TB()
{
    std::cout << "TB creado" << std::endl;
}

TA TB::Otro()
{
    std::cout << "TB tiene otro texto" << std::endl;
    TA tatemporal;
    std::cout << "TB se fue a la puta" << std::endl;
    return tatemporal;
}