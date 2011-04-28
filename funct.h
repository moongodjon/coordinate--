class object
{  char* msg;
 public:
   int  x,
        y,
        solid;

   char ch;
   bool poke();
}

class player : public object
{  char[2] keyup,
           keydown,
           keyleft,
           keyright,
           keymenu,
           keyhelp;
 public:
   void TakeAction();
}

class room
{  int   Nlevers, //Nx=Number of x
         Ncrates,
         Nbuttons,
         Nplayers;

   room* nroom,
         sroom,
         eroom,
         wroom,
         uroom,
         droom;
//   lever*  lvr;
//   crate*  crt;
//   button* btn;
   player* ply;
 public:
   void addlvr(lever);
   void addcrt(crate);
   void addbtn(button);
   void addply(player);
   bool poke(int x,int y,object poker); //should always be called from an object with poker=self
}

class world //? do I need this?, maybe.
{  int Nlevels;
   level* lv;
 public:
   poke();
}
//... break

class object
{
 public:
   object(char chA='.',char* msgA="")
   {
      ch=chA;
      msg=msgA;
   }
   char ch;
   char* msg;
   bool solid=0;
   bool poke()
   {  smsg(msg);
      return solid;
   }
}

class lever : public object
{
 public:
   lever(char chA='.',char* msgA="") 
   : object(chA,msgA)
   {sw=0;}

   int sw;
}
class tile
public: everything
{
...
}map[100][19][19];
