#include "Consultorio.h"
#include <iostream>

Consultorio::Consultorio(const string &mNome) : m_nome(mNome) {}


const std::string &Consultorio::getNome() const {
    return m_nome;
}
void Consultorio::setNome(const string &nome) {
    Consultorio::m_nome = nome;
}


bool Consultorio::addPaciente(string nome_paciente) {
    Paciente paciente(pacientes.size(), nome_paciente);
    return pacientes.insert(paciente);
}

void Consultorio::printPacientes() {
    for (const Paciente &paciente : pacientes) {
        cout << paciente.getPId() << " " << paciente.getMNome() << endl;
    }
}
