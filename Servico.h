#ifndef TRABALHOPOO_V2_SERVICO_H
#define TRABALHOPOO_V2_SERVICO_H

#include <string>

class Servico {
public:
    int id;
    float custo;
    std::string data;

public:
    Servico(int id, float custo, const std::string &data);
};

#endif//TRABALHOPOO_V2_SERVICO_H
