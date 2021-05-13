#include "Consulta.h"
#include <iostream>

Consulta::Consulta(int id, float custo, const string &data, const string &diagonostico) : Servico(id, custo, data), m_diagonostico(diagonostico) {}


bool Consulta::operator<(const Consulta &c) const {
    return s_id < c.s_id;
}

bool Consulta::addExame(int id, float custo, std::string data, Exame::Tipologia tipologia) {
    Exame exame(exames.size(), custo, data, tipologia);
    return exames.insert(exame);
}

const string &Consulta::getMDiagonostico() const {
    return m_diagonostico;
}
void Consulta::setMDiagonostico(const string &mDiagonostico) {
    m_diagonostico = mDiagonostico;
}
void Consulta::printExames() {
    for (Exame e : exames) {
        cout << e.getSId() << " " << e.getSCusto() << " " << e.getSData() << " " << std::endl;
        e.printTipologia();
    }
}
