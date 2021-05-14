#ifndef TRABALHOPOO_V2_CONSULTA_H
#define TRABALHOPOO_V2_CONSULTA_H

#include "Colecao.h"
#include "Exame.h"
#include "Servico.h"
#include <string>

class Consulta : public Servico {
private:
    string diagnostico;
    Colecao<Exame> exames;

public:
    Consulta(int id, float custo, const string &data, const string &diagnostico);
    bool operator<(const Consulta &c) const;
    float getCustoTotal();

    bool addExame(float custo, string data, Exame::Tipologia tipologia);

    void printConsulta();
};

#endif//TRABALHOPOO_V2_CONSULTA_H
