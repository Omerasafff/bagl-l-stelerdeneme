// YIĞINLAR DENEME.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 10;
class yigin
{
public:
	yigin()
	{
			tepe = -1;
		kapasite = 5;
		veriler = new int[kapasite];
		genıslet(5);


	}
	~yigin()
	{


	}
	void ekle(int veri)
	{ 
		if (tepe<MAX-1)
		{
			tepe++;
			veriler[tepe] = veri;

		}
	}
	void cıkar()
	{
		if (tepe!=-1)
		{
			tepe--;
		}
	}

	friend ostream& operator<<(ostream& os, yigin& Yığın)
	{

		os  << "----->";
		for (int i =Yığın.tepe; i>=0 ; i++)
		{
			os << Yığın.veriler[i];
		}
		cout << endl;

		return os;

	}
private:

	int tepe;
	int veriler[MAX];
	







};
int main()
{
	yigin yığın;
	yığın.ekle(12);
	cout << yığın;

}














