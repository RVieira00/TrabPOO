#include "Paciente.h"
#include <iostream>

Paciente::Paciente(int id, const string &nome) : id(id), nome(nome) {}

bool Paciente::operator<(const Paciente &p) const {
    return id < p.id;
}

int Paciente::getId() const {
    return id;
}

const string &Paciente::getNome() const {
    return nome;
}

float Paciente::getTotalFaturado() {

    float totalFaturado = 0;

    for (Consulta c : consultas) {
        totalFaturado += c.getCustoTotal();
    }

    return totalFaturado;
}

bool Paciente::addConsulta(float custo, string data, string diagnostico) {

    Consulta consulta(consultas.size(), custo, data, diagnostico);
    return consultas.insert(consulta);
}

bool Paciente::addExameToConsulta(int consultaId, float custo, string data, Exame::Tipologia tipologia) {

    for (Consulta c : consultas) {
        if (consultaId == c.id) {
            c.addExame(custo, data, tipologia);
            return true;
        }
    }

    return false;
}

void Paciente::printConsultas() {

    cout << "Paciente ID: " << id << " || Nome: " << nome << endl;

    for (Consulta c : consultas) {
        c.printConsulta();
    }
}
