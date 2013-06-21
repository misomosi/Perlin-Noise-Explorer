//
//  Simplex2DEval.h
//  Perlin Noise Explorer
//
//  Created by Michael Collins on 6/21/13.
//  Copyright (c) 2013 Michael Collins. All rights reserved.
//

#ifndef __Perlin_Noise_Explorer__Simplex2DEval__
#define __Perlin_Noise_Explorer__Simplex2DEval__

#include "glm.hpp"

class Simplex2DEval {
    glm::vec2 *V[3]; //Gradient vectors for each of the corners of this simplex
    float P[3]; //Barycentric coords of the given P
    
public:
    float Eval() const;
    glm::vec2 Gradient() const;
};

#endif /* defined(__Perlin_Noise_Explorer__Simplex2DEval__) */
