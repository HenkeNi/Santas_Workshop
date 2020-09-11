//
//  Creature.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-11.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Creature_hpp
#define Creature_hpp

#include <stdio.h>
#include <string>

namespace santas_workshop {

// Abstract base class
class Creature
{
private:
    std::string m_name;
    int m_age;
    
public:
    Creature(const std::string &name, int age)
        : m_name{ name }, m_age{ age }
    {
    }
    
    virtual const std::string& getName() const = 0; // pure virtual function (makes class abstract)
    virtual int getAge() const = 0;                 // pure virtual function
    
    
};


}

#endif /* Creature_hpp */
