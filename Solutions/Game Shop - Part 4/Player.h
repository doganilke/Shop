#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
	Player();
	Player(int gold);

	Player(const Player& item) = delete;
	Player(Player&& item) = delete;
	~Player() = default;

	Player& operator=(const Player& rhs) = delete;
	Player& operator=(Player&& rhs) = delete;

	int GetGold() const;
	void SetGold(int gold);
private:
	int m_gold;
};

#endif