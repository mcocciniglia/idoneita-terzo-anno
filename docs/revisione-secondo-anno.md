# Revisione del secondo anno — 28 ottobre 2026

## Perimetro e decisione

Riferimento editoriale: versione pubblicata `a5679c431903e6b4db114fe83ad61056a689b595`.
Sono state lette la 2.01 pubblicata e le sei bozze 2.02–2.07 del vecchio main
`2d2a794`. Il confronto riguarda progressione, prerequisiti, esempi, soluzioni
e utilità rispetto alla programmazione di base per una terza del liceo scientifico.

La revisione cambia il piano, non dichiara pronte le vecchie pagine. La 2.01
comprende già un laboratorio eseguibile su sequenza, variabili, assegnazione,
input/output e selezione. Prima di programmare non occorrono altre quattro
lezioni introduttive da due ore sugli stessi strumenti. Si riusano i contenuti
utili in cinque lezioni operative successive; gli esercizi ripetitivi diventano
recupero facoltativo. Le nuove pagine andranno scritte e provate prima della
pubblicazione. Nessuna vecchia 2.02–2.07 viene esposta come lezione disponibile.

## Esito della revisione, lezione per lezione

| Bozza precedente | Riscontro | Decisione editoriale |
|---|---|---|
| 2.02 — Rappresentare un algoritmo | Il ripasso afferma che la 2.01 ha costruito algoritmi soltanto in linguaggio naturale. Non descrive più la lezione pubblicata, che usa Flowgorithm. Ripete costo dei biglietti, simboli e sequenza. | Conservare la distinzione fra algoritmo e rappresentazione in un richiamo di 10–15 minuti. Tradurre subito l'esempio dei biglietti in C++ nella nuova 2.02. Non richiedere tre rappresentazioni per ogni esercizio. |
| 2.03 — Dati, variabili e assegnazione | Buoni la traccia `a=4`, `b=3`, aggiornamento di `a` e poi di `b`, e gli esempi di nomi significativi. La soluzione dell'attività 1 cita `ALIQUOTA_IVA`, mentre la tabella propone `PI_GRECO`. Dire che un input non riassegnato è per questo una costante confonde comportamento e dichiarazione. | Accorpare nella nuova 2.02. Correggere la soluzione: `PI_GRECO` è un valore decimale fissato per l'esercizio; un nome letto da input può restare invariato in una singola esecuzione senza diventare una costante dichiarata. Introdurre `const` solo dopo la prima sequenza funzionante. |
| 2.04 — Operatori ed espressioni | Utili parentesi, media di tre valori e traccia delle operazioni. Le indicazioni `/`, `mod` e `×` appartengono al contesto Flowgorithm e non si trasferiscono letteralmente al C/C++. | Integrare parentesi e calcoli nella 2.02. In C++ usare `*`, `/` e `%`; spiegare con una prova che `8 / 3` con operandi interi produce `2`, mentre `8.0 / 3` produce un valore non intero. La media usa `/ 3.0`. Non dividere per zero. |
| 2.05 — Prendere decisioni | Il richiamo «Finora ... tutte le istruzioni» è superato dal laboratorio budget della 2.01. Buoni i casi positivo/zero/negativo e la gratuità fino a 12 anni compresi. L'uguaglianza `=` dei diagrammi può provocare errori nel codice. | Nuova 2.03 in C++: richiamare il budget, poi spiegare `if`, `else`, parentesi e blocchi. Separare `=` assegnazione da `==` confronto. Tenere i test di soglia, ridurre la teoria già eseguita nei diagrammi. |
| 2.06 — Condizioni composte e selezioni annidate | Corretti e utili gli esempi di OR inclusivo, intervalli e soglie. Molti confronti e strutture annidate prima di aver programmato un ciclo aumentano il carico iniziale. La sintassi `and/or/not` è presentata come scelta per Flowgorithm. | Spostare dopo il primo `while`, nella nuova 2.05. Usare `&&`, `||`, `!` come convenzione del corso C++; mantenere parentesi esplicite. Un intervallo inclusivo e un esempio a tre casi bastano nel nucleo; equivalenze e annidamenti estesi diventano approfondimenti. |
| 2.07 — Ripetere operazioni: i cicli | Buoni inizializzazione, condizione, aggiornamento, somma da 1 a N, zero iterazioni e ciclo infinito. La descrizione della vecchia roadmap prometteva anche un ciclo a conteggio, ma la pagina sviluppa soprattutto `while`. | Anticipare il nucleo nella nuova 2.04 e tradurre realmente i due esempi in C++. Conservare i casi N=0, N=1, N=4 e le previsioni prima dell'esecuzione. Introdurre `for` esplicitamente nella 2.05, evitando di considerarlo già acquisito. |

## Passaggi riscritti da usare nelle nuove lezioni

### Nuova 2.02 — Apertura e assegnazione

Nella lezione precedente hai costruito con Flowgorithm un diagramma che legge
il numero dei biglietti e il prezzo unitario, calcola il totale e lo mostra.
Ora realizzi lo stesso procedimento in C++. Il problema e i dati restano gli
stessi: cambia il modo in cui scrivi le istruzioni. Prima prevedi il risultato
con quattro biglietti da 2,50 euro; poi confrontalo con quello del programma.

Una variabile ha un nome, un tipo e un valore. L'assegnazione sostituisce il
valore conservato: in `numero = numero + 1;` si legge il valore attuale,
si aggiunge uno e si memorizza il risultato. Una variabile non diventa una
costante soltanto perché il programma non la modifica dopo l'input.

### Nuova 2.03 — Una decisione già incontrata

Nel laboratorio del budget hai già scelto fra due messaggi in base al costo.
Ora scrivi quella scelta con `if` ed `else`. Per confrontare due valori usi
`==`; per assegnare un valore a una variabile usi `=`. Prevedi prima il ramo
seguito con un budget inferiore, uguale e superiore al costo totale.

### Nuova 2.04 — Dalla sequenza alla ripetizione

Per mostrare i numeri da 1 a 5 potresti scrivere cinque istruzioni di output.
Se il limite cambia, dovresti modificare il programma. Un ciclo ripete lo stesso
gruppo di istruzioni: parte da un valore, controlla una condizione e aggiorna
il valore dopo ogni giro. Segui prima tre iterazioni a mano, poi esegui il codice.

### Nuova 2.05 — Consolidare senza moltiplicare le regole

Un `for` raccoglie inizializzazione, condizione e aggiornamento nell'intestazione.
Confrontalo con un `while` che conosci già. Solo dopo questa prova aggiungi
una condizione composta, per esempio riconoscere un numero compreso fra 10 e 20.
Con `&&` devono essere veri entrambi i confronti; con `||` ne basta almeno uno,
anche quando sono veri entrambi. Prova 9, 10, 15, 20 e 21.

## Schede operative per le cinque lezioni future

### 2.02 — Dal diagramma al primo programma

- Ripasso: leggere nel diagramma già eseguito input, calcolo e output.
- Esempio: biglietti, quantità `int` e prezzo `double`; dichiarazione,
  inizializzazione, `std::cin`, assegnazione, `std::cout` e fine istruzione.
- Spiegare il modello minimo `#include <iostream>` e `int main()` senza
  aprire un modulo generale su librerie e funzioni.
- Esercizio guidato: area e perimetro di un rettangolo.
- Esercizio autonomo: media di tre misure, con parentesi e divisore `3.0`.
- Prove: biglietti 4 × 2.5 → 10; 0 × 2.5 → 0; rettangolo 5 × 3 → area 15,
  perimetro 16; media di 6, 7, 8 → 7 e di 1, 2, 2 → circa 1.6667.
- Criterio di uscita: compilare, modificare un calcolo e spiegare ogni input.

### 2.03 — Prendere decisioni con if e else

- Ripasso: diagramma del budget e variabili del programma precedente.
- Esempio: numero positivo con `if`; budget sufficiente con `if/else`.
- Esercizio guidato: museo gratuito fino a 12 anni compresi; assumere età valida.
- Esercizio autonomo: distinguere un valore sotto una soglia da uno almeno uguale.
- Prove obbligatorie museo: 11 e 12 → gratuito; 13 → ordinario.
- Criterio di uscita: scegliere correttamente i rami e motivare `<=` e `==`.

### 2.04 — Ripetere con while

- Ripasso: una condizione e un aggiornamento di variabile.
- Esempio guidato: mostrare da 1 a 5, con uscita finale a 6.
- Laboratorio: sommare da 1 a N; input intero non negativo e piccolo.
- Esercizio autonomo: multipli positivi di 3 fino a un limite.
- Prove somma: N=0 → 0; N=1 → 1; N=4 → 10. Multipli: limite 2 → nessuno;
  limite 3 → 3; limite 10 → 3, 6, 9.
- Criterio di uscita: collocare inizializzazione e output finale fuori dal ciclo,
  aggiornamento dentro; riconoscere un ciclo che non termina.

### 2.05 — Il ciclo for e le condizioni composte

- Prima attività: tradurre il conteggio 1–5 dal `while` al `for` e confrontare
  valori e output. Tenere due brevi sessioni se il gruppo ne ha bisogno.
- Seconda attività: intervallo inclusivo, con `&&`, e valori esterni con `||`.
- Esercizio guidato: leggere N piccoli valori e contarne quelli nell'intervallo.
  Non serve un array: elaborare un valore per volta.
- Esercizio autonomo: leggere cinque numeri e contare i positivi.
- Prova: -2, 0, 4, 1, -1 → 2 positivi; estremi dell'intervallo sempre inclusi.
- Criterio di uscita: distinguere contatore del ciclo, dato letto e conteggio
  dei valori che soddisfano la condizione.

### 2.06 — Dal C++ al C e prova pratica

- Riprendere un programma numerico già funzionante, non un nuovo algoritmo.
- Confrontare `<iostream>` e `<stdio.h>`, `cin/cout` e `scanf/printf`;
  distinguere `%d` per `int` e `%lf` in `scanf` per `double`, spiegando `&`.
- Esplicitare che C e C++ sono linguaggi distinti: una traduzione richiede
  modifiche, anche quando sequenza, selezione e cicli hanno forme simili.
- Prima prova: compilare un programma autonomo C++ con input, calcolo,
  selezione e ciclo; controllare valori normali e confini.
- Seconda prova guidata: tradurre in C un esempio più breve già compreso.
- Criterio di uscita: spiegare la logica e trovare un errore con un caso di prova.
  Se la prima prova non riesce, prevedere recupero prima della traduzione in C.

## Revisione linguistica e accessibilità

Applicati HUMANIZER-IT e BLACKLIST-IT come criteri editoriali. Conservare
gli esempi concreti e le spiegazioni dei passaggi; ridurre l'accumulo di
glossario, colloquio, autoverifica e zaino quando ripetono la stessa domanda.
L'orale resta utile per spiegare un programma eseguito, non sostituisce la prova.
Ogni nuova pagina mantiene un breve ripasso, istruzioni sequenziali, soluzioni
apribili, pochi obiettivi e gli stili del progetto, senza modificare i CSS comuni.

## Stato della revisione iniziale, prima della realizzazione delle pagine

Questa è una revisione editoriale e una specifica dei nuovi laboratori.
Non sono stati compilati nuovi programmi né eseguito Flowgorithm durante
questa revisione; le schede non equivalgono a lezioni HTML pronte.
Prima di pubblicare ciascuna nuova pagina occorrerà compilare ed eseguire
gli esempi nell'ambiente della classe e provare la pagina nei due temi.

Per la distinzione fra divisione intera e reale e per `%` è stata consultata
la [documentazione degli operatori C++ di Microsoft](https://learn.microsoft.com/en-us/cpp/cpp/multiplicative-operators-and-the-modulus-operator?view=msvc-170).
Il piano usa valori piccoli e input validi nei primi esempi; il controllo
completo degli input non è un prerequisito per la prima sequenza.

## Allineamento del repository

`main` sostituisce il ramo `pubblicazione` come sorgente Pages. La storia
precedente è conservata tramite merge, senza riscriverla. L'allineamento iniziale
ha ripristinato i file pubblicati, poi questo intervento aggiorna solo regole Git,
roadmap, obiettivi, raccordo finale della 2.01 e mappa dei futuri slug nel 404.
Fotografie, crediti, mappe e corpo della 2.01 sono conservati.
Le modifiche locali del docente al benvenuto e `ROADMAP.zip` restano escluse.
Il ramo `develop` non viene modificato.


## Realizzazione e pubblicazione delle pagine — 28 ottobre 2026

Le specifiche di questo documento sono state applicate alle nuove lezioni
2.02–2.06. Le cinque pagine sostituiscono didatticamente le sei bozze precedenti
2.02–2.07: non esiste una nuova 2.07 nel percorso abbreviato.

Sono disponibili programmi completi scaricabili, laboratori, esercizi autonomi,
soluzioni apribili e autoverifiche. Il rapporto
[pubblicazione-programmazione.md](pubblicazione-programmazione.md) documenta
la compilazione dei 19 sorgenti, i 62 test e i controlli delle pagine.
Le limitazioni della precedente sezione descrivono la fase iniziale del piano,
non lo stato delle pagine realizzate successivamente.
