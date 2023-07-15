build:
	g++ rpn.cpp -o rpn
	g++ src/funcs.h
	g++ src/main.h
run:
	g++ rpn.cpp -o rpn
	g++ src/funcs.h
	g++ src/main.h
	./rpn
clean:
	g++ rpn.cpp -o rpn
	g++ src/funcs.h
	g++ src/main.h
	rm src/funcs.h.gch
	rm src/main.h.gch
	./rpn;

