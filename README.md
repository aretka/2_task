# 2uzduotis

## Versija v1.1

Šioje versijoje yra pakeista iš struct į class tipo duomenų saugojimą. Atlikti bandymai naudojant vector konteinerį su struktūra bei klase. Atlikti bandymai su skirtingais optimizavimo flag'ais O1, O2, O3.</br>
Ankstesni bandymai su struktūromis: </br>
![struct_vector](vector_struct_compare.png)</br>
Testavimas su clasėmis: </br>
![class_vector](class_vector_compare.png)</br>
Rezultatai rodo, kad naudodami klasę programa veikia 1.2 karto lėčiau negu su struktūromis.</br>
</br>


O1 flag:</br>
![01_flag](01_flag.png)</br>
O2 flag:</br>
![02_flag](02_flag.png)</br>
O3 flag:</br>
![03_flag](03_flag.png)</br>

Rezultatai rodo, kad dirbant su klasėmis, optimizuojant su flag'ais programos veikimo sparta beveik visiškai nepakinta.

## Versija v1.2

Šioje versijoje pridėti klasės operatoriai '=' bei '<<' tam kad programa galėtų naudotis paprasčiau. Operatorius '=' leidžia prilyginti vienus klasės elementus kitiems. O operatorius '<<' palegvina failų išvedimą.
