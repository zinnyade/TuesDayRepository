#pragma once
class CharacterSample
{
private:
	int hp;
public:
	CharacterSample();
	void TakeDamage(int damage);
	void ShowStatus() const;

};

class Player : public CharacterSample
{};
class Enemy : public CharacterSample
{};
class EnemySample5 {};

