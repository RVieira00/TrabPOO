#include "Consultorio.h"
#include <iostream>

using namespace std;

Consultorio::Consultorio() = default;

Consultorio::Consultorio(const string &nome) : nome(nome) {}

bool Consultorio::addPaciente(const string &pacienteNome) {

    Paciente paciente(pacientes.size(), pacienteNome);
    return pacientes.insert(paciente);
}

bool Consultorio::addConsultaToPaciente(int pacienteId, float custo, const string &data, const string &diagnostico) {

    Paciente *fP = findPaciente(pacienteId);

    if (fP != nullptr)
        return fP->addConsulta(custo, data, diagnostico);
    else {
        cout << "Paciente ID: " << pacienteId << "nao existe" << endl;
    }

    return false;
}

bool Consultorio::addExameToConsulta(int pacienteId, int consultaId, float custo, const string &data, Exame::Tipologia tipologia) {

    Paciente *fP = findPaciente(pacienteId);

    if (fP != nullptr)
        return fP->addExameToConsulta(consultaId, custo, data, tipologia);
    else {
        cout << "Paciente ID: " << pacienteId << "nao existe" << endl;
    }

    return false;
}

void Consultorio::printPacientes() {

    auto it = pacientes.begin();

    while (it != pacientes.end()) {
        cout << "Paciente ID: " << it->getId() << " || Nome: " << it->getNome() << endl;
        it++;
    }
}

Paciente *Consultorio::findPaciente(int pacienteId) {

    Paciente paciente(pacienteId, "");
    return pacientes.find(paciente);
}

void Consultorio::printConsultasFromPaciente(int pacienteId) {

    Paciente *fP = findPaciente(pacienteId);

    if (fP != nullptr) {
        cout << "Paciente ID: " << fP->getId() << " || Nome: " << fP->getNome() << endl;
        return fP->printConsultas();

    } else {
        cout << "Paciente ID: " << pacienteId << " nao existe" << endl;
    }
}

const string &Consultorio::getNome() const {
    return nome;
}

float Consultorio::getTotalFaturado() {
    float totalFaturado = 0.0f;

    auto it = pacientes.begin();

    while (it != pacientes.end()) {
        totalFaturado += findPaciente(it->getId())->getTotalFaturado();
        it++;
    }

    return totalFaturado;
}