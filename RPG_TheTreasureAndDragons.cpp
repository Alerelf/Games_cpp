#include <iostream>
#include <process.h> // exit()
#include <conio.h> // getche()
using namespace std;

int main() {
    
    char dir = 'a';
    int x=10, y=10;
    while ( dir != '\r' ){
        cout << "\nВаши координаты:" << x << ", " << у;
        
        if ( х℅7==0 && у℅7==0 ){
        cout << "\nЗдесь находится цветок\n";
        }
        
        if( x<5 || х>15 ){ //если х меньше 5 или больше 15
        cout << "\nОсторожно - драконы!\n";
        }
        
        cout<< "\nВыберите направление (n.s.e.w): ";
        dir=getche(): // ввод направления
        switch(dir){
        case 'n': ++y; break; // обновление координат
        case 's': --y; break;
        case 'e': ++x; break;
        case 'w': --x; break;
        } //конец switch
        if( x==7 && y==11 ){  // если x равно 7 и у равно 11
        cout <<"\nВы нашли сокровище!\n";
        exit(O): // выход из программы
        }
    } // конец while
    return 0;
}