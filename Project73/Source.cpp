#include <iostream>
#include <algorithm>
#include <list>
#include <map>
#include <string>
using namespace std;

/*//шаблонная функция для вывода содержимого отображения или мультиотображения на экран
template<class container> 
void show(container col)
{
	for (auto i = col.begin(); i != col.end(); ++i)
		cout << i->first << '\t' << i->second << "\n";
	cout << "\n\n";
}

void main()
{
	cout << "map\n\n";
	//Создаём пустой контейнер (отображение)
	map<string, int> cont;
	//Создаём пустой контейнер (мультиотображение)
	multimap<string, int> multicont;
	//Добавляем две пары в отображение
	cont.insert(pair<string, int>("Ivanov", 10));
	cont.insert(pair<string, int>("Petrov", 20));
	//Добавится пара "Sidorov, 30"
	cont["Sidorov"] = 30;
	show(cont);
	//Элемент не добавится т.к. пара с ключом "Ivanov" уже существует
	cont.insert(pair<string, int>("Ivanov", 100));
	show(cont);

	/////////////////////////////////////////////////////////////
	cout << "--------------------------------------------\nmultimap\n\n";
	multicont.insert(pair<string, int>("Ivanov", 10));
	multicont.insert(pair<string, int>("Petrov", 20));
	multicont.insert(pair<string, int>("Sidorov", 30));
	//Для мультиотображения не определён оператор "[]"
	//multicont["Sidorov"] = 30; //Error
	show(multicont);
	//Добавляем пару ("Ivanov", 100)
	multicont.insert(pair<string, int>("Ivanov", 100));
	show(multicont);
	//Ищем первое вхождение элемента с ключом "Petrov"
	multimap<string, int>::iterator iter = multicont.find("Petrov");
	cout << iter->first << '\t' << iter->second << "\n\n";
	cout << "Count of key \"Ivanov\" in multimap = " << multicont.count("Ivanov") << "\n";
	//Возвращает итератор, указывающий на первое вхождение данного ключа или на конец отображения в случае отсутствия
	iter = multicont.lower_bound("Ivanov");
	for (; iter != multicont.upper_bound("Ivanov") and iter != multicont.end(); iter++)
		cout << iter->first << '\t' << iter->second << "\n";
	cout << "\n\n";
}*/

/*class addNumberFrom
{
	int delta;
	int current;
public:
	addNumberFrom(int number, int from = 0) :delta{ number }, current{ from }{}
	int operator()()
	{
		return current += delta;
	}
};
void main()
{
	cout << "Table:\n\n" << "----------------\n\n";
	for (int i = 0; i <= 10; i++)
	{
		list<int> l(10);
		generate_n(l.begin(), l.size(), addNumberFrom(i));
		copy(l.begin(), l.end(), ostream_iterator<int>(cout, "\t"));
	}
}*/
bool IsEven(int num)
{
	return bool(num % 2);
}
void main()
{
	list<int> l;
	list<int>::iterator t;
	for (int i = 1; i <= 10; i++)
		l.push_back(i);
	copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
	cout << "\n\n";
	t = remove_if(l.begin(), l.end(), IsEven);
	copy(l.begin(), t, ostream_iterator<int>(cout, " "));
}