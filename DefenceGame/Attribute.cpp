#include "SlaveSangHun.h"
Attribute::Attribute(){
	gale = false;
	penetrate = false;
	provoke = false;
	slow = false;
	armorbreak = false;
	reflex = false;
	suitable = false;
}

Attribute::Attribute(const Attribute &att){

}

Attribute::~Attribute(){
	
}

void Attribute::enableGale(){
	gale = true;
}
void Attribute::enablePenetrate(){
	penetrate = true;
}
void Attribute::enableProvoke(){
	provoke = true;
}
void Attribute::enableSlow(){
	slow = true;
}
void Attribute::enableArmorbreak(){
	armorbreak = true;
}
void Attribute::enableReflex(){
	reflex = true;
}
void Attribute::enableSuitable(){
	suitable = true;
}
