#include <iostream>
#include <math.h>

class Attribute{
private:
	bool gale, penetrate, provoke, slow, armorbreak, reflex, suitable;
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



