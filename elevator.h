class Elevator {
private:
	int lowerFloor;
	int upperFloor;
	bool outPower;
	bool inStatus;
	int floorNow;
	int changToFloor;



public:
	Elevator();
	~Elevator();

	void defaultValues();
	void how—urrentStatus();
};