#ifndef BIGDOUBLE_NUMBER
#define BIGDOUBLE_NUMBER 20221216L

#include <iostream>

class BigDouble {
    private:
        char* integer;
        char* fractional;
        size_t size;
        bool sign;
    
    protected:
        

    public:
        void print();

        friend BigDouble operator+(const BigDouble&, const BigDouble&);
        friend BigDouble operator-(const BigDouble&, const BigDouble&);
        friend BigDouble operator*(const BigDouble&, const BigDouble&);
        friend BigDouble operator/(const BigDouble&, const BigDouble&);
};


#endif /* BIGDOUBLE_NUMBER */