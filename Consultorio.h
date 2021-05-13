#ifndef TRABPOO_CONSULTORIO_H
#define TRABPOO_CONSULTORIO_H

#include "Colecao.h"
#include "Paciente.h"
#include <string>

class Consultorio {
private:
    std::string m_nome;
    Colecao<Paciente> pacientes;

public:
    Consultorio(const string &mNome);

    const std::string &getNome() const;
    void setNome(const std::string &nome);

    bool addPaciente(std::string nome_paciente);

    void printPacientes();
    void printPacienteInfo();
};


#endif//TRABPOO_CONSULTORIO_H
