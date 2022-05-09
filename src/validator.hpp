// validator.hpp

#pragma once

class Validator {
    public:
        Validator();

        template<typename T>
        void addRule(T rule, auto value);

        bool validate();

    private:
        bool validity;

};