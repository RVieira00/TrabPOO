#ifndef PACIENTE_H
#define PACIENTE_H

#include "Colecao.h"
#include "Consulta.h"
#include <string>

class Paciente {
private:
    int id;
    std::string nome;
    Colecao<Consulta> consultas;

public:
    Paciente(int id, const std::string &nome);

    int getId() const;
    const std::string &getNome() const;
    float getTotalFaturado();

    bool addConsulta(float custo, const std::string &data, const std::string &diagnostico);
    bool addExameToConsulta(int consultaId, float custo, const std::string &data, Exame::Tipologia tipologia);

    bool operator<(const Paciente &p) const;
    Consulta *findConsulta(int consultaId);

    void printConsultas();
};

#endif//PACIENTE_H
