#include <iostream>


#include <Elevator.h>

Elevator::Elevator(){

}


Elevator::~Elevator(){
	
	
}

void Elevator::defaultValues() {
	lowerFloor = 1;
	upperFloor = 10;
	outPower = 1;
	inStatus = 1;
	floorNow = 5;
}

void Elevator::howСurrentStatus(){
	std::cout << "Нижний этаж: " << lowerFloor;
	std::cout << "Верхний этаж: " << upperFloor;
	std::cout << "Питание лифта: " << outPower;
	std::cout << "Состояние лифта: " << inStatus;
	std::cout << "На какой этаж нужно переместиться: " << floorNow;


}

