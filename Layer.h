//
// Created by Dell on 09/03/2024.
//

#ifndef UNTITLED_LAYER_H
#define UNTITLED_LAYER_H

#include <vector>
#include "Neuron.h"

namespace Layers {

    class Layer {


    public:
        std::vector<Neurons::Neuron> layer;
        Layer(int numbersofinput,int numberofoutput);
        std::vector<double>  call(std::vector<double> x);

    };

} // Layers

#endif //UNTITLED_LAYER_H
