#ifndef HEADER_H
#define HEADER_H


#include <bits/stdc++.h>
#include <deque>
#include <limits>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <string>
#include <sys/time.h>


using std::string;
using std::deque;
using std::deque;
using std::list;
using std::ofstream;
using std::ifstream;
using std::sort;
using std::cout;
using std::cin;
using std::endl;

class Zmogus{
    protected:
    string vardas, pavarde;
    public:
    virtual string getVardas() = 0;
    virtual string getPavarde() = 0;
};

class Studentas: public Zmogus {
// realizacija
private:
  double egzaminas, galutinis;
  deque<double> C;
// interfeisas
public:
    Studentas(string v, string p, double g){
        vardas = v;
        pavarde = p;
        galutinis = g;
    }
    const Studentas operator=(const Studentas &stud){
      if(this == &stud)
      return *this;

      this->vardas = stud.vardas;
      this->pavarde = stud.pavarde;
      this->galutinis = stud.galutinis;
      this->egzaminas = stud.egzaminas;

      return *this;
  }
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

/*struct Studentas{
string vardas, pavarde;
deque<int> C;
int egzaminas;
float galutinis;
};*/

ofstream& operator<<(ofstream& , Studentas&);
string IntToStr(int );
deque<Studentas> skirstykStudentusNetrinant(deque<Studentas>&);
deque<Studentas> skirstykStudentusTrinant(deque<Studentas>&);
//void GalBalas(deque<Studentas>& );
bool comparePagalVarda( Studentas& ,  Studentas& );
bool comparePagalPavarde( Studentas& ,  Studentas& );
bool comparePagalGalutini( Studentas& ,  Studentas& );

#endif
