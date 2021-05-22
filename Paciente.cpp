#include "Paciente.h"
#include <iostream>

using namespace std;

Paciente::Paciente(int id, const string &nome) : id(id), nome(nome) {}


int Paciente::getId() const {
    return id;
}

const string &Paciente::getNome() const {
    return nome;
}

float Paciente::getTotalFaturado() {

    float totalFaturado = 0.0f;

    for (Consulta c : consultas) {
        totalFaturado += c.getCustoTotal();
    }

    return totalFaturado;
}

bool Paciente::addConsulta(float custo, const string &data, const string &diagnostico) {

    Consulta consulta(consultas.size(), custo, data, diagnostico);
    return consultas.insert(consulta);
}

bool Paciente::addExameToConsulta(int consultaId, float custo, const string &data, Exame::Tipologia tipologia) {

    Consulta *fC = findConsulta(consultaId);

    if (fC != nullptr)
        return fC->addExame(custo, data, tipologia);
    else {
        cout << "Consulta ID: " << consultaId << "nao existe" << endl;
    }

    return false;
}

bool Paciente::operator<(const Paciente &p) const {
    return id < p.id;
}

Consulta *Paciente::findConsulta(int consultaId) {
    Consulta consulta(consultaId, 0, "", "");
    return consultas.find(consulta);
}

void Paciente::printConsultas() {

    auto it = consultas.begin();

    while (it != consultas.end()) {
        findConsulta(it->getId())->printConsulta();
        it++;
    }
}
