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

void Elevator::how�urrentStatus(){
	std::cout << "������ ����: " << lowerFloor << std::endl;
	std::cout << "������� ����: " << upperFloor << std::endl;
	std::cout << "������� �����: " << outPower << std::endl;
	std::cout << "��������� �����: " << inStatus << std::endl;
	std::cout << "�� ����� ���� ����� �������������: " << floorNow;


}

