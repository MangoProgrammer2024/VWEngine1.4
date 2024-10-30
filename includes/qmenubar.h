//qmenubar.h
#ifndef QMENUBAR_H
#define QMENUBAR_H

#include <QWidget.h>

//create menu
QAction * construct_menu_bar(QWidget * menu, const char * menuname, int menu_items[]);
//windows menu parent
QMenu * qWinParent(QWidget * qParent);
  //possible menu items
  const char * fileitem = "File";
  const char * edititem = "Edit";
  const char * miscitem = "Misc";
  const char * textureitem = "Texture";
  const char * griditem = "Grid";
  const char * bspitem = "Bsp";
  const char * brushitem = "Brush";
  const char * patchitem = "Patch";
  const char * pluginitem = "Plugin";

#endif
