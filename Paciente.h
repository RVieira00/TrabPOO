#ifndef TRABALHOPOO_V2_PACIENTE_H
#define TRABALHOPOO_V2_PACIENTE_H

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

    bool operator<(const Paciente &p) const;
    int getId() const;
    const string &getNome() const;
    float getTotalFaturado();

    bool addConsulta(float custo, string data, string diagnostico);
    bool addExameToConsulta(int consultaId, float custo, string data, Exame::Tipologia tipologia);

    void printConsultas();
};

#endif//TRABALHOPOO_V2_PACIENTE_H
