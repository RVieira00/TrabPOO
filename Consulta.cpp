#include "Consulta.h"
#include <iostream>

using namespace std;

Consulta::Consulta(int id, float custo, const string& data, const string& diagnostico) : Servico(id, custo, data), diagnostico(diagnostico) {}

float Consulta::getCustoTotal() {

    float custoTotal = custo;

    for (const Exame& e : exames) {
        custoTotal += e.getCusto();
    }

    return custoTotal;
}

const string& Consulta::getDiagnostico() const {
    return diagnostico;
}

bool Consulta::operator<(const Consulta& c) const {
    return id < c.id;
}

bool Consulta::addExame(float custo, const string& data, Exame::Tipologia tipologia) {

    Exame exame(exames.size(), custo, data, tipologia);
    return exames.insert(exame);
}

void Consulta::printConsulta() {

    cout << "Consulta ID : " << getId() << " || Custo: " << getCusto() << " || Data: " << getData() << "\n"
        << "Diagnostico: " << getDiagnostico() << endl;

    cout << "Numero de Exames associados: " << exames.size() << endl;
    for (Exame e : exames) {
        cout << "\t";
        e.printExame();
    }
}
