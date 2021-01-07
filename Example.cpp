#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class BreakOut : public olc::PixelGameEngine
{
public:
	olc::Sprite* spt;
	BreakOut()
	{
		sAppName = "Image";
	}
public:
	bool OnUserCreate() override
	{
		spt = new olc::Sprite("./Resource/beach.png");

		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		Clear(olc::DARK_BLUE);
		DrawSprite(50, 40, spt);
		SetPixelMode(olc::Pixel::NORMAL); // Draw all pixels
		return true;
	}
};

int main()
{
	BreakOut demo;
	if (demo.Construct(512, 480, 2, 2))
		demo.Start();
	return 0;
}
