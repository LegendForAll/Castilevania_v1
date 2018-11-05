#include <algorithm>
#include "debug.h"

#include "Mario.h"
#include "Game.h"
#include "Goomba.h"
#define ID_TEX_MARIO 0

void CMario::LoadAnimation()
{
	//Load animation SIMON

	//Load texture of Animation SIMON


	//SM STAND STATIC

	//SM SIT

	//SM NOVE

	//SM JUMP

	//SM HURTED

	//SM THROW WEAPON

	//SM DEAD

	//SM INVISIBLE

	//SM EAT ITEM

	//SM FALL DOWN

	//SM STAND ATTACK

	//SM SIT ATTACK

	//SM STAND_UP_STAIR

	//SM STAND_DOWN_STAIR

	//SM ATTACK UP_STAIR

	//SM ATTACK DOWN_STAIR

	//SM MOVE UP_STAIR

	//SM MOVE DOWN_STAIR
}

void CMario::Update(DWORD dt, vector<LPGAMEOBJECT> *coObjects)
{
	//Render vs Collision

}

void CMario::Render()
{
	//Using State Machine to render
	int ani = 0;					//current ID animation
	if (state == SM_JUMP)
		ani = SM_JUMP;

	////do mo cua sprite
	int alpha = 255;
	//// xu ly ve lai mario mo di
	//if (untouchable) alpha = 128;
	animations[SM_STAND_ATTACK]->Render(x, y, alpha, true);

	//render truc tiep tu CGameObject
	//animations[0]->Render(x, y);
}

void CMario::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
		//State machines
	case SM_MOVE_LEFT:
		nx = -1;
		vx = -SM_WALKING_SPEED;
	}
}

void CMario::GetBoundingBox(float &left, float &top, float &right, float &bottom)
{
	left = x;
	top = y; 
	right = x + SM_BBOX_WIDTH;
	bottom = y + SM_BBOX_HEIGHT;
}

void CMario::CheckKey()
{
	//Get Status keyboard;
	if (IsKeyDown(DIK_LEFT))
		state = SM_MOVE_LEFT;
}

