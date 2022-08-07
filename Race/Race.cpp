#include <iostream>

using namespace std;
/*
class Transport
{
private:
	int Speed = -999;
	int Travel_time_before_rest = -999;
	int Rest_duration = -999;
	string Transport_name = "<3";
	string Name = "Транспорт";

protected:
	string get_transport_name()
	{
		return Transport_name;
	}

public:
	Transport()
	{
		Transport_name = Name;
	}
	virtual void get_info()
	{
		cout << Transport_name << endl;
	}
};

class Ground_transport : public Transport
{};

class Air_transport : public Transport
{};

void print(Transport* transport)
{
	transport->get_info();
}
*/
void cio(string Func_race_choise, int Func_track)
{
	cout << Func_race_choise << Func_track << endl;
	cout << "1. Ботинки-вездеходы" << endl;
	cout << "2. Метла" << endl;
	cout << "3. Верблюд" << endl;
	cout << "4. Кентавр" << endl;
	cout << "5. Орёл" << endl;
	cout << "6. Верблюд-быстроход" << endl;
	cout << "7. Ковёр-самолёт" << endl;
	cout << "0. Закончить регистрацию" << endl;
	cout << "Выберите транспорт, или введите 0 для окончания регистрации: ";
	cout << endl;
}


int main()
{
	system("chcp 1251");

	int n = 0, sizeAdd = 7, Choise_race = -999, Track = -999, Choise_registration = -999, Trans = -999;
	string Race_choise = "<3";
	string* arr = new string[sizeAdd];

	cout << "Добро пожаловать в гоночный симулятор!" << endl;
	cout << "1. Гонка для наземного транспорта" << endl;
	cout << "2. Гонка для воздушного транспорта" << endl;
	cout << "3. Гонка для наземного и воздушного транспорта" << endl;
	cout << "Выберите тип гонки: ";
	cin >> Choise_race;
	cout << endl;

	if (Choise_race == 1)
	{
		Race_choise = "Гонка для наземного транспорта. Трасса: ";
	}

	else if (Choise_race == 2)
	{
		Race_choise = "Гонка для воздушного транспорта. Трасса: ";
	}

	else if (Choise_race == 3)
	{
		Race_choise = "Гонка для наземного и  воздушного транспорта. Трасса: ";
	}

	cout << "Введите длину трассы(обязательно должна быть положительна): ";
	cin >> Track;
	cout << endl;

	cout << "Должно быть зарегистрированно хотя бы 2 ТС" << endl;
	cout << "1. Зарегистрировать транспорт" << endl;
	cout << "Выберите действие: ";
	cin >> Choise_registration;
	cout << endl;

	do
	{
		for (int i = 1; ; i++)
		{
			cout << "Зарегестрированные ТС: ";
			for (int i = 0; i <= sizeof(arr); i++)
			{
				cout << arr[i] << " ";
			}

			cio(Race_choise, Track);
			cin >> Trans;

			if (Trans == 1)
			{
				arr[i] = "Ботинки-вездеходы";
			}

			else if (Trans == 2)
			{
				arr[i] = "Метла";
			}

			else if (Trans == 3)
			{
				arr[i] = "Верблюд";
			}

			else if (Trans == 4)
			{
				arr[i] = "Кентавр";
			}

			else if (Trans == 5)
			{
				arr[i] = "Орёл";
			}

			else if (Trans == 6)
			{
				arr[i] = "Верблюд-быстроход";
			}

			else if (Trans == 7)
			{
				arr[i] = "Ковёр-самолёт";
			}
			
			else if (i > 7)
			{
				cout << "Выбранно слишком много ТС";
				break;
			}

			i++;
		}
	} while (Trans != 0);

	cout << endl;
}