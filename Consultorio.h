#ifndef TRABALHOPOO_V2_CONSULTORIO_H
#define TRABALHOPOO_V2_CONSULTORIO_H

#include "Colecao.h"
#include "Paciente.h"
#include <string>

class Consultorio {
private:
    Colecao<Paciente> pacientes;

private:
public:
    Consultorio();

    bool addPaciente(string nome);
    bool addConsultaToPaciente(int pacienteId, float custo, string data, string diagnostico);
    bool addExameToConsulta(int pacienteId, int consultaId, float custo, string data, Exame::Tipologia tipologia);

    void printPacientes();
    void printConsultasFromPaciente(int pacienteId);

    void printTotalFaturado();
};

#endif//TRABALHOPOO_V2_CONSULTORIO_H
