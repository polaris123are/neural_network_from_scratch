//
// Created by Dell on 09/03/2024.
//

#include "Layer.h"

namespace Layers {

   Layer::Layer(int numbersofinput,int numberofoutpute) {
       for(int i=0;i<numberofoutpute;i++) {
           layer.push_back(Neurons::Neuron(numbersofinput));
       }
   }

    std::vector<double> Layer::call(std::vector<double> x) {
       std::vector<double> results;
       for(int i=0;i<layer.size();i++){
            results.push_back(layer[i].call(x));
       }
       return results;
   }
} // Layers