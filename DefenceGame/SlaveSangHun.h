#include <iostream>
#include <math.h>

class attribute{
private:
	bool gale, penetrate, provoke, slow, armorbreak, reflex, suitable;
public:
	attribute();
	attribute(const attribute &att);
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



