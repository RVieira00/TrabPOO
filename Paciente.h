#ifndef TRABPOO_PACIENTE_H
#define TRABPOO_PACIENTE_H

#include "Colecao.h"
#include <string>
#include "Consulta.h"

class Paciente {
private:
    int m_id{};
    std::string m_nome;
    Colecao<Consulta> consultas;

public:
    Paciente(std::string nome);
    Paciente(int id, std::string nome);
    Paciente(int id);

    bool operator<(const Paciente& a) const;

    int getMId() const;
    void setMId(int mId);
    const std::string &getMNome() const;
    void setMNome(const std::string &mNome);
};


#endif//TRABPOO_PACIENTE_H
