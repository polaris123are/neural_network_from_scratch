//
// Created by Dell on 12/03/2024.
//

#ifndef UNTITLED_MEANSQUARELOSS_H
#define UNTITLED_MEANSQUARELOSS_H


#include <vector>

class MeanSquareLoss {
    std::vector<double> predictedvalues;
    std::vector<double> reelvalues;
public:
    MeanSquareLoss(std::vector<double> predictedvalues,std::vector<double> reelvalues);
    double calculate();



};


#endif //UNTITLED_MEANSQUARELOSS_H
