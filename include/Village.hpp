#pragma once

#include <string>
#include <vector>
#include "Location.hpp"
#include "Npc.hpp"

class Village : public Location
{
    private:
        std::vector<Npc> npcs;

    public:
        Village(std::string name, 
            std::vector<Location*> adjacentLocations = {}, 
            std::vector<Npc> npcs = {});

        void Talk();
};