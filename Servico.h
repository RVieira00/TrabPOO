#ifndef SERVICO_H
#define SERVICO_H

#include <string>

class Servico {
public:
    int id;
    float custo;
    std::string data;

public:
    Servico(int id, float custo, const std::string &data);
};

#endif//SERVICO_H
