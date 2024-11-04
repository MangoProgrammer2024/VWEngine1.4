//enginesurfaceflags.h
#ifndef ENGINESURFACEFLAGS_H
#define ENGINESURFACEFLAGS_H

#define CLIP(ENGINESURFACEFLAGS_H) 000x000
#define CLIP_PLAYER(ENGINESURFACEFLAGS_H) 000x001
#define CLIP_MONSTER(ENGINESURFACEFLAGS_H) 000x002
#define CLIP_MISSLE(ENGINESURFACEFLAGS_H) 000x003
#define CLIP_SURFACE_TYPE(ENGINESURFACEFLAGS_H) 000x004
#define CLIP_SOUND(ENGINESURFACEFLAGS_H) 000x005
#define VOLUME_SURFACE(ENGINESURFACEFLAGS_H) 000x006
#define TRANSVERSE_SURFACE(ENGINESURFACEFLAGS_H) 000x007
#define TRIGGER_SURFACE(ENGINESURFACEFLAGS_H) 000x008
#define MANTLE_SURFACE(ENGINESURFACEFLAGS_H) 000x009
#define LIQUID_SURFACE(ENGINESURFACEFLAGS_H) 000x010
#define LADDER_SURFACE(ENGINESURFACEFLAGS_H) 000x011
#define PORTAL_SURFACE(ENGINESURFACEFLAGS_H) 000x012
#define DEFAULT_SURFACE(ENGINESURFACEFLAGS_H) 000x013
#define CAULK_SURFACE(ENGINESURFACEFLAGS_H) 000x014
#define CAULK_MISC_SURFACE(ENGINESURFACEFLAGS_H) 000x015

struct vwengine_vSurfaceFlags{

 int ClipSurfaceFlags = 100; 
 int ClipPlayerSurfaceFlags = 101; 
 int ClipMonsterSurfaceFlags = 102;
 int ClipMissleSurfaceFlags = 103; 
 int ClipSurfaceTypeFlags == NULL; 
 int ClipSoundSurfaceFlags = 104;
 int VolumeSurfaceFlags = 105; 
 int TransverseSurfaceFlags = 106; 
 int TriggerSurfaceFlags = 107; 
 int MantleSurfaceFlaga = 108; int LiquidSurfaceFlags = 109; int LadderSurfaceFlags = 110;
 int PortalSurfaceFlags = 111; int DefaultSurfaceFlags = 112; int CaulkSurface = 113;
 int CaulkMiscSurfaceFlags = 114;

  bool vSurfaceTransparentFlags(vwengine_vSurfaceFlags * vflags){
   float alpha_value;
     float vsurfaceAlpha = alpha_value;
      const char * vShaderName;
       if( vShaderName == ENGINESURFACEFLAGS_H )
        {
          vflags_function.FUNCTIONGROUPSURFACE(vShaderName);
        }
  };




};

#endif
