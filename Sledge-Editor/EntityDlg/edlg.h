//edlg.h

#ifndef EDLG_H
#define EDLG_H

#include "QWidget.h"

class EntityDlg{
public:
  auto ed_ConstructDlg(QWidget * qetdlg);
    bool ed_Constructed;

protected:
  float _x; float _y;
  #define SZ_MIN 50x50
  #define SZ_MAX 100x100

public:
  int ed_PaintColor(int R[], int G[], int B[]);
  QAction * constructColor(EntityDlg dlg);
   QAction * constructDlg(EntityDlg); 

   QWidget * dlg;

    virtual void DlgPreferences(QString * name, EntityDlg dlg, const char * _TITLE, int sz_x, int sz_y);
    unsigned int ed_constructFailed; 

};

#endif
