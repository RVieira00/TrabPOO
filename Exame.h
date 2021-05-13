#ifndef TRABPOO_EXAME_H
#define TRABPOO_EXAME_H

#include "Servico.h"
#include <string>

class Exame : public Servico {

public:
    enum Tipologia { Analises_Clinicas = 0,
                     Imagiologia = 1,
                     Check_Up = 2,
    };

private:
    Tipologia e_tipologia;

public:
    Exame(int id, float custo, const std::string &data, Tipologia tipologia);

    bool operator<(const Exame &e) const;

    Tipologia getETipologia() const;
    void setETipologia(Tipologia eTipologia);

    void printTipologia();
};

#endif//TRABPOO_EXAME_H
