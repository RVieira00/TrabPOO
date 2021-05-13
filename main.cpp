#include "Consulta.h"
#include "Consultorio.h"
#include "Exame.h"
#include <iostream>

using namespace std;

int main() {

    cout << "Consultorio" << endl;
    Consultorio consultorio("Clinica Vieira");

    consultorio.addPaciente("Jota P");
    consultorio.addPaciente("Patel");
    consultorio.addPaciente("Rute");
    consultorio.addPaciente("Marlene");

    consultorio.printPacientes();

    cout << endl;
    cout << "PACIENTE" << endl;
    Paciente p(2, "Kaka");
    p.addConsulta(0, 32, "23-32-32", "Ta ok");
    p.printConsultas();

    cout << endl;
    cout << "CONSULTA" << endl;
    Consulta c(3, 22.4, "00-00-00", "podia tar melhor");
    c.addExame(0, 99.2, "09-09-2000", Exame::Imagiologia);
    c.printExames();

    cout << endl;
    cout << "EXAME" << endl;
    Exame e(2, 89.2, "09-12-0321", Exame::Check_Up);
    e.printTipologia();


    return 0;
}
