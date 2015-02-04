#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"


#define dir "/usr/local/share/samples/bass-acoustic/"
#define base "adrian-pluck_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "quickstart";
char *PROGRAM_VERSION = "0.01";

static int last = 0;


int main()
    {
    int instrument;
    int octave = 2;

    songInit();
    setMode(IONIAN);
    setKey(A);
    instrument = readScale(dir,base);

    setTempo(240);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.75);
    setAmplitude(0.3);
    int i;
    openOutput("quickstart.rra",0,0);

    for (i = 0; i < 2; ++i)
    {
        c(1,W,instrument, octave);
        c(6, W, instrument, octave-1);
        c(2, W, instrument, octave-1);
        ci2(5, H, instrument, octave -1);
        

        c(2, Q, instrument, octave-1);
        c(3, Q, instrument, octave-1);
        c(4, Q, instrument, octave-1);

    }
    //cpower2(1,H,instrument, 1);

    ci2(5, W, instrument, octave -1);
    c(1,W,instrument, octave);
    ci2(5, W, instrument, octave -1);

setSustain(0.1);
    for( i = 0; i < 2; ++i)
    {
        c(6, W, instrument, octave-1);
        c(6, W, instrument, octave-1);
        c(2, H, instrument, octave);
        //rest(Q);

        ci2(5, H, instrument, octave -1);
        ci2(5, H, instrument, octave -1);
        ci2(5, H, instrument, octave -1);
        //rest(Q);
    }
    cpower2(1,H,instrument, 1);
    /*b(1,W,instrument, octave, "x-x","---", "---","-xx",SX);
    b(6, W, instrument, octave-1,"x--", "x-x", "--x", SX);
    ci2(4, W, instrument, octave-1);
    ci2(5, W, instrument, octave -1);
*/
    closeOutput();

    return 0;
    }
