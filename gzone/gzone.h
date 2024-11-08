//gzone.h
#pragma once 
#ifndef GZONE_H
#define GZONE_H

template<typename _zone>
typedef struct gzone{
typedef bool zoneboolean;
//zone size integer
int gz_ZoneSize;
  //enum zone type
  enum gzZoneType{
    GZ_SPAWNER_ZONE = 0,
    GZ_EFFECTS_ZONE = 1,
    GZ_LIGHT_ZONE = 2
  };

    //if zone bool
    zoneboolean zone_on();
    zoneboolean zone_off();

  std::string zoneName();

    void getZone(std::string zoneKey, std::string zoneValue, std::string zoneInfo);

};



#endif
