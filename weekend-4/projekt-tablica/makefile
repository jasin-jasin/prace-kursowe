# cel: wymagania
#	polecenia prowadzące do stworzenia celu.
#
# domyślnie uruchamiany jest pierwszy cel pliku
#
# a:
#	echo aaaaaa
#	
# b:
#
#	echo bbbbbbbb

# w makefile można korzystać ze zmiennych!! Makefile cheats
#
# https://devhints.io/makefile
#
# FILES=main.o tablica.o
# program: $(FILES)
#	g++ $^ -o $@
# %.o : %.cpp
# g++ $^ -c


all: program

program: main.o tablica.o
	g++ main.o tablica.o -o program
	
main.o: main.cpp
	g++ main.cpp -c
	
tablica.o: tablica.cpp
	g++ tablica.cpp -c
	
# flaga -o jaka nazwa pliku wynikowego zamiast standardowej

clean :
	rm -f program $(FILES)
	
rebuild: 
	make clean
	make all
	
.PHONY : clean all rebuild
# clean jest psuedocelem
# cele instrukcje oznaczone jako .PHONY wykonają się zawsze
