#include <iostream>

using namespace std;

class MobilePhone {
protected:
	bool TurnOnBtn;
	bool CanCall;
public:
	virtual void Characteristic() = 0;
	virtual void Behavior() {
		cout << "Has turn on button " << TurnOnBtn << endl;
		cout << "Can call " << CanCall << endl;
	}
};

class SmartPhone : public MobilePhone {
public:
	SmartPhone() {
		TurnOnBtn = true;
		CanCall = true;
	}

	void Characteristic() override {
		cout << "Sensory screen" << endl;
	}
	void Behavior() override {
		cout << "Play videogames" << endl;
		MobilePhone::Behavior();
	}
};

class CameraPhone : public MobilePhone {
public:
	CameraPhone() {
		TurnOnBtn = true;
		CanCall = true;
	}

	void Characteristic() override {
		cout << "Availability of cool camera" << endl;
	}
	void Behavior () override  {
		cout << "Make tiktoks" << endl;
		MobilePhone::Behavior();
	}
};


int main()
{
	MobilePhone* obj = new SmartPhone();

	obj->Characteristic();
	obj->Behavior();

	obj = new CameraPhone();

	obj->Characteristic();
	obj->Behavior();
}