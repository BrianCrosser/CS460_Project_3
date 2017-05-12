P3.out : Project3.o SetLimits.o LexicalAnalyzer.o SyntacticalAnalyzer.o CodeGenerator.o
	g++ -g -std=c++11 -o P3.out Project3.o SetLimits.o LexicalAnalyzer.o SyntacticalAnalyzer.o CodeGenerator.o

Project3.o : Project3.cpp SetLimits.h SyntacticalAnalyzer.h 
	g++ -g -c -std=c++11 Project3.cpp

SetLimits.o : SetLimits.cpp SetLimits.h
	g++ -g -c -std=c++11 SetLimits.cpp

LexicalAnalyzer.o : LexicalAnalyzer.save
	cp LexicalAnalyzer.save LexicalAnalyzer.o

SyntacticalAnalyzer.o : SyntacticalAnalyzer.cpp SyntacticalAnalyzer.h LexicalAnalyzer.h CodeGenerator.h
	g++ -g -c -std=c++11 SyntacticalAnalyzer.cpp

CodeGenerator.o: CodeGenerator.cpp CodeGenerator.h
	g++ -g -c -std=c++11 CodeGenerator.cpp
run : P3.out
	./P3.out testFiles/1_test.ss
	./P3.out testFiles/2_test.ss
	./P3.out testFiles/3_test.ss
	./P3.out testFiles/4_test.ss
	./P3.out testFiles/5_test.ss
	./diffs.sh

clean : 
	rm *.o P3.out ./testFiles/*.dbg ./testFiles/*.lst ./testFiles/*.p2 ./testFiles/*.p1

submit : Project3.cpp LexicalAnalyzer.h LexicalAnalyzer.save SyntacticalAnalyzer.h SyntacticalAnalyzer.cpp makefile README.txt CodeGenerator.h CodeGenerator.cpp
	rm -rf TeamGP3
	mkdir TeamGP3
	cp Project3.cpp TeamGP3
	cp LexicalAnalyzer.h TeamGP3
	cp LexicalAnalyzer.save TeamGP3
	cp SyntacticalAnalyzer.h TeamGP3
	cp SyntacticalAnalyzer.cpp TeamGP3
	cp CodeGenerator.h TeamGP3
	cp CodeGenerator.cpp TeamGP3
	cp makefile TeamGP3
	cp README.txt TeamGP3
	tar cfvz TeamGP3.tgz TeamGP3
	cp TeamGP3.tgz ~tiawatts/cs460drop
