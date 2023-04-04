#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Declaring structs and enums
enum Suit{
    Clubs,
    Diamonds,
    Hearts,
    Spades
};

enum Rank{
    Ace,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
};
struct Card{
        enum Suit suit;
        enum Rank rank;
    };

//Declaring Functions
enum Rank intToRank(int n);
enum Suit intToSuit(int n);
void printCard(struct Card c);
char getRank(struct Card c);
char getSuit(struct Card c);
void playerIsDealer();
void playerIsPone();

// The Deck
struct Card deck[52];




int main() {
    //Making Deck

    for (int i = 0; i < 52; ++i) {
        deck[i].rank = intToRank(i%13);
        deck[i].suit = intToSuit(i/13);
    }
    if(rand()%1 == 1){
        playerIsDealer();
    }
    else playerIsPone();
}


void playerIsDealer(){

}

void playerIsPone(){}








//Card Functions
enum Rank intToRank(int n){
    switch (n) {
        
        case 0:
            return Ace;
        case 1:
            return Two;
        case 2:
            return Three;
        case 3:
            return Four;
        case 4:
            return Five;
        case 5:
            return Six;
        case 6:
            return Seven;
        case 7:
            return Eight;
        case 8:
            return Nine;
        case 9:
            return Ten;
        case 10:
            return Jack;
        case 11:
            return Queen;
        case 12:
            return King;
    }
}
enum Suit intToSuit(int n){
    switch(n){
        case 0:
            return Clubs;
        case 1:
            return Diamonds;
        case 2:
            return Hearts;
        case 3:
            return Spades;
    }
}
void printCard(struct Card c) {
    printf("%c%c", getRank(c), getSuit(c));
}
char getRank(struct Card c) {
    switch (c.rank) {
        case Ace:
            return 'A';
        case Two:
            return '2';
        case Three:
            return '3';
        case Four:
            return '4';
        case Five:
            return '5';
        case Six:
            return '6';
        case Seven:
            return '7';
        case Eight:
            return '8';
        case Nine:
            return '9';
        case Ten:
            return 'T';
        case Jack:
            return 'J';
        case Queen:
            return 'Q';
        case King:
            return 'K';
    }
}
char getSuit(struct Card c){
    switch(c.suit){
        case Clubs:
            return 'C';
        case Diamonds:
            return 'D';
        case Hearts:
            return 'H';
        case Spades:
            return 'S';

    }
}




