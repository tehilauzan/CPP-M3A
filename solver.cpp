//
// Created by Tehila on 28/04/2020.
//

#include "solver.hpp"
#include <iostream>

using namespace std;
using solver::RealVariable;
 namespace solver{


      RealVariable operator+ (float a, RealVariable r) {
          return r;
      }
     RealVariable operator+ ( RealVariable r, float a) {return r;}
      RealVariable operator+ (RealVariable r1, RealVariable r2) {return r1;}
     RealVariable operator* (float a, RealVariable r) {return r;}
      RealVariable operator- (RealVariable r, float  a) {return r;}
      RealVariable operator- (RealVariable r1, RealVariable  r2) {return r1;}
      RealVariable operator== (RealVariable r1,RealVariable  r2) {return r1;}
      float operator== (RealVariable r, float  a) {return -1;}
      RealVariable operator^ (RealVariable r, float  a) {return r;}
      ostream& operator<<(ostream& os, const RealVariable& r){return os;}
      RealVariable operator/(  RealVariable r,float a){return r;}


      ComplexVariable operator+ (float a, ComplexVariable c) {return c;}
      ComplexVariable operator+ ( ComplexVariable c1, float a) {return c1;}
      ComplexVariable operator+ (ComplexVariable c1, ComplexVariable c2) {return c1;}
      ComplexVariable operator+ (ComplexVariable c1, std::complex<double> c2) {return c1;}
      ComplexVariable operator+ (std::complex<double> c1,ComplexVariable c2 ) {return c2;}
      ComplexVariable operator* (float a, ComplexVariable c1) {return c1;}
      ComplexVariable operator- (ComplexVariable c1, float  a) {return c1;}
      ComplexVariable operator- (ComplexVariable c1, ComplexVariable  c2) {return c1;}
      double operator== (ComplexVariable c1, float  a) {return -1;}
      double operator== (ComplexVariable c1, ComplexVariable c2) {return -1;}
      ComplexVariable operator^ (ComplexVariable c1, float  a) {return c1;}
      ostream& operator<<(ostream& os, const ComplexVariable c){return os;}
      ComplexVariable operator/( ComplexVariable c,float a){return c;}



     RealVariable solve(RealVariable a) {
    return a;
}
double solve (float a){
    return -1;
}
     std::complex<double> solve(ComplexVariable a){
         std::complex<double> b;
         b.real(2);
         b.imag(3);
         return b;
     }
     complex<double> solve (double c){
         return -1;
     }
}





