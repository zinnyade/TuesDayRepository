#pragma once
class EnemySample
{
private:
	int hp;
public:
	EnemySample();
	void TakeDamage(int damage);
	void ShowStatus() const; 
};

