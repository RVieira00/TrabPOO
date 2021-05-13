#ifndef TRABPOO_CONSULTA_H
#define TRABPOO_CONSULTA_H

#include "Colecao.h"
#include "Exame.h"
#include "Servico.h"
#include <string>

class Consulta : public Servico {
private:
    std::string m_diagonostico;
    Colecao<Exame> exames;

public:
    Consulta(int id, float custo, const string &data, const string &diagonostico);

    bool operator<(const Consulta &c) const;
    bool addExame(int id, float custo, std::string data, Exame::Tipologia tipologia);

    const string &getMDiagonostico() const;
    void setMDiagonostico(const string &mDiagonostico);

    void printExames();
};
#endif//TRABPOO_CONSULTA_H
