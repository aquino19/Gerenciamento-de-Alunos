#include "../Turma.h"
#include "../headers/TurmaController.h"

#include <iostream>
#include <string>

using namespace std;

TurmaController::TurmaController(){};

Turma TurmaController::criar_turma() {
  int id_turma;
  string nome_turma, disciplina_relacionada, professor_responsavel;

  cout << "Digite o id da turma: " << endl;
  cin >> id_turma;

  cout << "Digite o nome da turma: " << endl;
  cin >> nome_turma;

  cout << "Digite a disciplina relacionada: " << endl;
  cin >> disciplina_relacionada;

  cout << "Digite o professor_responsavel: " << endl;
  cin >> professor_responsavel;

  Turma turma(id_turma, disciplina_relacionada, professor_responsavel, nome_turma);

  return turma;
};

