#Place the names of all your tracks here (as RRA filenames)

RRA = drums.rra quickstart.rra
INCLUDE=/usr/local/include/songlib/
LIB=/usr/local/lib/



all : $(RRA)

%.rra	: %.x
		./$<

%.x	: %.c
		gcc -Wall -g -o $@ -I$(INCLUDE) $< -L$(LIB) -lsong -lm 

mix.rra		: $(RRA)
		rrafastmixer $(RRA) > mix.rra

playmix : mix.rra
		rplay mix.rra

play	: $(RRA)
		rplay $(RRA)


.PHONY : clean

clean :
		rm -f $(RRA) $(SRRA) master.rra mix.rra master.mp3
