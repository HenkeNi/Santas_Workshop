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

// TODO: make interface instead???

// Abstract class
class Toy
{
protected:
    std::string m_name{};
    int m_manufacturingTimeInDays{};
    int m_id{};
    static int s_idGenerator;
    
public:
    Toy(const std::string &name, int time)
        : m_name{ name }, m_manufacturingTimeInDays{ time }, m_id{ s_idGenerator++ }
    {
    }
    
    virtual ~Toy() {}
    
    int getManufacturingTime() const { return m_manufacturingTimeInDays; }
    const std::string& getName() const { return m_name; }
    int getId() const { return m_id; }
    
    virtual std::ostream& print(std::ostream &out) const = 0;
    friend std::ostream& operator<<(std::ostream &out, const Toy &toy);
};

}

#endif /* Toy_hpp */
