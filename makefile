

 
CFLAGS = -std=c++17 -O2
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system 
bruh: main.cc
	g++ $(CFLAGS) -o./bin/e *.cc $(LDFLAGS) 

.PHONY: test clean

test: bruh
	./bruh

clean: rm -f bruh
