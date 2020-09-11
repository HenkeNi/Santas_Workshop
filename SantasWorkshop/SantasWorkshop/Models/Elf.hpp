//
//  Elf.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-11.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Elf_hpp
#define Elf_hpp

#include "Creature.hpp"
#include <stdio.h>

namespace santas_workshop {


class Elf : public Creature
{
    
public:
    Elf(const std::string &name, int age)
        : Creature{ name, age }
    {
    }
    
    
};


}

#endif /* Elf_hpp */
