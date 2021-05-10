#include "Consultorio.h"

Consultorio::Consultorio(std::string nome) {
    Consultorio::m_nome = nome;
}

const std::string &Consultorio::getNome() const {
    return m_nome;
}
void Consultorio::setNome(const std::string &nome) {
    Consultorio::m_nome = nome;
}

bool Consultorio::addPaciente(std::string nome_paciente) {
    Paciente paciente(pacientes.size(),nome_paciente);
    return pacientes.insert(paciente);

}