#ifndef PROFESSOR_C
#define PROFESSOR_C

#include <iostream>
#include <string>
#include "../Professor.h"

using namespace std;

class ProfessorController {
public:
    ProfessorController();
    Professor criar_professor();
    void listar_professores();
};

#endif
