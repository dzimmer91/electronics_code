
CXX	:= c++
CXXFLAGS := -g -Iinclude

OBJECTS	:= pol_rec_conversion.o libpol_rec_conversionc.a #main.o

all: deps/pol_rec_conversion.o bin/pol_rec_conversion

#my_program: $(OBJECTS)
#	$(CXX) $(OBJECTS) -o my_program

deps/pol_rec_conversion.o: src/pol_rec_conversion.cpp include/pol_rec.h
	$(CXX) $(INCLUDES) $(CXXFLAGS) -c src/pol_rec_conversion.cpp -o deps/pol_rec_conversion.o
	ar rcs lib/libpol_rec_conversionc.a deps/pol_rec_conversion.o

bin/pol_rec_conversion: mains/main.cpp include/pol_rec.h lib/libpol_rec_conversionc.a
		$(CXX) $(INCLUDES) $(CXXFLAGS) mains/main.cpp -o bin/pol_rec_conversion lib/libpol_rec_conversionc.a

#main.o: main.cpp
#	$(CXX) $(INCLUDES) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm deps/*.o
	rm lib/*.a
	rm bin/*
