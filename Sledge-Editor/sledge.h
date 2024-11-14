/*
 sledge.h create application entry and gets its contents
*/
#pragma once
#ifndef SLEDGE_H
#define SLEDGE_H

 namespace __sledge_exe__{

   int __sledge__entry__id__ = 0;

    const char * texture_browser_directory = "C:\\" const;
    const char * game_directory = "C:\\" const;
    const char * smtools_directory = "C:\\" const;

    const char * __editor_entity_contextmenu_deffile__ = "WaF.def" const;

    const void Def_Entity_Directory(__sledge_exe__ ** g_nbGlobalFind){
        if(!g_nbGlobalFind->smtools_directory == NULL)
         {
          sledge_message.printMessage = "Cant load STools.dll ERROR: 00011x1x1111";
          return NULL;
         }

        if(!g_nbGlobalFind->texture_browser_directory == NULL)
        {
          sledge_message.printMessage = "Cant find textures for sledge.exe";
          return NULL;
        }

        if(!g_nbGlobalFind->game_directory == NULL)
        {
          sledge_message.printMessage = "Cant load game directory";
          sledge.terminate = true;
          return NULL;
        }
     
    }const;

     class g_nbGlobalTextureFilters;

 };


#endif

