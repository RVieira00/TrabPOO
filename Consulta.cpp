#include "Consulta.h"
#include <iostream>

using namespace std;

Consulta::Consulta(int id, float custo, const string &data, const string &diagnostico) : Servico(id, custo, data), diagnostico(diagnostico) {}

bool Consulta::operator<(const Consulta &c) const {
    return id < c.id;
}

float Consulta::getCustoTotal() {

    float custoTotal = custo;

    for (Exame e : exames) {
        custoTotal += e.custo;
    }

    return custoTotal;
}

bool Consulta::addExame(float custo, string data, Exame::Tipologia tipologia) {

    Exame exame(exames.size(), custo, data, tipologia);
    return exames.insert(exame);
}

void Consulta::printConsulta() {

    cout << "Consulta ID : " << id << " || Custo: " << custo << " || Data: " << data << "\n"
         << "diagnostico: " << diagnostico << endl;

    for (Exame e : exames) {
        e.printExame();
    }
}
