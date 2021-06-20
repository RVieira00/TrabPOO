#include "Consultorio.h"
#include <iostream>

Consultorio::Consultorio() = default;

Consultorio::Consultorio(const std::string &nome) : nome(nome) {}

bool Consultorio::addPaciente(const std::string &pacienteNome) {

    Paciente paciente(pacientes.size(), pacienteNome);
    return pacientes.insert(paciente);
}

bool Consultorio::addConsultaToPaciente(int pacienteId, float custo, const std::string &data, const std::string &diagnostico) {

    Paciente *fP = findPaciente(pacienteId);

    if (fP != nullptr)
        return fP->addConsulta(custo, data, diagnostico);
    else {
        std::cout << "Paciente ID: " << pacienteId << "nao existe" << std::endl;
    }

    return false;
}

bool Consultorio::addExameToConsulta(int pacienteId, int consultaId, float custo, const std::string &data, Exame::Tipologia tipologia) {

    Paciente *fP = findPaciente(pacienteId);

    if (fP != nullptr)
        return fP->addExameToConsulta(consultaId, custo, data, tipologia);
    else {
        std::cout << "Paciente ID: " << pacienteId << "nao existe" << std::endl;
    }

    return false;
}

void Consultorio::printPacientes() {

    for (const Paciente &p : pacientes) {
        std::cout << "Paciente ID: " << p.getId() << " || Nome: " << p.getNome() << std::endl;
    }
}

Paciente *Consultorio::findPaciente(int pacienteId) {

    Paciente paciente(pacienteId, "");
    return pacientes.find(paciente);
}

void Consultorio::printConsultasFromPaciente(int pacienteId) {

    Paciente *fP = findPaciente(pacienteId);

    if (fP != nullptr) {
        std::cout << "Paciente ID: " << fP->getId() << " || Nome: " << fP->getNome() << std::endl;
        return fP->printConsultas();

    } else {
        std::cout << "Paciente ID: " << pacienteId << " nao existe" << std::endl;
    }
}

const std::string &Consultorio::getNome() const {
    return nome;
}

float Consultorio::getTotalFaturado() {

    float totalFaturado = 0.0f;

    for (const Paciente &p : pacientes) {
        totalFaturado += findPaciente(p.getId())->getTotalFaturado();
    }

    return totalFaturado;
}