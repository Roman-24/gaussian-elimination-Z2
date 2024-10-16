## EN
Jakubko arrived at a haunted castle. The castle has N rooms and N switches. Each switch toggles the state of the lights (on-off) in a certain set of rooms. These sets are given (each switch may control a different set of rooms) as well as the initial lighting configuration in the rooms. Your task is to find which switches need to be pressed to turn off all the lights. Assume the task has exactly one solution.

### Input Specification:
First, the input gives an integer N (at most 100), followed by N rows, each containing N+1 numbers. The first N numbers in each row are either 0 or 1, indicating whether the i-th switch toggles the light in that room. The last number in the row (N+1-th number) represents the current state of the light in that room (0 = off, 1 = on).

### Output Specification:
For the given initial configuration of the lights, print out a sequence of N numbers (either 0 or 1) representing the presses of N switches. A 0 means the switch is not pressed, and a 1 means the switch is pressed. The goal is to guarantee that all the lights in the castle are turned off. Each switch can only be pressed once or not at all. Therefore, print N numbers where the i-th number represents the action on the i-th switch (0 for no press, 1 for a press).

### Example Input:
```
5
1 0 1 0 1  1
1 1 0 1 1  0
0 1 1 1 1  0
0 1 0 0 1  1
1 0 1 1 1  0
```

### Example Output:
```
0 0 0 1 1
```

### Explanation:
We only need to press the last two switches (switches 4 and 5), which correspond to the last two columns of the input matrix (0 1 1 0 1 and 1 1 1 1 1), pressing each exactly once. Rooms 1 and 3 had their lights on, and pressing switch 5 turns them off. Rooms 2, 4, and 5 were already off, but pressing switch 4 turns them on, and then pressing switch 5 turns them off again. After pressing both switches (in any order), all the rooms will be dark.

## SK
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
