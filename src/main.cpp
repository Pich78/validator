#include <iostream>
#include "validator.hpp"

using namespace std;

int main()
{

    auto rule = [](auto value)
    {
        return value;
    };

    Validator val;
    cout << "Validity: " << val.validate() << std::endl;    
    bool retVal = rule(true);
    val.addRule(rule,retVal);
    cout << "Validity: " << val.validate() << std::endl;
}