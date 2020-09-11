//
//  Toy.hpp
//  SantasWorkshop
//
//  Created by Henrik Jangefelt on 2020-09-11.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Toy_hpp
#define Toy_hpp

#include <stdio.h>
#include <string>

namespace santas_workshop {

class Toy
{
private:
    std::string m_name;
    int m_manufacturingTimeInDays;
    int m_id;
    static int s_idGenerator;
    
public:
    Toy(const std::string &name, int time)
        : m_name{ name }, m_manufacturingTimeInDays{ time }, m_id{ s_idGenerator++ }
    {
    }
    
    
    const std::string& getName() const { return m_name; }
    int getId() const { return m_id; }
    int getManufacturingTime() const { return m_manufacturingTimeInDays; }
};

}

#endif /* Toy_hpp */
