#include "Consultorio.h"
#include <iostream>

using namespace std;

int main() {

    Consultorio c("CLINICA XXXXXX");
    cout << c.getNome() << "\n\n";

    c.addPaciente("KAKA");
    c.addPaciente("TERESINHA");

    cout << "PRINT PACIENTES" << endl;
    c.printPacientes();
    cout << endl;

    c.addConsultaToPaciente(0, 15.22, "23-32-1992", "Lorem ipsum dolor sit amet");
    c.addExameToConsulta(0, 0, 23, "23-32-1992", Exame::Analises_Clinicas);

    c.addConsultaToPaciente(1, 15, "09-01-1985", "Oremus Ora et labora");
    c.addConsultaToPaciente(1, 19.22, "01-09-1986", "Finibus Bonorum et Malorum");

    c.addExameToConsulta(1, 1, 10, "01-09-1986", Exame::Check_Up);
    c.addExameToConsulta(1, 1, 10, "01-09-1986", Exame::Imagiologia);

    cout << "PRINT CONSULTAS FROM PACIENTE 0" << endl;
    c.printConsultasFromPaciente(0);
    cout << endl;

    cout << "PRINT CONSULTAS PACIENTE 1" << endl;
    c.printConsultasFromPaciente(1);
    cout << endl;

    cout << "Total Faturado: " << c.getTotalFaturado() << " EURO\n\n";

    return 0;
}
