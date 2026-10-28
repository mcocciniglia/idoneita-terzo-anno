# Lezioni di programmazione di base — 28 ottobre 2026

## Contenuti realizzati

Le nuove lezioni seguono la roadmap abbreviata per una terza del liceo scientifico:

| Lezione | Contenuto | Origine della revisione |
|---|---|---|
| 2.02 | Primo programma C++, variabili, assegnazione, espressioni, input/output | Accorpa le vecchie 2.02, 2.03 e 2.04, collegandosi alla 2.01 realmente pubblicata |
| 2.03 | Selezione semplice e doppia, confronto, soglie | Rielabora la vecchia 2.05 in codice C++ |
| 2.04 | While, controllo, contatore, accumulatore, zero iterazioni | Anticipa la vecchia 2.07 sui cicli |
| 2.05 | For, bool, AND/OR/NOT, selezione nel ciclo | Riprende il nucleo della vecchia 2.06 e introduce esplicitamente il for |
| 2.06 | Prova pratica C++, traduzione guidata in C, scanf/printf | Completa il nuovo obiettivo operativo senza introdurre array o programmazione a oggetti |

Il percorso arriva alla 2.06: la vecchia 2.07 non è stata dimenticata ma confluisce
nella nuova 2.04. Le bozze originali restano nella cronologia Git precedente
all'allineamento di main; una copia consultabile è conservata nella cartella
di lavoro del docente `_allineamento-idoneita/bozze-precedenti`.

Ogni pagina riprende la lezione precedente e comprende obiettivi, esempio
concreto, spiegazione, laboratorio, esercizio autonomo, soluzioni apribili,
casi di prova, autoverifica e zaino dello studente. I sorgenti mostrati nelle
pagine corrispondono ai file scaricabili. Il primo programma si avvia dalla 2.02.

## Correzioni e scelte didattiche

- Il ripasso della 2.02 riconosce il laboratorio Flowgorithm già svolto.
- Variabile non modificata e costante dichiarata vengono distinte; PI_GRECO
  è presentato come approssimazione decimale, eliminando il vecchio riferimento
  incongruente ad ALIQUOTA_IVA.
- Divisione intera e reale sono confrontate con un programma compilabile;
  l'assegnazione a double non cambia retroattivamente una divisione fra interi.
- Assegnazione `=` e confronto `==` sono distinti prima delle selezioni.
- Per i cicli sono provate zero, una e più iterazioni; il for è insegnato
  esplicitamente dopo il while.
- Il passaggio al C usa un problema già compreso e chiarisce `%d`, `%lf`,
  `&`, risultato di scanf e formattazione in printf.
- Le letture C non riuscite fanno terminare il programma con codice 1.
  I normali esempi C++ assumono input numerici validi negli intervalli indicati;
  il controllo completo degli input è rinviato e non viene dichiarato acquisito.

## File e navigazione

Cinque nuove cartelle di lezione, ciascuna con `index.html` e sottocartella
`codice/`; 19 sorgenti `.cpp`/`.c`. Aggiornati homepage (sei lezioni del secondo
anno e relativi collegamenti), roadmap, rapporto di revisione e raccordo finale
della 2.01. La 404 riconosceva già gli slug del nuovo percorso e resta invariata.
La 2.06 è l'ultima lezione: il pulsante finale rimanda alla propria prova pratica,
senza inventare una 2.07 futura.

Il corpo didattico della 2.01 e i relativi download, mappe e immagini sono
conservati; cambia soltanto il raccordo che ora indica la 2.02 disponibile.
Le quattro lezioni del primo anno e i materiali integrativi restano invariati.
Nessuna modifica al benvenuto o ai file personali del docente.

Nessuna nuova immagine, libreria o script. I fogli di stile esistenti restano
invariati. Il nuovo `assets/programmazione.css`, caricato solo dalle cinque
nuove pagine, contiene regole circoscritte ai blocchi di codice: scorrimento
interno, gestione delle parole lunghe e indicatore di focus da tastiera.
Non introduce un tema o un sistema grafico diverso.

## Verifiche effettuate prima del commit

- GNU GCC/G++ 13.1.0 già installato con Qt, C++17 e C11: 19 sorgenti compilati
  con `-Wall -Wextra -Werror -pedantic`, senza avvisi.
- 59 casi con input validi e 3 casi di input non numerico nei programmi C:
  62 prove superate. Controllati output, codice di uscita e terminazione.
- Tag HTML bilanciati, un h1 per pagina, ID univoci, riferimenti ARIA,
  collegamenti relativi e ancore delle cinque nuove lezioni e della homepage.
  Nessuna nuova anomalia strutturale o nei collegamenti; la verifica non è
  una certificazione completa W3C/WCAG.
- Corrispondenza letterale fra programmi completi visualizzati e sorgenti
  scaricabili; conservazione degli asset comuni e del corpo della 2.01.
- Browser integrato: cinque pagine a 1280 e 320 pixel, ciascuna in chiaro e
  scuro, per 20 combinazioni. Nessuno scorrimento orizzontale dell'intera pagina;
  il codice lungo può scorrere all'interno del proprio riquadro.
- Soluzione apribile provata nella 2.02. I controlli dei due temi aggiornano
  correttamente colori e stato. Contrasto alto e navigazione 2.06 → 2.05 → 2.06 provati. Numerazione delle istruzioni con elenchi HTML
  ordinati, evitando il doppio contatore della classe steps ereditata.

I dettagli delle esecuzioni sono conservati nella cartella di lavoro
`_pubblicazione-programmazione`, senza pubblicare eseguibili, compilatori
o script intermedi. Gli esempi sono stati verificati con MinGW su Windows;
il primo avvio nell'ambiente specifico della classe resta un'attività guidata
dal docente. Il compilatore isolato inizialmente predisposto non è stato usato
per i test finali e non è stato installato nel sistema.

## Riferimenti tecnici consultati

- [If/else C++ — Microsoft](https://learn.microsoft.com/en-us/cpp/cpp/if-else-statement-cpp?view=msvc-170)
- [While C++ — Microsoft](https://learn.microsoft.com/en-us/cpp/cpp/while-statement-cpp?view=msvc-170)
- [Formati scanf — Microsoft](https://learn.microsoft.com/en-us/cpp/c-runtime-library/format-specification-fields-scanf-and-wscanf-functions?view=msvc-170)

Il resoconto finale della chat riporta il commit e l'esito effettivo di GitHub
Pages. I controlli locali, da soli, non attestano la pubblicazione online.
