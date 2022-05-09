// validator.cpp
#include "validator.hpp"

Validator::Validator() : validity(false)
{

}

template<typename T>
void Validator::addRule(T rule, auto value)
{
    validity = rule(value);
}

bool Validator::validate(){
    return validity;
}