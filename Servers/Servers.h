//Servers.h
#ifndef SERVERS_H
#define SERVERS_H

namespace ServerCodepost{
//server string cstring
typedef std::string CString;
 //server class socket
 class Socket{
  public:
   //cstring new socketname
   ServerCodepost::CString socketname[];
    //create new socket
    Socket * CreateSocket(Socket * socket, ServerCodepost::CString socketName[socketname]){
      Socket socket = new Socket;
    };

    

 };





};


#endif
