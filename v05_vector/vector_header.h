#ifndef HEADER_H
#define HEADER_H


#include <bits/stdc++.h>
#include <vector>
#include <limits>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <string>
#include <sys/time.h>


using std::string;
using std::vector;
using std::deque;
using std::list;
using std::ofstream;
using std::ifstream;
using std::sort;
using std::cout;
using std::cin;
using std::endl;

class Studentas {
// realizacija
private:
  string vardas;
  string pavarde;
  double egzaminas, galutinis;
  vector<double> C;
// interfeisas
public:
  void setVardas(string v)
  {
      vardas = v;
  }
  void setPavarde(string p)
  {
      pavarde = p;
  }
  void setGalutinis(double g)
  {
      galutinis = g;
  }
  void setGalutinis(double e)
  {
      egzaminas = e;
  }
  string getVardas(){
      return vardas;
  }
  string getPavarde(){
      return pavarde;
  }
  double getGalutinis(){
      return galutinis;
  }
  double getEgzaminas(){
      return egzaminas;
  }
};

/*struct Studentas{
string vardas, pavarde;
vector<int> C;
int egzaminas;
float galutinis;
};*/

string IntToStr(int );
vector<Studentas> skirstykStudentusNetrinant(vector<Studentas>&);
vector<Studentas> skirstykStudentusTrinant(vector<Studentas>&);
//void GalBalas(deque<Studentas>& );
bool comparePagalVarda( Studentas& ,  Studentas& );
bool comparePagalPavarde( Studentas& ,  Studentas& );
bool comparePagalGalutini( Studentas& ,  Studentas& );

#endif
