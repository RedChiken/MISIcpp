#include <iostream>
#include <math.h>

class Attribute{
private:
	bool gale, penetrate, provoke, slow, armorbreak, reflex, suitable;
public:
	Attribute();
	Attribute(const Attribute &att);
	virtual ~Attribute();
	/****7���� �Ӽ��� ���� �ο� ���� ���� �Լ�****/
	void enableGale();
	void enablePenetrate();
	void enableProvoke();
	void enableSlow();
	void enableArmorbreak();
	void enableReflex();
	void enableSuitable();
	/****�������� �Ӽ� �� ���� ����****/
	void affect();
};



