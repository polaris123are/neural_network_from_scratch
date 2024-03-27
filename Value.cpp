//
// Created by Dell on 12/03/2024.
//

#include "Value.h"
#include <math.h>

Value::Value(double data,std::string label,std::vector<Value*> parents,std::string opration) {
    this->data=data;
    this->label=label;
    this->parents=parents;
    this->operation=operation;
}



Value Value::operator*(Value &other) {

     Value a=Value(other.data*this->data,this->getlabel()+"*"+other.getlabel(),{this,&other},"mult");
     return a;
}

Value Value::operator+(Value &other) {
    Value a=Value(other.data*this->data,this->getlabel()+"+"+other.getlabel(),{this,&other},"plus");

    return a;
}

Value Value::operator-(Value& other)  {
    Value a=Value(other.data*this->data,this->getlabel()+"-"+other.getlabel(),{this,&other},"plus");

    return a;
}

Value Value::operator/(Value& other)  {
    Value a=Value(other.data/this->data,this->getlabel()+"/"+other.getlabel(),{this,&other},"mult");

    return a;
}


void Value::backpropagate(){
    if(parents.empty()){
        return ;
    }
    if(this->getoperation()=="*"){
        parents[0]->grade=this->grade*parents[1]->data;
        parents[1]->grade=this->grade*parents[0]->data;
    }else if(this->getoperation()=="+"){
        parents[0]->grade=this->grade*1;
        parents[1]->grade=this->grade*1;
    }else if(this->getoperation()=="tanh"){

    }
};

Value Value::tanh(Value sum) {
    return
}



