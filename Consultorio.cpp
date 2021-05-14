#include "Consultorio.h"
#include <iostream>

Consultorio::Consultorio() {}


bool Consultorio::addPaciente(string nome) {

    Paciente paciente(pacientes.size(), nome);
    return pacientes.insert(paciente);
}

bool Consultorio::addConsultaToPaciente(int pacienteId, float custo, string data, string diagnostico) {

    for (Paciente p : pacientes) {
        if (pacienteId == p.getId()) {
            p.addConsulta(custo, data, diagnostico);
            return true;
        }
    }

    return false;
}

bool Consultorio::addExameToConsulta(int pacienteId, int consultaId, float custo, string data, Exame::Tipologia tipologia) {

    for (Paciente p : pacientes) {
        if (pacienteId == p.getId()) {
            return p.addExameToConsulta(consultaId, custo, data, tipologia);
        }
    }

    return false;
}

void Consultorio::printPacientes() {

    for (Paciente p : pacientes) {
        cout << "Paciente ID: " << p.getId() << " || Nome: " << p.getNome() << endl;
    }
}

void Consultorio::printConsultasFromPaciente(int pacienteId) {

    for (Paciente p : pacientes) {
        if (p.getId() == pacienteId) {
            p.printConsultas();
        }
    }
}

void Consultorio::printTotalFaturado() {

    float totalFaturado = 0;

    for (Paciente p : pacientes) {
        totalFaturado += p.getTotalFaturado();
    }

    cout << "Total Faturado: " << totalFaturado << "€" << endl;
}
