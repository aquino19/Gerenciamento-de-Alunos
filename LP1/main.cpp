#include "./headers/AlunoController.h"
#include "./headers/ProfessorController.h"
#include "./headers/TurmaController.h"
#include "Aluno.h"
#include "Professor.h"
#include "Turma.h"

#include <fstream>
#include <iostream>

using namespace std;

int main() {
  AlunoController alunoController;
  ProfessorController professorController;
  TurmaController turmaController;

  int opcao, escolha;

  cout << "Bem vindo ao gerenciador de alunos e professor!" << endl;
  cout << "Escolha uma das opções abaixo:" << endl;

  cout << "1 - aluno" << endl;
  cout << "2 - professor" << endl;
  cout << "3 - turma" << endl;

  cin >> opcao;

  switch (opcao) {
  case 1:
    cout << "1 - aluno" << endl;
    cout << "Escolha o que quer fazer com o aluno" << endl;

    cout << "1 - para criar aluno" << endl;

    cin >> escolha;

    if (escolha == 1) {

      Aluno alunoNovo = alunoController.criar_aluno();

      ofstream file_saida("aluno_aluno.txt");
      file_saida << "id: " << alunoNovo.id << " "
                 << "nome: " << alunoNovo.nome << " "
                 << "matricula: " << alunoNovo.matricula << " "
                 << "curso: " << alunoNovo.curso << endl;
    } else {
      cout << "opção inválida" << endl;
    }

    break;

  case 2:
    cout << "2 - Professor" << endl;
    cout << "Escolha o que quer fazer com o professor" << endl;

    cout << "1 - para criar professor" << endl;
    cout << "2 - listar professores" << endl;

    cin >> escolha;

    if (escolha == 1) {
      Professor professorNovo = professorController.criar_professor();
      cout << professorNovo.nome << "nome do professor" << endl;

      ofstream file_saida("professor_professor.txt");
      file_saida << "id: " << professorNovo.id << " "
                 << "nome: " << professorNovo.nome << " "
                 << "area_atuacao: " << professorNovo.area_atuacao << " "
                 << endl;

    } else {
      cout << "Opção inválida!" << endl;
    }
    break;

  default:
    cout << "Opção inválida!" << endl;

    break;

  case 3:
    cout << "3 - turma" << endl;
    cout << "Escolha o que quer fazer com a turma" << endl;

    cout << "1 - para criar turma" << endl;
    cin >> escolha;

    if (escolha == 1) {
      Turma turmaNova = turmaController.criar_turma();

      ofstream file_saida("turma_nova.txt");
      file_saida << "id: " << turmaNova.id_turma << " "
                 << "nome: " << turmaNova.nome_turma << " "
                 << "disciplina relacionada: "
                 << turmaNova.disciplina_relacionada << " "
                 << "professor_responsavel: " << turmaNova.professor_responsavel
                 << endl;
    }
    break;
  }
}