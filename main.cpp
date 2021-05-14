#include "Consultorio.h"
#include <iostream>
int main() {

    Consultorio c;

    c.addPaciente("Bruno");

    c.addConsultaToPaciente(0,3.2,"23-32-0992","Ta limpo");
    //c.addExameToConsulta(0,0,23,"23-23-23",Exame::Analises_Clinicas);

    c.printPacientes();
    c.printConsultasFromPaciente(0);
    c.printTotalFaturado();


    return 0;
}
