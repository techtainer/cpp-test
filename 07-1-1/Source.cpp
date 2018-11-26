#include<iostream>

using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car(int gauge)
	{
		gasolineGauge = gauge;
	}

	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class Hybrid :public Car
{
private:
	int electricGauge;
public:
	Hybrid(int elec, int gauge) :electricGauge(elec), Car(gauge)
	{}

	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar :public Hybrid
{
private:
	int waterGauge;
public:
	HybridWaterCar(int water,int elec, int gauge):waterGauge(water), Hybrid(elec, gauge)
	{}

	void ShowCurrentGauge()
	{
		cout << "Gasoline : " << GetGasGauge() << endl;
		cout << "Electric : " << GetElecGauge() << endl;
		cout << "Water : " << waterGauge << endl;
	}
};

void main(void)
{
	HybridWaterCar tmp(10, 20, 30);

	tmp.ShowCurrentGauge();
}