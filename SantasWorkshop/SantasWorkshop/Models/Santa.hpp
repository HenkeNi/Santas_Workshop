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
#include <string>

namespace santas_workshop {


// Maybe singleton (Only One santa??)
class Santa : public Creature
{
private:
    
    
public:
    Santa(const std::string &name, int age)
        : Creature{ name, age }
    {
    }
    
    virtual void printObject(std::ostream &out) const override;
        
    friend std::ostream& operator<<(std::ostream &out, const Santa &santa);
    
};

}

#endif /* Santa_hpp */
