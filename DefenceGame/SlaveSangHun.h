#include <iostream>
#include <math.h>

class Attribute{
private:
	bool gale, penetrate, provoke, slow, armorbreak, reflex, suitable;
	Gale gale_obj;				// ��ǳ
	Penetrate penetrate_obj;	// ����
	Provoke provoke_obj;		// ����
	Slow slow_obj;				// ������
	Armorbreak armorbreak_obj;	// ��� ����
	Reflex reflex_obj;			// �ݻ�
	Suitable suitable_obj;		// ���� ������
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

/******Ŭ���� �ϳ��� ������ �Ӽ� Ŭ������ ����Ͽ� �������̽�ȭ�� �غ���..?*******/

class Gale{
public:
	Gale();
	Gale(const Gale &gale);
	virtual ~Gale();
};

class Penetrate{
public:
	Penetrate();
	Penetrate(const Penetrate &pent);
	virtual ~Penetrate();
};

class Provoke{
public:
	Provoke();
	Provoke(const Provoke &prov);
	virtual ~Provoke();
};

class Slow{
public:
	Slow();
	Slow(const Slow &slow);
	virtual ~Slow();
};

class Armorbreak{
	Armorbreak();
	Armorbreak(const Armorbreak &arbr);
	virtual ~Armorbreak();
};

class Reflex{
	Reflex();
	Reflex(const Reflex &refx);
	virtual ~Reflex();
};

class Suitable{
	Suitable();
	Suitable(const Suitable &suit);
	virtual ~Suitable();
};