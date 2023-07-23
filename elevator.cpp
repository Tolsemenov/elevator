#include <iostream>


#include <Elevator.h>

Elevator::Elevator(){

}


Elevator::~Elevator(){
	
	
}

void Elevator::defaultValues() {
	lowerFloor = 1;
	upperFloor = 10;
	outPower = true;
	inStatus = true;
	floorNow = 5;
}

void Elevator::howСurrentStatus(){
	std::cout << "Нижний этаж: " << lowerFloor << std::endl;
	std::cout << "Верхний этаж: " << upperFloor << std::endl;
	std::cout << "Питание лифта: " << outPower << std::endl;
	std::cout << "Состояние лифта: " << inStatus << std::endl;
	std::cout << "На какой этаж нужно переместиться: " << floorNow;


}

