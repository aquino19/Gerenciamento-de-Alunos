#include "../Aluno.h"
#include "../headers/AlunoController.h"

#include <iostream>
#include <string>

using namespace std;

AlunoController::AlunoController(){};

Aluno AlunoController::criar_aluno() {
  int id, matricula;
  string nome, curso;

  cout << "Digite o id do aluno: " << endl;
  cin >> id;

  cout << "Digite o nome do aluno: " << endl;
  cin >> nome;

  cout << "Digite a matricula do aluno: " << endl;
  cin >> matricula;

  cout << "Digite o curso do aluno: " << endl;
  cin >> curso;

  Aluno aluno(id, nome, matricula, curso);

  return aluno;
};

void AlunoController::listar_alunos() {
  
}
