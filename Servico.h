#ifndef SERVICO_H
#define SERVICO_H

#include <string>

class Servico {
protected:
    int id;
    float custo;
    std::string data;

public:
    Servico(int id, float custo, const std::string &data);

    int getId() const;
    float getCusto() const;
    const std::string &getData() const;
};

#endif//SERVICO_H
