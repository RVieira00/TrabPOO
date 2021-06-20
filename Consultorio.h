#ifndef CONSULTORIO_H
#define CONSULTORIO_H

#include "Colecao.h"
#include "Paciente.h"
#include <string>

class Consultorio {
private:
    std::string nome;
    Colecao<Paciente> pacientes;

public:
    Consultorio();
    explicit Consultorio(const std::string &nome);

    bool addPaciente(const std::string &pacienteNome);
    bool addConsultaToPaciente(int pacienteId, float custo, const std::string &data, const std::string &diagnostico);
    bool addExameToConsulta(int pacienteId, int consultaId, float custo, const std::string &data, Exame::Tipologia tipologia);

    void printPacientes();
    void printConsultasFromPaciente(int pacienteId);

    const std::string &getNome() const;
    float getTotalFaturado();
    Paciente *findPaciente(int pacienteId);
};

#endif//CONSULTORIO_H
