#include "Servico.h"

using namespace std;

Servico::Servico(int id, float custo, const string &data) : id(id), custo(custo), data(data) {}

int Servico::getId() const {
    return id;
}
float Servico::getCusto() const {
    return custo;
}
const string &Servico::getData() const {
    return data;
}
