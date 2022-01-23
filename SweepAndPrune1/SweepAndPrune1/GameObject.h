#pragma once
//Os GameObjects são todos >>>>>CUBOS<<<<<
struct coord
{
	float x, y, z;
};
class GameObject
{//
	private:
		coord arestaList[2];
		coord centralPoint;
		
	public:
		GameObject();
		void setCoord( coord coordinates);
		void setArestas(coord p1, coord p2);
		coord* getArestas();
};

