#include "Servico.h"

using namespace std;

Servico::Servico(int id, float custo, const string &data) : s_id(id), s_custo(custo), s_data(data) {}

int Servico::getSId() const {
    return s_id;
}
void Servico::setSId(int sId) {
    s_id = sId;
}
float Servico::getSCusto() const {
    return s_custo;
}
void Servico::setSCusto(float sCusto) {
    s_custo = sCusto;
}
const std::string &Servico::getSData() const {
    return s_data;
}
void Servico::setSData(const string &sData) {
    s_data = sData;
}
