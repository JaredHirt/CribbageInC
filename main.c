#include <stdio.h>
#include <string.h>
enum Rank getRank(int n);
enum Suit getSuit(int n);

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

int main() {
    //Making Deck
    struct Card deck[52];
    for (int i = 0; i < 52; ++i) {
        deck[i].rank = getRank(i%13);
        deck[i].suit = getSuit(i/13);
    }
    for (int i = 0; i < 52; ++i) {
        printf("The suit is %d, and the rank is %d\n", deck[i].rank, deck[i].suit);
    }
}

enum Rank getRank(int n){
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
enum Suit getSuit(int n){
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