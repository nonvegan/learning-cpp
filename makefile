distance: distanceTwoPoints.o functions.o
	g++ distanceTwoPoints.o functions.o -o distance

distanceTwoPoints.o: distanceTwoPoints.cpp
	g++ -c distanceTwoPoints.cpp

functions.o: functions.cpp
	g++ -c functions.cpp

clean :
	rm *.o distance


