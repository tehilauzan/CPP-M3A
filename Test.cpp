//
// Created by Tehila on 28/04/2020.
//
#include "doctest.h"
#include "solver.hpp"

using namespace solver;


TEST_CASE("SIMPLE SOLVER"){
RealVariable x;
    for (int i = 2; i <300 ;i=i+2) {
        CHECK(solve(i*x/2== 1)==-1);

    }
}
