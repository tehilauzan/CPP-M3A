//
// Created by Tehila on 28/04/2020.
//

#ifndef SOLVER_TEHILA_SOLVER_HPP
#define SOLVER_TEHILA_SOLVER_HPP

#include <iosfwd>
#include <complex.h>

using namespace std;
namespace solver{


    class RealVariable{
    private:
        float a,b,c;
    public:
        RealVariable(){
            this->a=this->c=0;
            this->b=1;
        }
        RealVariable(float a,float b,float c){
            this->a=a;
            this->b=b;
            this->c=c;
        }
        friend RealVariable operator+ (float a, RealVariable r) ;
        friend RealVariable operator+ ( RealVariable r, float a) ;
        friend RealVariable operator+ (RealVariable r1, RealVariable r2) ;
        friend RealVariable operator* (float a, RealVariable r) ;
        friend RealVariable operator- (RealVariable r, float  a) ;
        friend RealVariable operator- (RealVariable r1, RealVariable  r2) ;
       friend RealVariable operator== (RealVariable r1,RealVariable  r2) ;
        friend float operator== (RealVariable r, float  a) ;
        friend RealVariable operator^ (RealVariable r, float  a) ;
        friend ostream& operator<<(ostream& os, const RealVariable& r);
        friend RealVariable operator/(  RealVariable r,float a);


    };
    RealVariable solve (RealVariable r);
    double solve (float a);

    class ComplexVariable{
    private:
        float _re=0,_im=0;
        std::complex<double> c;

    public:
        ComplexVariable(): _re(0),_im(0){}
        friend ComplexVariable operator+ (float a, ComplexVariable c) ;
        friend ComplexVariable operator+ ( ComplexVariable c1, float a) ;
        friend ComplexVariable operator+ (ComplexVariable c1, ComplexVariable c2) ;
        friend ComplexVariable operator+ (ComplexVariable c1, std::complex<double> c2) ;
        friend ComplexVariable operator+ (std::complex<double> c1,ComplexVariable c2 ) ;
        friend ComplexVariable operator* (float a, ComplexVariable c1) ;
        friend ComplexVariable operator- (ComplexVariable c1, float  a) ;
        friend ComplexVariable operator- (ComplexVariable c1, ComplexVariable  c2) ;
        friend double operator== (ComplexVariable c1, float  a) ;
        friend double operator== (ComplexVariable c1, ComplexVariable c2) ;
        friend ComplexVariable operator^ (ComplexVariable c1, float  a) ;
        friend ostream& operator<<(ostream& os, const ComplexVariable c);
        friend ComplexVariable operator/( ComplexVariable c,float a);

    };
    std::complex<double> solve (double a);
    complex<double> solve (double c);


    }




#endif //SOLVER_TEHILA_SOLVER_HPP
