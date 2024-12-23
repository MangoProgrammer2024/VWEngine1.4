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

/*   
GLOBALS -> GLOBAL BRUSH CHARACTERS USED THROUGHOUT BRUSH.CPP -> WE'LL USE -> brush_m, brush_t, m
FREE_MODE -> PLANE FREE MODE -> PLANE ISNT SELECTED
ALLOC_MODE -> GIVES BRUSH DATA AS ALLOC 
WINDING -> WINDING PLANES, VECTORS, AND FACES TOGETHER -> THROUGH NUMBERPOINTS EX: numpoints->[i][1]
PLANES -> AKA FACES THERE SHOULD BE 6 PLANES TO MAKE A CUBED BRUSH, YOU MUST PRINT THESE :)
VECTORS -> VECTORS ARE POINTS THERE SHOULD BE 8 VECTOR POINTS THEY ALOW FACES TO PRINT INSIDE VECTORS SO PLANES ARENT SCATTERED
TEXTURE_COORDINATES -> TEXTURE COORDINATES FOR THE BRUSHES PLANES -> BASICALLY HOW THE TEXTURE WILL BE PLACED ON THE FACE
SET_SHADED_PLANES -> ADDS SHADERS TO PLANES SO THEY CAN HAVE LIGHTING AND BE SHADED (*VERY IMPORTANT WITH OUT THIS TEXTURES WONT APPEAR*)
FACE_ALLOC -> GIVES FACE DATA AS ALLOC
FACE_FREE -> SAME THING AS FREE_MODE
FACE_CLONE -> FACE CLONE DATA
FACE_FULL_CLONE -> FACE CLONE DATA AND PASTES IT
CLAMP -> CLAMP FACES TOGETHER(*ONLY USE IF BRUSHES FACES ARENT CONNECTED LIKE THEY SHOULD BE)
FACE_MOVE_TEXTURE -> ALLOWS MOVING TEXTURE ON THE FACE OF THE BRUSH
FACE_SET_COLOR -> SETS A COLOR TO BRUSH FACE IF NO TEXTURE APPLIED(*WHICH SHOULD BE IMPOSSIBLE, TEXTURES SHOULD ALWAYS BE APPLIED AUTOMATICALLY*)
FACE_TEXTURE_VECTORS -> THIS CODE SECTION IS HONESTLY KIND OF STUPID AND IS POINTLESS(*THIS CODE SECTION IS ONLY IMPORTANT IF YOU WANT FLOAT TEXTURES*)
FACE_MAKE_PLANE -> THIS CODE SECTION CAN BE USED ONLY WHEN A FACE CREATION ON A BRUSH IS FAILED SO IT JUST PRINT AN ENTIRE WHOLE NEW PLANE (*HELPFUL*) :)
EMITED_TEXTURE_COORDINATES -> USED TO COMBINE TEXTURE COORDINATES(*RARELY WILL WE USE THIS*)
BRUSH_MAKE_FACE_PLANES -> THIS CODE SECTION IS NOT AS IT SEEMS -> ITS MAIN PURPOSE IS TO MAKE FACES AND PLANES INSIDE OUT(*ONLY USED IN BRUSH_CUSTOM.CPP*)
DRAW_BRUSH_ENTITY_NAME -> GIVES THE BRUSH WORLDS ENTITIES NAME WHEN CREATED
BRUSH_MAKE_FACE_WINDING -> THIS CODE SECTION MAKES ALL FACES AND VECTORS WIND TOGETHER(*THIS CODE SECTION IS VERY IMPORTANT WITHOUT IT BRUSH WONT BE PROPER*)
BRUSH_SNAP_PLANE_PTS -> THIS CODE SECTION ALLOWS MULTIPLE POINTS TO BE CREATED TO MAKE NON LINEAR BRUSHES
BRUSH_SPLIT_BRUSH_BY_FACE -> SPLITS BRUSH FACE INTO TWO PARTS(*THIS IS USED DURNING THE BRUSH SPLIT TOOL IN TOOLBAR*)
BRUSH_BEST_SPLIT_FACE -> SPLITS BRUSH FACE INTO 4 PARTS(*THIS IS USED DURING BRUSH QUAD TOOL IN TOOLBAR*)
BRUSH_ONE_SELECT -> KEYS BINDS THAT ALLOWS YOU TO SELECT ONE FACE OF THE BRUSH
BRUSH_ALL_SELECT -> KEY BINDS TO SELECT FULL BRUSH
BRUSH_CLONE -> CLONES FULL BRUSH
BRUSH_FREE_MODE -> BRUSH ISNT IN PRIMIT MODE(AKA NOT SELECTED)
BRUSH_RESET_ORIGINAL -> UNDOS ANY CHANGES TO BRUSH AND RESETS IT TO NORMAL
BRUSH_MAKE_CONVEX_BRUSH -> MAKES BRUSH A TRIANGLE
BRUSH_CREATE_SOLID_DRAW -> MAKES BRUSH A SOLID WALL IN THE WORLD
BRUSH_NON_CREATE_NON_SOLID -> MAKE BRUSH A NON SOLID WALL AND IS EASY TO FALL THROUGH(AKA NO COLLISION)
BRUSH_DATA_STORE_AS_FORMAT -> (BSP), WE'LL USE -> (BMD) BMD -> DEF: BRUSH MAP DATA
*/

  
qbrush * GLOBALS();
qbrush * FREE_MODE();
qbrush * ALLOC_MODE();
qbrush * WINDING();
qbrush * PLANES();
qbrush * VECTORS(); 
qbrush * TEXTURE_COORDINATES(); 
qbrush * SET_SHADED_PLANES();
qbrush * FACE_ALLOC();
qbrush * FACE_FREE();
qbrush * FACE_CLONE();
qbrush * FACE_FULL_CLONE();//discard
qbrush * CLAMP();
qbrush * FACE_MOVE_TEXTURE();
qbrush * FACE_SET_COLOR();//discard
qbrush * FACE_TEXTURE_VECTORS();//discard
qbrush * FACE_MAKE_PLANE();//discard
qbrush * EMITED_TEXTURE_COORDINATES();
qbrush * BRUSH_MAKE_FACE_PLANES();//discard
qbrush * DRAW_BRUSH_ENTITY_NAME();
qbrush * BRUSH_MAKE_FACE_WINDING();//discard
qbrush * BRUSH_SNAP_PLANE_PTS();//discard
qbrush * BRUSH_SPLIT_BRUSH_BY_FACE();
qbrush * BRUSH_BEST_SPLIT_FACE();//discard
qbrush * BRUSH_ONE_SELECT();//discard
qbrush * BRUSH_ALL_SELECT();//discard
qbrush * BRUSH_CLONE();
qbrush * BRUSH_FREE_MODE();//discard
qbrush * BRUSH_RESET_ORIGINAL();//modified
qbrush * BRUSH_MAKE_CONVEX_BRUSH();//discard
qbrush * BRUSH_CREATE_SOLID_DRAW();//discard
qbrush * BRUSH_NON_CREATE_NON_SOLID();//discard
qbrush * BRUSH_DATA_STORE_AS_FORMAT();//modified

 void Globals(qbrush * variable, int qGVariable);
 void FreeMode(qbrush * free, bool b_free);
 void AllocMode(qbrush * alloc);
 void BrushWinding(qbrush * current_brush, qwinding * winding);
 void BrushPlanes(qplane * plane, qbrush * current_brush);
 void BrushVectors(vec_t * v[], qbrush * vbrush);
 void BrushTexcoords(qbrush * current_brush, float texcoords[]);
 void Set_BrushShadedPlane(qbrush * current, qplane * plane, float planenums[], bool setShade);
 void Brush_FaceAlloc(qbrush * current, qface * face, bool alloc);
 void Brush_FaceFree(qbrush * current, qface * face, bool free_mode);
 void Brush_FaceClone(qbrush * current, qface * face, qface * copy_face);
 void BrushClamp(qbrush * current, qface * fc, * fs, * ff, bool clamp, float cPoints[]);
 void Brush_FaceMoveTexture(qbrush * current, qface * face, qshader * shader, * face_shader(qface * current));
 void Brush_EntityName(qbrush * current, qepair * epair);
 void Brush_SplitByFace(qbrush * current, qface * current_face, int split, int newPoint[]);
 void BrushClone(qbrush * current, qbrush * clone_brush);
 void BrushPrevious(qbrush * current, * previous);
 void Brush_SaveToken(qbrush * current, bool q_gGlobalSavedFile, token * brush_token);

};

typedef struct qbrushtable{
  typedef void QTABLE_DESCRIPTOR;
  int iNumber;

    QTABLE_DESCRIPTOR Save_ItemToTable(const char * qt_gGlobalTableName);
    QTABLE_DESCRIPTOR Create_TableList(qbrushtable * table, const char * name, int MAX_ITEMS_NUM[]);

};

#endif
