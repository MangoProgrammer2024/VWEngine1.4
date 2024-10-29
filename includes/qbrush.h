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

      qbrush * brushpoints( int qbPoints[8] );
      void qbrush_Alloc(std::size_t * qbrushSize);
      qbrush * qepair(qbrush * q, const char * key, const char * value);
      void split_brush(qbrush * q, int addPoints, qboolean qSplitfaces);
      void brush_AddToQTable(qbrush * current_qbrush, qbrushtable qtable);
        qboolean CreateBrush(qbrush brush);

        virtual void Brush_DrawToGrid(qbrush * current_brush);
};

typedef struct qbrushtable{


};

#endif
