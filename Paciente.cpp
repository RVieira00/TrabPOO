#include "Paciente.h"

Paciente::Paciente(int id) {
    Paciente::m_id = id;
}

Paciente::Paciente(std::string nome) {
    Paciente::m_nome = nome;
}

Paciente::Paciente(int id, std::string nome) {
    Paciente::m_id = id;
    Paciente::m_nome = nome;
}

bool Paciente::operator<(const Paciente& a) const { return m_nome < a.m_nome; }


int Paciente::getMId() const {
    return m_id;
}
void Paciente::setMId(int mId) {
    m_id = mId;
}
const std::string &Paciente::getMNome() const {
    return m_nome;
}
void Paciente::setMNome(const std::string &mNome) {
    m_nome = mNome;
}
