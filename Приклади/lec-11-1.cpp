// Створення файлу i запис до нього масиву
#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;
void main() {
  int i, mas[5];
  //--запис елементiв масиву файл:
  ofstream fout("massiv.dat"); 
  /* створення потоку fout та 
  вiдкриття файлу з iм'ям 
  massiv.dat для запису */
  if (!fout) cout << "Cannot open file\n";
  for (i = 0; i < 5; i++) {
    cout << "Enter" << i << "element\n";
    cin >> mas[i]; // Введення елемента масиву з клавiатури
    fout << mas[i] << " "; //запис елемента у файл
  }
  fout.close();
  //-- читання компонентiв файлу та виведення на екран
  ifstream fin("massiv.dat"); 
  //Створення потоку fin для читання файлу
  if (!fin) cout << " Cannot open file fo reading\n";
  cout << "REZULTAT\n";
  for (i = 0; i < 5; i++) {
    fin >> mas[i];
    //Читання чергового елемента масиву з файлу
    cout << "mas[" << i << "]=" << mas[i] << " ";
  }
  cout << "\nFile reading\n";
  fin.close();
  getch();
}