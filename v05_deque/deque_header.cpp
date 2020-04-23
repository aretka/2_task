#include "deque_header.h"

string IntToStr(int n)
{
    std::stringstream result;
    result << n;
    return result.str();
}

deque<Studentas> skirstykStudentusNetrinant(deque<Studentas>& studentai)
{
 deque<Studentas> kieti, minksti;
 for (int i = 0; i != studentai.size(); i++)
 {
     if (studentai[i].getGalutinis() < 5)
     minksti.push_back(studentai[i]);
     else
     kieti.push_back(studentai[i]);
 }

 studentai = kieti; // vektoriui 'studentai' priskiriame kietus
 return minksti; // grąžina vektorių iš studentų gavusių skolą
}

deque<Studentas> skirstykStudentusTrinant(deque<Studentas>& studentai)
{
 deque<Studentas> minksti;
 deque<Studentas>::size_type i = 0;
 while(i!=studentai.size())
 {
     if (studentai[i].getGalutinis() < 5)
	{
 	 minksti.push_back(studentai[i]);
         i++;
	}
     else
        break;
 }
 studentai.erase(studentai.begin(), studentai.begin() + i);
 return minksti; // grąžina vektorių iš studentų gavusių skolą
}

/*void GalBalas(deque<Studentas>& studentai)
{
    int suma;
    for(int i=0; i<studentai.size(); i++)
    {
        suma = 0;
        for(int t=0; t<studentai[i].C.size(); t++)
        {
            suma+=studentai[i].C[t];
        }
        if(studentai[i].C.size() == 0)
        {
            studentai[i].setGalutinis(0.6*studentai[i].egzaminas);
        }
        else{
            studentai[i].setGalutinis(0.4*suma/studentai[i].C.size())+(0.6*studentai[i].egzaminas);
        }
    }
}*/

bool comparePagalVarda( Studentas& x,  Studentas& y)
{
    return x.getVardas() < y.getVardas();
}

bool comparePagalPavarde( Studentas& x,  Studentas& y)
{
    return x.getPavarde() < y.getPavarde();
}
bool comparePagalGalutini( Studentas& x,  Studentas& y)
{
    return x.getGalutinis() < y.getGalutinis();
}
