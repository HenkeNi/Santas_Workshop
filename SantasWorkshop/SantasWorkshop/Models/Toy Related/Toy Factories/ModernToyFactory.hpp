//
//  ModernToyFactory.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-14.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef ModernToyFactory_hpp
#define ModernToyFactory_hpp

#include "Car.hpp"
#include "IToyFactory.hpp"
#include "Soldier.hpp"
#include <stdio.h>


namespace santas_workshop {

class ModernToyFactory : public IToyFactory
{
public:
    virtual Car* createToyCar() const override;
    virtual Soldier* createToySoldier() const override;
};

}

#endif /* ModernToyFactory_hpp */
