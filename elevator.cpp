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

void Elevator::how�urrentStatus(){
	std::cout << "������ ����: " << lowerFloor;
	std::cout << "������� ����: " << upperFloor;
	std::cout << "������� �����: " << outPower;
	std::cout << "��������� �����: " << inStatus;
	std::cout << "�� ����� ���� ����� �������������: " << floorNow;


}

