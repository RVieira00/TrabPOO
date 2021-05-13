#ifndef TRABPOO_PACIENTE_H
#define TRABPOO_PACIENTE_H

#include "Colecao.h"
#include "Consulta.h"
#include <string>

class Paciente {
private:
    int p_id{};
    std::string m_nome;
    Colecao<Consulta> consultas;

public:
    Paciente(const string &mNome);
    Paciente(int pId);
    Paciente(int pId, const string &mNome);

    bool operator<(const Paciente &p) const;
    bool addConsulta(int id, float custo, const std::string &data, std::string diagonostico);

    int getPId() const;
    void setPId(int pId);
    const string &getMNome() const;
    void setMNome(const string &mNome);

    void printConsultas();
};


#endif//TRABPOO_PACIENTE_H
