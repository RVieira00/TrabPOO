#ifndef TRABPOO_SERVICO_H
#define TRABPOO_SERVICO_H

#include <string>

class Servico {
protected:
    int s_id;
    float s_custo;
    std::string s_data;

public:
    Servico(int id, float custo, const std::string &data);

    int getSId() const;
    void setSId(int sId);
    float getSCusto() const;
    void setSCusto(float sCusto);
    const std::string &getSData() const;
    void setSData(const std::string &sData);
};


#endif//TRABPOO_SERVICO_H
