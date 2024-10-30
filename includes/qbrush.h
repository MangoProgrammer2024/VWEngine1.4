//qbrush.h
#ifndef QBRUSH_H
#define QBRUSH_H

typedef class qbrush{
public:

  int qNumberid = 0;

    qbrush();
      ~qbrush();

  enum qb_primit_mode{ brush_free_mode = 0, brush_lock_mode = 1, brush_save_mode = 2 };

    typedef bool qboolean;

    qboolean qbCheckMode(qbrush brush);  qboolean qbCheck_BrushVariable(qbrush * qVariable);
      const char * qb_GlobalBrushName(qbrush * current_qbrush)const;

      //brushpoints
      qbrush * brushpoints( int qbPoints[8] );
      //allocate brush size
      void qbrush_Alloc(std::size_t * qbrushSize);
      //brush epair mode
      qbrush * qepair(qbrush * q, const char * key, const char * value);
      //split brush
      void split_brush(qbrush * q, int addPoints, qboolean qSplitfaces); 
      //add brush to table
      void brush_AddToQTable(qbrush * current_qbrush, qbrushtable qtable);
        //create brush
        qboolean CreateBrush(qbrush brush);
        //draw brush to grid
        virtual void Brush_DrawToGrid(qbrush * current_brush);

};

typedef struct qbrushtable{
  typedef void QTABLE_DESCRIPTOR;
  int iNumber;

    QTABLE_DESCRIPTOR Save_ItemToTable();
    QTABLE_DESCRIPTOR Create_TableList(qbrushtable * table, const char * name, int MAX_ITEMS_NUM[]);

};

#endif
