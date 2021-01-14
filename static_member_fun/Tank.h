#pragma once
class Tank
{
public:
	Tank(char code);
	~Tank();
	void fire(Tank* tank);
	static int getCount();
private:
	char m_sCoce;
	static int s_iCount;
	
	

};

