#pragma once
class Hand
{
protected:
	int hand;
private:
	enum RSPHand
	{
		ROCK,
		SCISSORS,
		PAPER
	};
public:
	Hand();

	//Žè‚ð•\Ž¦
	void ShowHand();

};

