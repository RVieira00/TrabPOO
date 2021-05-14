#include "Exame.h"
#include <iostream>

using namespace std;

Exame::Exame(int id, float custo, const string &data, Exame::Tipologia eTipologia) : Servico(id, custo, data), eTipologia(eTipologia) {}

void Exame::printExame() {

    string tipo;

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
    cout << "Exame ID: " << id << " || Custo: " << custo << " || Data: " << data << " || Tipologia: " << tipo << endl;
}

bool Exame::operator<(const Exame &e) const {
    return id < e.id;
}