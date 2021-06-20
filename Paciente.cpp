#include "Paciente.h"
#include <iostream>

Paciente::Paciente(int id, const std::string &nome) : id(id), nome(nome) {}

int Paciente::getId() const {
    return id;
}

const std::string &Paciente::getNome() const {
    return nome;
}

float Paciente::getTotalFaturado() {

    float totalFaturado = 0.0f;

    for (Consulta c : consultas) {
        totalFaturado += c.getCustoTotal();
    }

    return totalFaturado;
}

bool Paciente::addConsulta(float custo, const std::string &data, const std::string &diagnostico) {

    Consulta consulta(consultas.size(), custo, data, diagnostico);
    return consultas.insert(consulta);
}

bool Paciente::addExameToConsulta(int consultaId, float custo, const std::string &data, Exame::Tipologia tipologia) {

    Consulta *fC = findConsulta(consultaId);

    if (fC != nullptr)
        return fC->addExame(custo, data, tipologia);
    else {
        std::cout << "Consulta ID: " << consultaId << "nao existe" << std::endl;
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

    for (const Consulta &c : consultas) {
        std::cout << "\n";
        findConsulta(c.getId())->printConsulta();
    }
}
