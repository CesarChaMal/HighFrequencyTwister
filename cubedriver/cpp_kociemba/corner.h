#pragma once
#include <array>

namespace Kociemba { namespace TwoPhase {

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//The names of the corner positions of the cube. Corner URF e.g., has an U(p), a R(ight) and a F(ront) facelet
enum Corner {
    URF, UFL, ULB, UBR, DFR, DLF, DBL, DRB
};
static const std::array<Corner, 8> Corner_values = { URF, UFL, ULB, UBR, DFR, DLF, DBL, DRB };

}}