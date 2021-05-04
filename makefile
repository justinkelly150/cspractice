$(CXX) = g++ -std=c++11

area: main.o menu.o triangle.o rectangle.o circle.o
	$(CXX) -o area main.cpp menu.cpp triangle.cpp rectangle.cpp circle.cpp

main.o: main.cpp
	$(CXX) -c main.cpp

menu.o: menu.cpp menu.h
	$(CXX) -c menu.cpp

triangle.o: triangle.cpp triangle.h
	$(CXX) -c triangle.cpp

rectangle.o: rectangle.cpp rectangle.h
	$(CXX) -c rectangle.cpp

circle.o: circle.cpp circle.h
	$(CXX) -c circle.cpp

clean:
	rm *.o area