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
    int octave = 3;

    songInit();
    setMode(IONIAN);
    setKey(A);
    instrument = readScale(dir,base);

    setTempo(180);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.75);
    setAmplitude(0.1);
    int i;
    openOutput("quickstart.rra",0,0);


    /*c(1,W, instrument, octave);
    c(6, W, instrument, octave-1);
    ci2(4, W, instrument, octave-1);
    ci2(5, W, instrument, octave -1);

    c(2,W, instrument, octave);
    c(6, W, instrument, octave-1);
    ci2(4, W, instrument, octave-1);
    ci2(5, W, instrument, octave -1);
*/
    
    for(i = 0; i < 20; i++){
    chord(Q,instrument,octave-1, C, 0);
    chord(Q,instrument,octave-1, D, 0);
    chord(Q,instrument,octave-1, F, 0);
    chord(Q,instrument,octave-1, G, 0);

    chord(Q,instrument,octave-1, A, 0);
    chord(Q,instrument,octave-1, G, 0);
    chord(Q,instrument,octave-1, F, 0);
    chord(Q,instrument,octave-1, D, 0);

    chord(Q,instrument,octave-1, F, 0);
    chord(Q,instrument,octave-1, A, 0);
    chord(Q,instrument,octave, C, 0);
    chord(Q,instrument,octave, D, 0);

    chord(Q,instrument,octave, F, 0);
    chord(Q,instrument,octave, D, 0);
    chord(Q,instrument,octave, C, 0);
    chord(Q,instrument,octave-1, A, 0);
}   



    //newline

    /*chord(Q,instrument,octave-1, F, 0);
    chord(Q,instrument,octave-1, A, 0);
    chord(Q,instrument,octave, C, 0);
    chord(Q,instrument,octave, D, 0);

    chord(Q,instrument,octave, F, 0);
    chord(Q,instrument,octave, D, 0);
    chord(Q,instrument,octave, C, 0);
    chord(Q,instrument,octave-1, A, 0);
/*
    chord(Q,instrument,octave-1, F, 0);
    chord(Q,instrument,octave-1, A, 0);
    chord(Q,instrument,octave, C, 0);
    chord(Q,instrument,octave, D, 0);

    //newline

    chord(Q,instrument,octave-1, F, 0);
    chord(Q,instrument,octave-1, A, 0);
    chord(Q,instrument,octave, C, 0);
    chord(Q,instrument,octave, D, 0);

    /*chord(1,instrument,octave, 3, 0);
    chord(1,instrument,octave, 5, 0);

    chord(1,instrument,octave, 3, 0);
    chord(1,instrument,octave-1, 5, 0);
    chord(1,instrument,octave-1, 3, 0);
    chord(1,instrument,octave-1, 5, 0);

    chord(1,instrument,octave-1, 3, 0);
    chord(1,instrument,octave, 3, 0);
    chord(1,instrument,octave, 5, 0);
    chord(1,instrument,octave, 3, 0);
    /*
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
*/
    /*for( i = 0; i < 2; ++i)
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
    cpower2(1,H,instrument, 1);*/
    /*b(1,W,instrument, octave, "x-x","---", "---","-xx",SX);
    b(6, W, instrument, octave-1,"x--", "x-x", "--x", SX);
    ci2(4, W, instrument, octave-1);
    ci2(5, W, instrument, octave -1);
*/
    closeOutput();

    return 0;
    }
