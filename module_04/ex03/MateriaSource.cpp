#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    for (int i(0); i < 4; i++) {
        this->_materiaLearned[i] = NULL;
    }
}

MateriaSource::MateriaSource(MateriaSource const& src) {
    *this = src;
}

MateriaSource::~MateriaSource(void) {
    for (int i(0); i < 4; i++) {
        delete this->_materiaLearned[i];
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const& src) {
    for (int i(0); i < 4; i++) {
        this->_materiaLearned[i] = src._materiaLearned[i];
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
    int freeSlot(0);

    while (freeSlot < 4 && this->_materiaLearned[freeSlot])
        freeSlot++;
    if (freeSlot > 3)
        return ;
    this->_materiaLearned[freeSlot] = materia->clone();
}

AMateria* MateriaSource::createMateria(std::string const& type) {
    int matchIndex(0);
    AMateria *materia;

    while (this->_materiaLearned[matchIndex] != NULL && this->_materiaLearned[matchIndex]->geType() != type) {
        matchIndex++;
    }
    if (this->_materiaLearned[matchIndex]->geType() != type)
        materia =  NULL;
    else {
        materia = this->_materiaLearned[matchIndex]->clone();
    }
        return materia;
}