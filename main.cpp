#include <iostream>
using namespace std;
// PROJECTS_1
void Square()//Maksims Fedosejevs
{
  int a, S; 
  cout << "ievadiet kvadrata malu";
  cin >> a;
  S=a*a;
  cout << S;
}


void Paraleloram_angle () // by Ekaterina Blinova
{
  int a, b, x; 
  float pa;

  cout << "\n Trijstura pamats ir: ";
  cin >> a;
  cout << "\n Sānu mala ir: ";
  cin >> b; 
  cout << "\n Paralelograma lenķu vērtība ir: ";
  cin >> x;
  cout << "\n Paralelograma laukums ir: ";
  pa = a*b*sin(x); 
  cout >> pa;

void Triangle()// by Diana Vanovicha
{
  int mala,augstums;
  cout << "Ievadiet malu un augstumu" << endl;
  cin >> mala >> augstums >> endl;
  int Laukums = (mala * augstums)/2;
  cout << Laukums << endl;

}

void paralelograms();  // by Diana Tureiko
int main() 
{
  int pamats, augstums, S;
  cout << "Ievadiet paralelograma pamatu un augstumu";
  cin >>  pamats >> augstums; 
  S = pamats * augstums;    
  cout << "Paralelograma laukums ir" << S;    
}

void Trapeze() //by Denis Tomko
  {
  cout << "lai uzzināt Tr laukumu uzraksti augstumu un pamati" << endl ;
  int h,a;
  cin >> h ;
  cin >> a ;
  int STr=a*h;
  cout << "Trapecijas laukums = " << STr << endl ;

void Circle ()  // by Anna Butujeva
{
  float R, S;
  cout << "Riņķa līnijas rādiuss ir " ;
  cin >> R;
  S=R*R*3.14;
  cout << "Riņķa līnijas laukums ir " << S << endl;

  }

  
  void Triangle_angle()  // by Kristina Lapinska

{
 int a, b, y, S;
  cout << "Trijstūra pamats ir ";
  cin >> a;
  cout << "Trijstūra sānu mala ir ";
  cin >> b;
  cout << "Trijstura leņķa vērtība ir ";
  cin >> y;
  S=a*b*sin(y)/2;
  cout << "Trijstūra laukums" << S;
}
  
  int main() {
  
  cout << "Programma pieprasa figūras elementus un aprēķina to laukumu. \n";
  cout << " Nospiediet burtu:\n";
  cout << "T  - ja figūra trijstūris" << endl;
  cout << "Tr  - ja figūra trapece" << endl;
  cout << "P  - ja figūra paralelograms" << endl;
  cout << "Ta  - ja figūra tainstūris" << endl;
  cout << "K  - ja figūra kvadrāts" << endl;
  cout << "R  - ja figūra riņķis" << endl;
  cout << "_____________________________________" << endl;
  cout << endl;

  string user_answer;
  cin >> user_answer;

  if (user_answer=="K" || user_answer=="k")
  {
    Square();
  }
  
  if (user_answer=="Ta"|| user_answer=="ta")
  {
    Rectangle();
  }

  if (user_answer=="Tr"|| user_answer=="tr")
  {
    Trapeze();
  }

  if (user_answer=="R"|| user_answer=="r")
  {
    Circle();
  }

  if (user_answer=="T"|| user_answer=="t")
  {
    cout << "Vai zinams trijstūra leņkis? Nospiediet 1, ja zinams, ja nē nospiediet 2" << endl;
    int atb;
    cin >> atb;
    if (atb ==1 ) { Triangle_angle ()}
      else {Triangle()}
  }

   if (user_answer=="P"|| user_answer=="p")
  {
    cout << "Vai zinams paralelograma leņkis? Nospiediet 1, ja zinams, ja nē nospiediet 2" << endl;
    int atb;
    cin >> atb;
    if (atb ==1 ) { Paralelogram_angle ()}
      else {Paraleloram()}
  }
  return 0;
}
