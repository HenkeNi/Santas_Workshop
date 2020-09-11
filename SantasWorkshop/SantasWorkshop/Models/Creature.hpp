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
    
    // virtual destructor (needed for the compiler to be able to call any derived classes destructor)
    virtual ~Creature()
    {
    }
    
    
    const std::string& getName() const { return m_name; }
    int getAge() const { return m_age; }
    
    virtual void printObject(std::ostream &out) const = 0; // pure virtual function (makes class abstract)
        
    friend std::ostream& operator<<(std::ostream &out, const Creature &creature);
};


}

#endif /* Creature_hpp */
