P3.out : Project3.o SetLimits.o LexicalAnalyzer.o SyntacticalAnalyzer.o
	g++ -g -o P3.out Project3.o SetLimits.o LexicalAnalyzer.o SyntacticalAnalyzer.o

Project3.o : Project3.cpp SetLimits.h SyntacticalAnalyzer.h
	g++ -g -c Project3.cpp

SetLimits.o : SetLimits.cpp SetLimits.h
	g++ -g -c SetLimits.cpp

LexicalAnalyzer.o : LexicalAnalyzer.save
	cp LexicalAnalyzer.save LexicalAnalyzer.o

SyntacticalAnalyzer.o : SyntacticalAnalyzer.cpp SyntacticalAnalyzer.h LexicalAnalyzer.h
	g++ -g -c SyntacticalAnalyzer.cpp

run : P3.out test.ss
	./P3.out 2newTest.ss

clean : 
	rm *.o P3.out *.dbg *.lst *.p2 *.p1

submit : Project3.cpp LexicalAnalyzer.h LexicalAnalyzer.save SyntacticalAnalyzer.h SyntacticalAnalyzer.cpp makefile README.txt
	rm -rf TeamGP3
	mkdir TeamGP3
	cp Project3.cpp TeamGP3
	cp LexicalAnalyzer.h TeamGP3
	cp LexicalAnalyzer.save TeamGP3
	cp SyntacticalAnalyzer.h TeamGP3
	cp SyntacticalAnalyzer.cpp TeamGP3
	cp makefile TeamGP3
	cp README.txt TeamGP3
	tar cfvz TeamGP3.tgz TeamGP3
	cp TeamGP3.tgz ~tiawatts/cs460drop
