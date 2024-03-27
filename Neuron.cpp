//
// Created by Dell on 07/03/2024.
//
#include <bits/stdc++.h>
#include <iostream>
#include "Neuron.h"

namespace Neurons {


    Neuron::Neuron(int numberofinputs){
        this->numberofinputs=numberofinputs;
        for(int i=0;i<numberofinputs;i++) {
            wieghts.push_back(Value((rand() / ( double )RAND_MAX) * (1 +1) + -1,"w"+i));
        }
        bais=Value(rand() / ( double )RAND_MAX * (1 +1) + -1,"bais");
    }
    int Neuron::getnumberofinput() {return numberofinputs;};
    Value Neuron::getbais(){return bais;};

    std::vector<Value> Neuron::getwieght(){return wieghts;}

    Value Neuron::call(std::vector<Value> xs){

    };



} // Neurons