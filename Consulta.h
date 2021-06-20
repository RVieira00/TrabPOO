#ifndef CONSULTA_H
#define CONSULTA_H

#include "Colecao.h"
#include "Exame.h"
#include "Servico.h"
#include <string>

class Consulta : public Servico {
private:
    std::string diagnostico;
    Colecao<Exame> exames;

public:
    Consulta(int id, float custo, const std::string &data, const std::string &diagnostico);

    float getCustoTotal();
    const std::string &getDiagnostico() const;

    bool operator<(const Consulta &c) const;
    bool addExame(float custo, const std::string &data, Exame::Tipologia tipologia);

    void printConsulta();
};

#endif//CONSULTA_H
