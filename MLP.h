//
// Created by Dell on 09/03/2024.
//

#ifndef UNTITLED_MLP_H
#define UNTITLED_MLP_H

#include "Layer.h"


class MLP {
    std::vector<Layers::Layer> layers;
public:

    MLP(int nin,std::vector<int> nout);
    std::vector<double> call(std::vector<double> x);

};


#endif //UNTITLED_MLP_H
