#include <iostream>
#include <math.h>

class Attribute{
private:
	bool gale, penetrate, provoke, slow, armorbreak, reflex, suitable;
	Gale gale_obj;				// 질풍
	Penetrate penetrate_obj;	// 관통
	Provoke provoke_obj;		// 도발
	Slow slow_obj;				// 프리즈
	Armorbreak armorbreak_obj;	// 방어 감소
	Reflex reflex_obj;			// 반사
	Suitable suitable_obj;		// 지속 데미지
public:
	Attribute();
	Attribute(const Attribute &att);
	virtual ~Attribute();
	/****7가지 속성에 대한 부여 여부 적용 함수****/
	void enableGale();
	void enablePenetrate();
	void enableProvoke();
	void enableSlow();
	void enableArmorbreak();
	void enableReflex();
	void enableSuitable();
	/****실질적인 속성 별 공격 영향****/
	void affect();
};

/******클래스 하나를 각각의 속성 클래스에 상속하여 인터페이스화를 해볼까..?*******/

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