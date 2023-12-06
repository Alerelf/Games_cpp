// игральные карты в качестве объектов 

#include <iostream> 
using namespace std;
enum Suit { clubs, diamonds, hearts, spades }; 
const int jack = 11; // именованные достоинства карт 
const int queen = 12; 
const int king = 13;
const int ace = 14; 

class Card {

private: 
int number; // достоинство карты
Suit suit; // масть

public: 
Card(){ } 
    // конструктор без аргументов 
Card (int n, Suit s) : number(n), suit(s){ }  
    // конструктор с двумя аргументами

void display(); // вывод карты на экран
bool isEqual(Card); // результат сравнения карт
};

//...

void Card::display() // вывод карты на экран 
{
cout << "\n\n";    
if( number>=2 && number<=10 )
cout << number;
else 
switch(number) {
case jack: cout << "\nВалет "; break;
case queen: cout << "\nДама "; break;
case king: cout << "\nКороль "; break;
case ace: cout << "\nТуз "; break;
} 
switch(suit) {

case clubs: cout << "\nтреф"; break;
case diamonds: cout << "\nбубен"; break;
case hearts: cout << "\nчервей"; break;
case spades: cout << "\nпик"; break;
}
}

//...

bool Card::isEqual(Card c2) // сравнение двух карт 
{ 
return (number==c2.number && suit==c2.suit)? true : false;
}

///

int main() {
Card temp, chosen, prize;  // 3 карты
int position;

// определение и инициализация card1

Card card1(7, clubs);

// вывод card1
cout << "\nКарта 1: ";
card1.display(); 
cout << "\n\n";
    
// определение и инициализация card2 

Card card2(jack,hearts);

// вывод card2 
cout << "\nКарта 2: "; 
card2.display();
cout << "\n\n";
    
// определение и инициализация card3 
 
Card card3(ace, spades);

// вывод card3

cout << "\nКарта 3: ";
card3.display();
cout << "\n\n";    
    
prize = card3;
// карту prize будет необходимо угадать

cout << "\nМеняем местами карты 1 и 3..."; 
temp = card3;
card3 = card1;
card1 = temp; 

cout << "\nМеняем местами карты 2 и 3...";
temp = card3;
card3 = card2;
card2 = temp;

cout << "\nМеняем местами карты 1 и 2..."; 
temp = card2;
card2 = card1;
card1 = temp;

cout << "\n\nHa какой позиции (1, 2 или 3) теперь ";

prize.display(); // угадываемая карта 
cout << "\n?\n"; 

cin >> position; // ввод позиции игроком

switch (position) { 

// chosen - карта на позиции

case 1: chosen = card1; break;  // выбранной игроком

case 2: chosen = card2; break;

case 3: chosen = card3; break;
} 

if(chosen.isEqual(prize)) // сравнение карт 

cout << "\nПравильно! Вы выиграли!"; 
else 
cout << "\nНеверно. Вы проиграли.";
cout << "\n Вы выбрали карту ";
chosen.display(); 
cout << endl;
return 0;
}