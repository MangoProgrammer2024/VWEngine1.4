//qfile.h
#pragma once
#ifndef QFILE_H
#define QFILE_H

typedef struct qfile{
  //file size 
  std::size_t * qFileSize;
  //malloc file size
  qfile * q = (qfile*)malloc(sizeof(qfile));
  //file name 
  const char * qFilename(qfile * file)const;
    //file contents
    /*------file to is the files content------*/
    void file_token(qfile * file, const char * qFilename, const char * text);
    //file parser
    /*------file parser is the files text------*/
    void file_parser(qfile * filecontents, const char * filetext);
    //open file
    /*------opens file with the current name------*/
    void file_open(qfile * file, bool open, const char * qFilename);
    //save file
    /*------saves file with the current name------*/
    void save_file(qfile& file, bool save, const char * qFilename, static char fileBuffer[1024]);
    //cut file
    /*------cuts a file from a directory------*/
    void cut_file(qfile * fcut, bool remove_current, const char * qFilename, std::string * qfCurrentDirectory);
    //append dir file
    /*------takes a cut file from a directory and puts it in a new directory------*/
    typedef qfboolean;
     virtual qfboolean append_dir_file(qfile& qfCutFile, const char * qFilename, std::string * qfNewDirectory);
   //create a file extension type
   /*------creates a new file extension format------*/
   void create_qfExtension(const char * extension);
   //flush
   /*------flushes current file------*/
   template<qf_gGlobalFlush>
    qf_gGlobalFlush gb_qBoolFlush(qfboolean);
     void Flush(qfile * qf_current, qfboolean flushable, const char * qFilename)
     //global file size
     /*------gets the size of the current global file------*/
     void qf_gGlobalFileSize(qfile * qfs, qfboolean qf_gGetSize, const char * qFilename, std::size_t * qFileSize);
};

#endif
