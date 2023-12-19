#ifndef PESSOA
#define PESSOA

#include <iostream>
#include <string>
using namespace std;

class Pessoa {
public:
  int id;
  string nome;

public:
  Pessoa(int id, string nome) {
    this->id = id;
    this->nome = nome;
  };
};

#endif