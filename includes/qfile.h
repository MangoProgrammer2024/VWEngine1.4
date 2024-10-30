//qfile.h
#pragma once
#ifndef QFILE_H
#define QFILE_H

typedef struct qfile{
  //file name 
  const char * qFilename(qfile * file)const;
    //file contents
    void file_token(qfile * file, const char * qFilename, const char * text);
    //file parser
    void file_parser(qfile * filecontents, const char * filetext);
    //open file
    void file_open(qfile * file, bool open, const char * qFilename);
    //save file
    void save_file(qfile& file, bool save, const char * qFilename, static char fileBuffer[1024]);
};

#endif
