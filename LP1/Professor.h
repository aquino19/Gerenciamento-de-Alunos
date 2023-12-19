#ifndef PROFESSOR
#define PROFESSOR

#include "Disciplina.h"
#include "Pessoa.h"

class Disciplina;

class Professor : public Pessoa {
public:
  string area_atuacao;

public:
  void aplicar_avaliacao();
  void dar_aula();
  void cadastrar_nota(Disciplina disciplina);
  void calcular_nota(Disciplina disciplina);

public:
  Professor(int id, string nome, string area_atuacao) : Pessoa(id, nome) {
    this->area_atuacao = area_atuacao;
  }
};

#endif