//
//  Santa.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-11.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Santa_hpp
#define Santa_hpp

#include "Creature.hpp"
#include <stdio.h>


namespace santas_workshop {


class Santa : public Creature
{
private:
    
    
public:
    Santa(const std::string &name, int age)
        : Creature{ name, age }
    {
    }
    
    
    
};

}

#endif /* Santa_hpp */
