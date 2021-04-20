<p>Jakubko prišiel na strašidelný zámok. Na zámku je N miestností a N vypínačov. Každý vypínač prepne stav svetla (svieti-nesvieti) v nejakej množine miestností. Dané sú tieto množiny (pre každý vypínač môže byť iná) a počiatočné rozsvietenie svetiel v miestnostiach, nájdite také stlačenie vypínačov, ktoré vypne všetky svetlá. Predpokladajte, že úloha má práve jedno riešenie.<br>

Špecifikácia vstupu: Na vstupe najskôr celé číslo N (najviac 100) a potom nasleduje N riadkov, v každom N+1 čísel, ktoré reprezentujú jednu miestnosť -- prvých N čísel v riadku sú čísla 0 alebo 1 podľa toho či i-ty vypínač prepína svetlo v tejto miestnosti, posledné (N+1.) číslo je aktuálny stav zasvietenia svetla v tejto miestnosti.<br>

Špecifikácia výstupu: Pre konfiguráciu svetiel na vstupe vypíšte také prepnutie N vypínačov, ktoré zaručí, že v zámku bude všade tma (zhasnuté). Každý vypínač má zmysel prepnúť raz alebo vôbec. Vypíšte teda N čísel 0 (nič) alebo 1 (prepnúť), kde i-te číslo reprezentuje prepnutie i-teho vypínača.<br>

Ukážka vstupu: <br>
5 <br>
1 0 1 0 1  1 <br>
1 1 0 1 1  0 <br>
0 1 1 1 1  0 <br>
0 1 0 0 1  1 <br>
1 0 1 1 1  0 <br>
Výstup pre ukážkový vstup:<br>
0 0 0 1 1<br>
Vysvetlenie: Stačí nám prepnúť posledné dva vypínače (4 a 5), ktoré zodpovedajú posledným dvom stĺpcom vstupnej matice (0 1 1 0 1 a 1 1 1 1 1), každý práve raz. V miestnostiach 1 a 3 bolo rozsvietené a stlačenie vypínača 5 v nich zhasne. V miestnostiach 2, 4 a 5 bolo zhasnuté a stlačenie vypínača 4 v nich rozsvieti, ale následné stlačenie vypínača 5 opäť zhasne. Nakoniec (po stlačení oboch vypínačov, v ľubovoľnom poradí) bude vo všetkých miestnostiach tma.</p>
