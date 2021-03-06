#pragma once
#include <vector>
#include <iostream>
#include <assert.h>
#include <random>
#include <algorithm>

enum Rank {
	None,Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
	Jack, Queen, King
};
enum Suit { Clubs=1, Diamonds, Hearts, Spades, Joker };
enum Color { Black=1, Red };

struct Card_Data {
	Rank rank;
	Suit suit;
	Color color;
};

class Gambling {

};
	
class SuitedCard:Gambling {
		
public:
	SuitedCard();
	SuitedCard(Suit s , Rank r , Color c );	
	void shuffle();
private:
	Suit suit;
	Rank rank;
	Color color;
	std::vector<Card_Data> c_vector;

};
