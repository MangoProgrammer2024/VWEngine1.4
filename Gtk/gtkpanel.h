//gtkpanel.h 
#ifndef GTKPANEL_H
#define GTKPANEL_H

#include <gtk/gtk.h>

 GtkWidget * gtkframe(const char* domain);

  virtual void gtkframeChild(GtkFrame * frame, GtkWidget * child);
   GtkWidget * getChild(GtkFrame * frame);
    struct GtkFrameSledge{
     GtkFrame frameParent;

      void __stdcall framealloc(*frameMalloc);

    };



#endif
