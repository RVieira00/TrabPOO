///////////////Colecao.h (vrs. 13/Dez/2018)////////////////
// Alterada Ricardo Vieira  Maio 2021

#pragma once
#include <set>

template<class K>
class Colecao : public std::set<K> {
public:
    bool insert(const K &c);
    K *find(const K &c) const;
    int size() const;
    void erase(const K &);
    //void clear();
    //bool empty() const;
    //iterator begin();
    //iterator end();
};

template<class K>
bool Colecao<K>::insert(const K &c) {
    std::pair<typename std::set<K>::iterator, bool> r = std::set<K>::insert(c);
    return (r.second);
}

template<class K>
K *Colecao<K>::find(const K &c) const {
    K *r = 0;
    typename std::set<K>::iterator i = std::set<K>::find(c);
    if (i != std::set<K>::end())
        r = const_cast<K *>(i.operator->());
    return (r);
}

template<class K>
int Colecao<K>::size() const {
    return ((int) std::set<K>::size());
}

template<class K>
void Colecao<K>::erase(const K &c) {
    std::set<K>::erase(c);
}
