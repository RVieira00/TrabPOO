#ifndef EXAME_H
#define EXAME_H

#include "Servico.h"

class Exame : public Servico {
public:
    enum Tipologia {
        Analises_Clinicas = 0,
        Imagiologia = 1,
        Check_Up = 2,
    };

private:
    Tipologia eTipologia;

public:
    Exame(int id, float custo, const std::string &data, Tipologia eTipologia);

    void printExame();

    bool operator<(const Exame &e) const;
};

#endif//EXAME_H
