#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"




#define dir "/usr/local/share/samples/trumpet/"
#define base "iowa_"


/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "drums";
char *PROGRAM_VERSION = "0.01";

static int last = 0;


int main()
    {
    int instrument;
    int octave = 2;

    songInit();
    //setMode(IONIAN);
    //setKey(C);
    instrument = readScale(dir,base);

    setTempo(180);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.75);
    setAmplitude(0.1);
    int i;
    openOutput("drums.rra",0,0);
    int spot;
    
    for(i = 0; i < 10; i++){
    //drumkitStick(1,1,"xxxx",(char *) 0); //Drumsticks hitting each other
    spot = getLocation();
    //drumkitKick   (1,5,"xx",(char *) 0); //setLocation(spot);
    //drumkitSnare  (1,1,"x-x",(char *) 0); setLocation(spot);
    //drumkitHHPedal(1,5,"x-",(char *) 0); //setLocation(spot);
    //drumkitRim    (1,1,"---x-----x-----x",(char *) 0); setLocation(spot);
    //drumkitTomHi  (1,1,"x---x-----x---x-",(char *) 0); setLocation(spot);
    //drumkitTom    (1,1,"-------x--------",(char *) 0); setLocation(spot);
    //drumkitTomLo  (1,1,"-x------x--x----",(char *) 0); 
        drumkitHHClosed(5,1, "x--x-x--x-x--x-x--x-", (char *) 0); setLocation(spot);
        drumkitKick   (5,3,"x-------x-----x-",(char *) 0); //setLocation(spot);
        //drumkitSnare   (5,1,"---x-------x----",(char *) 0); 
}
    //drumkitHHPedal(10,1,"xxxx",(char *) 0);

    closeOutput();

    return 0;
    }
