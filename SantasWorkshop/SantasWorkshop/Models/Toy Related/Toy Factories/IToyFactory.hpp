//
//  IToyFactory.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-13.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef IToyFactory_hpp
#define IToyFactory_hpp

#include "Car.hpp"
#include "Soldier.hpp"
#include <stdio.h>

namespace santas_workshop {



// Interface
class IToyFactory
{
public:
    virtual ~IToyFactory(){}
    virtual Car* createToyCar() const = 0;
    virtual Soldier* createToySoldier() const = 0;
    
};



}

#endif /* IToyFactory_hpp */
