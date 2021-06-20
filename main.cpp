#include "Consultorio.h"
#include <iostream>

int main() {

    Consultorio c("CLINICA XXXXXX");
    std::cout << c.getNome() << "\n\n";

    c.addPaciente("KAKA");
    c.addPaciente("TERESINHA");

    std::cout << "PRINT PACIENTES" << std::endl;
    c.printPacientes();
    std::cout << std::endl;

    c.addConsultaToPaciente(0, 15.22f, "23-32-1992", "Lorem ipsum dolor sit amet");
    c.addExameToConsulta(0, 0, 23, "23-32-1992", Exame::Analises_Clinicas);

    c.addConsultaToPaciente(1, 15, "09-01-1985", "Oremus Ora et labora");
    c.addConsultaToPaciente(1, 19.37f, "01-09-1986", "Finibus Bonorum et Malorum");

    c.addExameToConsulta(1, 1, 10, "01-09-1986", Exame::Check_Up);
    c.addExameToConsulta(1, 1, 12, "01-09-1986", Exame::Imagiologia);

    std::cout << "PRINT CONSULTAS FROM PACIENTE 0" << std::endl;
    c.printConsultasFromPaciente(0);
    std::cout << std::endl;

    std::cout << "PRINT CONSULTAS PACIENTE 1" << std::endl;
    c.printConsultasFromPaciente(1);
    std::cout << std::endl;

    std::cout << "Total Faturado: " << c.getTotalFaturado() << " EURO\n\n";

    return 0;
}
