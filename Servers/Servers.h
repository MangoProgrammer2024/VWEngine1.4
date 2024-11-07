//Servers.h
#ifndef SERVERS_H
#define SERVERS_H

#define SERVER_SOCKET 100

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

     virtual void ServerMsg(Socket socket, ServerCodepost::CString msg);
     void ConnetPlayer(player_mp_info mp, ServerCodepost::CString node);

    

 };





};


#endif
