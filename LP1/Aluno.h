#ifndef ALUNO
#define ALUNO

#include <iostream>
#include <string>

// #include "Disciplina.h"
#include "Pessoa.h"

using namespace std;

// class Disciplina;
// class Turma;

class Aluno : public Pessoa {
public:
  // Disciplina *disciplinas;
  int matricula;
  string curso;
  Aluno *alunos;
  

  // public:
  //   void matricular_disciplina(Disciplina disciplina) {}

public:
  Aluno(int id, string nome, int matricula, string curso) : Pessoa(id, nome) {
    this->curso = curso;
    this->matricula = matricula;
  }
};

#endif