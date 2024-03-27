//
// Created by Dell on 12/03/2024.
//

#ifndef UNTITLED_VALUE_H
#define UNTITLED_VALUE_H


#include <vector>
#include <string>

class Value {
    double data;
    double grade;
    std::string label ;
    std::vector<Value*> parents;
    std::string operation;

public:
    Value(double data,std::string label,std::vector<Value*> parents={},std::string operation="");
    Value operator+(Value& other);
    Value operator+(double other);

    Value operator-(Value& other);
    Value operator-(double other);

    Value operator*(Value& other);
    Value operator*(double other);

    Value operator/(Value& other);
    Value operator/(double other);

    void backpropagate();
    Value tanh(Value sum);

    double getdata(){return data;}
    double getgrade(){return grade;}
    void addparent(Value* a){
        parents.push_back(a);
    }
    std::vector<Value*> getparents(){
        return parents;
    }

    std::string getlabel(){
        return this->label;
    }

    std::string getoperation(){
        return this->operation;
    }


};






#endif //UNTITLED_VALUE_H
