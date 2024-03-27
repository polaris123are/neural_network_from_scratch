#include <iostream>
#include "Neuron.h"
#include <vector>
#include "MLP.h"
#include "MeanSquareLoss.h"
#include "Value.h"

int main() {

    /*std::vector<double> xs={3.0,5.0,-1.0};
    int inputs=3;
    std::vector<int> numberofnurons={3,4,4,3};
    MLP mlp=MLP(inputs,numberofnurons);


    std::vector<double> results= mlp.call(xs);
    std::vector<double> reelvalues={1,1,1};

    MeanSquareLoss a=MeanSquareLoss(reelvalues,results);
    std::cout<<a.calculate();*/

    Value a=Value(12,"a");
    Value b=Value(16,"b");
    Value j=a*b;

    std::cout<<j.getdata()<<"\n";
    std::cout<<j.getdata()<<"\t"<<j.getlabel()<<"\n";
    for(int i=0;i<j.getparents().size();i++){
        std::cout<<j.getparents()[i]->getdata()<<"\t"<<j.getparents()[i]->getlabel()<<"\n";
    }



}
