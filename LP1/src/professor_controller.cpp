#include "../Professor.h"
#include "../headers/ProfessorController.h"
#include <iostream>
#include <string>

using namespace std;

ProfessorController::ProfessorController() {}

Professor ProfessorController::criar_professor() {
    int id;
    string nome, area_atuacao;

    cout << "Digite o id do professor: " << endl;
    cin >> id;

    cout << "Digite o nome do professor: " << endl;
    cin >> nome;

    cout << "Digite a area de atuacao do professor: " << endl;
    cin >> area_atuacao;

    Professor professor(id, nome, area_atuacao);

    return professor;
}

void ProfessorController::listar_professores() {
  
}