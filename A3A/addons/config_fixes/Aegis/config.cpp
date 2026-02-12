#include "..\script_component.hpp"

class CfgPatches 
{
    class PATCHNAME(Aegis) 
    {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"Vehicles_F_lxWS", "A3_Aegis_Data_F_Aegis"};
        author = AUTHOR;
        authors[] = { AUTHORS };
        authorUrl = "";
        VERSION_CONFIG;
    };
};

// Uncomment when needed
//#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
//#include "CfgMarkers.hpp"
//#include "CfgWeapons.hpp"
