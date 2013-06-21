//
//  SimplexVectorField.h
//  Perlin Noise Explorer
//
//  Created by Michael Collins on 6/20/13.
//  Copyright (c) 2013 Michael Collins. All rights reserved.
//

#ifndef __Perlin_Noise_Explorer__SimplexVector2DField__
#define __Perlin_Noise_Explorer__SimplexVector2DField__

#include "glm.hpp"

class Simplex2DVectorField {
    glm::vec2 *gradients;
    
public:
    Simplex2DVectorField(int width, int height);
    glm::vec2 getPosition(int n);

};

#endif /* defined(__Perlin_Noise_Explorer__SimplexVector2DField__) */
