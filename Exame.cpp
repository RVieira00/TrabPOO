#include "Exame.h"
#include <iostream>

Exame::Exame(int id, float custo, const std::string &data, Exame::Tipologia eTipologia) : Servico(id, custo, data), eTipologia(eTipologia) {}

void Exame::printExame() {

    std::string tipo;

    switch (eTipologia) {
        case 0:
            tipo = "Analises Clinicas";
            break;
        case 1:
            tipo = "Imagiologia";
            break;
        case 2:
            tipo = "Check-Up";
            break;
    }
    std::cout << "Exame ID: " << getId() << " || Custo: " << getCusto() << " || Data: " << getData() << " || Tipologia: " << tipo << std::endl;
}

bool Exame::operator<(const Exame &e) const {
    return id < e.id;
}