#ifndef PACIENTE_H
#define PACIENTE_H

#include "Colecao.h"
#include "Consulta.h"
#include <string>

class Paciente {
private:
    int id;
    string nome;
    Colecao<Consulta> consultas;

public:
    Paciente(int id, const string &nome);

    int getId() const;
    const string &getNome() const;
    float getTotalFaturado();

    bool addConsulta(float custo, const string &data, const string &diagnostico);
    bool addExameToConsulta(int consultaId, float custo, const string &data, Exame::Tipologia tipologia);

    bool operator<(const Paciente &p) const;
    Consulta *findConsulta(int consultaId);

    void printConsultas();
};

#endif//PACIENTE_H
