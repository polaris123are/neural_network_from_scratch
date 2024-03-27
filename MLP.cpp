//
// Created by Dell on 09/03/2024.
//

#include <iostream>
#include "MLP.h"
#include "Layer.h"


MLP::MLP(int nin, std::vector<int> nout) {

    for(int i=0;i<nout.size();i++){
        if(i==0){
            layers.push_back(Layers::Layer(nin,nout[i]));
        }else {
            layers.push_back(Layers::Layer(nout[i - 1], nout[i]));
        }
    }
}

std::vector<double> MLP::call(std::vector<double> x){
    std::vector<double> results=x;
    for(int i=0;i<layers.size();i++){
        results=layers[i].call(results);
    }
    return results;
}

