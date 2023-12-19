#ifndef TURMA
#define TURMA

#include "Aluno.h"
#include "Professor.h"

class Professor;
class Disciplina;
class Aluno;

class Turma {
public:
  int id_turma;
  string nome_turma;
  string disciplina_relacionada;
  string professor_responsavel;

public:
  Turma(int id_turma, string disciplina_relacionada,
        string professor_responsavel, string nome_turma) {
    this->id_turma = id_turma;
    this->disciplina_relacionada = disciplina_relacionada;
    this->professor_responsavel = professor_responsavel;
    this->nome_turma = nome_turma;
  }
};

#endif