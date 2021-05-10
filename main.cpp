#include "Consultorio.h"
#include <iostream>

int main() {

    Consultorio p("Clinica Vieira");

    p.addPaciente("Joana");
    p.addPaciente("Kaka");
    p.addPaciente("Mourinho");

    p.printPacientes();
    return 0;
}
