#include "list_header.h"

ofstream& operator << (ofstream &outs, Studentas &stud)
{
   char buffer[100];
   sprintf(buffer, "%-20s %-20s %-20.2f\n", stud.getPavarde().c_str(), stud.getVardas().c_str(), stud.getGalutinis());
   outs << buffer;
   return outs;
}

string IntToStr(int n)
{
    std::stringstream result;
    result << n;
    return result.str();
}

list<Studentas> skirstykStudentusNetrinant(list<Studentas>& studentai)
{
 list<Studentas> kieti, minksti;
 list<Studentas>::iterator it;
 Studentas duomenys;
 it = studentai.begin();
 while ( it != studentai.end())
 {
     duomenys.setVardas(it->getVardas());
     duomenys.setPavarde(it->getPavarde());
     duomenys.setGalutinis(it->getGalutinis());
     if (it->getGalutinis() < 5)
     minksti.push_back(duomenys);
     else
     kieti.push_back(duomenys);

     it++;
 }

 studentai = kieti; // vektoriui 'studentai' priskiriame kietus
 return minksti; // grąžina vektorių iš studentų gavusių skolą
}

list<Studentas> skirstykStudentusTrinant(list<Studentas>& studentai)
{
 list<Studentas> minksti;
 list<Studentas>::iterator it;
 Studentas duomenys;
 it = studentai.begin();
 while ( it != studentai.end())
 {
     
     if (it->getGalutinis() < 5)
	{
	 duomenys.setVardas(it->getVardas());
     duomenys.setPavarde(it->getPavarde());
     duomenys.setGalutinis(it->getGalutinis());
	 minksti.push_back(duomenys);
	 it = studentai.erase(it);
	}     
     else
     ++it;
 }

 return minksti; // grąžina vektorių iš studentų gavusių skolą
}


