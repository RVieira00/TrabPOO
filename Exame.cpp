#include "Exame.h"
#include <iostream>

Exame::Exame(int id, float custo, const std::string &data, Exame::Tipologia tipologia) : Servico(id, custo, data), e_tipologia(tipologia) {}

bool Exame::operator<(const Exame &e) const {
    return s_id < e.s_id;
}

Exame::Tipologia Exame::getETipologia() const {
    return e_tipologia;
}
void Exame::setETipologia(Exame::Tipologia eTipologia) {
    e_tipologia = eTipologia;
}

void Exame::printTipologia() {
    if (Exame::e_tipologia == 0) {
        std::cout << "Analises Clinicas" << std::endl;
    }
    if (Exame::e_tipologia == 1) {
        std::cout << "Imagiologia" << std::endl;
    }
    if (Exame::e_tipologia == 2) {
        std::cout << "Check-Up" << std::endl;
    }
}
