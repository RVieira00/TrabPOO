#include "Paciente.h"
#include <iostream>

Paciente::Paciente(const string &mNome) : m_nome(mNome) {}
Paciente::Paciente(int pId, const string &mNome) : p_id(pId), m_nome(mNome) {}
Paciente::Paciente(int pId) : p_id(pId) {}


bool Paciente::operator<(const Paciente &p) const {
    return p_id < p.p_id;
}

int Paciente::getPId() const {
    return p_id;
}
void Paciente::setPId(int pId) {
    p_id = pId;
}
const string &Paciente::getMNome() const {
    return m_nome;
}
void Paciente::setMNome(const string &mNome) {
    m_nome = mNome;
}


bool Paciente::addConsulta(int id, float custo, const string &data, string diagonostico) {
    Consulta consulta(consultas.size(), custo, data, diagonostico);
    return consultas.insert(consulta);
}
void Paciente::printConsultas() {
    for (Consulta c : consultas) {
        std::cout << " " << c.getSId() << " " << c.getSCusto() << " " << c.getSData() << " " << c.getMDiagonostico() << " " << std::endl;
        c.printExames();
    }
}
