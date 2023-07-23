#include <iostream>
#include <Elevator.h>
using namespace std;

int main(int argc, char **argv){
	setlocale(LC_ALL, "");

	Elevator elevator;
	
	elevator.defaultValues();
	elevator.howÑurrentStatus();

	//cin >> elevator.changToFloor;
}