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

     //server message function
     virtual void ServerMsg(Socket socket, ServerCodepost::CString msg);
     //connect player node
     void ConnetPlayer(player_mp_info&& mp, ServerCodepost::CString node);
      //socket failed true
      bool socketfailed(Socket * socket){
         if(!socket->sockname[0] == NULL){
          int reroute[1];
          switch(reroute[1])
            {
             case newname:
              ServerCodepost::CString name[] = "SERVER_DUMMY_REROUTE";
                 
              break;

               case newmsg:
                ServerCodepost::Cstring Msg = "Current Socket Failed! ServerCodepost Generated A New One";
                 break;
              }

           return true;
          
          }
       
      };

    

 };





};


#endif
