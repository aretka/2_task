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
#include <list>


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
  double egzaminas, galutinis=0;
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
  void setEgzaminas(double e)
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

/*
struct Studentas{
string vardas, pavarde;
vector<int> C;
int egzaminas;
float galutinis;

 bool operator<( const Studentas& a) const {
 return galutinis < a.galutinis;
 }
};*/

string IntToStr(int);
list<Studentas> skirstykStudentusNetrinant(list<Studentas>&);
list<Studentas> skirstykStudentusTrinant(list<Studentas>&);

#endif
