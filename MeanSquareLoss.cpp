//
// Created by Dell on 12/03/2024.
//

#include <cmath>
#include "MeanSquareLoss.h"


MeanSquareLoss::MeanSquareLoss(std::vector<double> predictedvalues, std::vector<double> reelvalues) {
    this->predictedvalues=predictedvalues;
    this->reelvalues=reelvalues;
}
double MeanSquareLoss::calculate() {
    double mean;
    for(int i=0;i<predictedvalues.size();i++){
        mean=mean+pow(predictedvalues[i]-reelvalues[i],2);
    }
    return mean;


}