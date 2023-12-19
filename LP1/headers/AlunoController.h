#ifndef ALUNO_C
#define ALUNO_C

#include <iostream>
#include <string>

#include "../Aluno.h"

using namespace std;

class AlunoController {

public:
  AlunoController();
  Aluno criar_aluno();
  void listar_alunos();
};

#endif