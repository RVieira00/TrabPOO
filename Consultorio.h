#ifndef CONSULTORIO_H
#define CONSULTORIO_H

#include "Colecao.h"
#include "Paciente.h"
#include <string>

class Consultorio {
private:
    std::string nome;
    Colecao<Paciente> pacientes;

private:
public:
    Consultorio();
    Consultorio(const string &nome);

    bool addPaciente(const string &pacienteNome);
    bool addConsultaToPaciente(int pacienteId, float custo, const string &data, const string &diagnostico);
    bool addExameToConsulta(int pacienteId, int consultaId, float custo, const string &data, Exame::Tipologia tipologia);

    void printPacientes();
    void printConsultasFromPaciente(int pacienteId);

    const string &getNome() const;
    float getTotalFaturado();
    Paciente *findPaciente(int pacienteId);
};

#endif//CONSULTORIO_H
