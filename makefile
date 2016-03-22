main: main.o BMI.o
	g++ main.o BMI.o -o main
main.o: main.cpp BMI.h
	g++ -c main.cpp
BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp
clean:
	rm main *.o BMI *.o
