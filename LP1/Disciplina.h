#ifndef DISCIPLINA
#define DISCIPLINA

#include <iostream>
#include <string>

#include "Aluno.h"
#include "Professor.h"

using namespace std;

class Professor;

class Disciplina {
public:
  string id_disciplina;
  string nome_disciplina;
  string professor_responsavel;
  int carga_horaria;

public:
  void adicionar_aluno(Aluno aluno);
  void listar_alunos();
  void adicionar_professor(Professor professor);
  void listar_professores();

public:
  Disciplina(string id_disciplina, string nome_disciplina,
             string professor_responsavel, int carga_horaria) {
    this->id_disciplina = id_disciplina;
    this->nome_disciplina = nome_disciplina;
    this->professor_responsavel = professor_responsavel;
    this->carga_horaria = carga_horaria;
  }
};

#endif