//
// Created by Dell on 07/03/2024.
//

#ifndef UNTITLED_NEURON_H
#define UNTITLED_NEURON_H
#include "vector"
#include "Value.h"
#include <cstdlib>
namespace Neurons {

    class Neuron {

        int numberofinputs;
        Value bais;
        std::vector<Value> values;
        std::vector<Value> wieghts;

    public:
        Neuron(int numberofinputs);

        int getnumberofinput();

        std::vector<Value> getwieght();

        Value getbais();

        //this methode call the neuron give him the values that need to perform on them the sum function and the tanh function and return the value
        //and then just add the bais
        double call(std::vector<double> xs);


    };



} // Neurons

#endif //UNTITLED_NEURON_H
