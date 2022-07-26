#pragma once
#include "Player.h"


// [[ Player ]]
//  [ Game ]

// is - a 관계  Game is a Player?
// has - a 관계 Game has a Player?
class Game
{
public:

private:

	// Player _player로 하면 Knight나 Archer나 이런걸 뭐 할 수가없음 
	// 원본자체가 Player가 되버려서 안좋음
	Player* player;

};

