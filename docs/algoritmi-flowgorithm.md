# Lezione 2.01 — Algoritmi e laboratorio Flowgorithm

Revisione del 23 ottobre 2026.

## Sorgente e perimetro

- Repository: `mcocciniglia/idoneita-terzo-anno`, checkout locale `C:/Github/idoneita-terzo-anno`.
- GitHub Pages usa `pubblicazione`, cartella `/`; base del lavoro `d57a291`.
- Recuperata la lezione già generata `secondo-anno/01-dal-problema-all-algoritmo/index.html` dal ramo locale `main`, commit `2d2a794`.
- Primo anno: pubblicate soltanto le lezioni 01–04. Nessuna importazione delle lezioni successive da `main`.
- Non coinvolti i repository «lezioni» o quelli didattici 2026/27.
- Letti AGENTS.md, ROADMAP.md, PROGETTO.md, documentazione dei componenti, report Hardware e pagine delle prime quattro lezioni. Applicati HUMANIZER-IT e BLACKLIST-IT locali.
- Il divieto generale di commit/push contenuto in AGENTS.md è superato, per questo incarico, dall'esplicita richiesta corrente del docente di pubblicare con commit/push. Le altre regole del progetto restano applicate.

## Modifiche didattiche

La lezione mantiene il nucleo originale: analisi del problema, obiettivo, input,
output atteso, risultato ottenuto, vincoli, ordine, ambiguità, esempi del compito
e dei biglietti, attività quotidiane, domande orali e Zaino dello studente.
Il ripasso iniziale si collega alle lezioni 01–04 effettivamente pubblicate.

La definizione di algoritmo chiarisce che istruzioni e percorsi possono comprendere
sequenze, scelte e ripetizioni. La proprietà di correttezza è riferita agli input
ammessi; si precisa che pochi test riusciti non dimostrano tutti i casi possibili.

Aggiunti un percorso da 120 minuti con pausa, una sequenza iniziale di due messaggi,
due laboratori passo per passo (costo dei biglietti e budget), dichiarazione e tipi,
input/output, assegnazione, selezione, tracce dei valori, casi normali e al confine,
cinque esercizi progressivi con suggerimenti e soluzioni, un'iterazione facoltativa,
errori frequenti, verifica di sei quesiti e criteri per il recupero, consegna e ripasso
distribuito. Il collegamento al C resta concettuale, senza sintassi del linguaggio.
Gli esempi quotidiani aggiuntivi sono indicati come ripasso facoltativo o a casa.

Tre soluzioni scaricabili in `flowgorithm/`: `01-sequenza.fprg`, `02-biglietti.fprg`,
`03-budget.fprg`, formato XML Flowgorithm 2.11. Si assumono input validi e valori
piccoli: non vengono anticipati controllo completo degli input o gestione monetaria
di applicazioni reali.

Ripristinate le due mappe originali di `main`: il percorso in sei fasi nella
lezione e la mappa concettuale M04 nella propria pagina. L'elenco equivalente
delle sei fasi resta disponibile in un riquadro apribile. Le due immagini sono
copiate senza modifiche dai file già presenti nel repository; non vengono
introdotte immagini esterne. La M04 conserva la trascrizione testuale originale.

## Navigazione e file

1. `secondo-anno/01-dal-problema-all-algoritmo/index.html`: lezione recuperata e integrata.
2. Tre file `.fprg` nella relativa sottocartella `flowgorithm/`.
3. `index.html`: aggiunta la sola 2.01 in una sezione distinta; conteggio del Primo anno fermo a quattro.
4. `Primo-anno/04-hardware/index.html`: collegamento alla 2.01 e breve raccordo finale coerente, con la 05 ancora in preparazione.
5. `ROADMAP.md`: stato pubblico, prerequisiti e breve descrizione del laboratorio.
6. `404.html`: aggiunto il riconoscimento esatto degli slug 2.01 e 2.02; quest'ultima resta in preparazione.
7. `docs/algoritmi-flowgorithm.md`: questo report.

CSS e JavaScript comuni invariati; nessuna nuova libreria. Riutilizzati i componenti
esistenti, inclusa la correzione della numerazione dei passi già presente nel CSS.
Le schede sostituiscono le tabelle larghe per consentire la lettura a 320 pixel senza
tagli o scorrimento orizzontale. Conservato il footer didattico della lezione originale:
«Docente: Prof. Marco Cocciniglia — Laboratorio di Tecnologie Informatiche.»

## Verifiche eseguite

- Controllo dei tag HTML bilanciati, attributi e identificatori non duplicati, gerarchia dei titoli, riferimenti ARIA, percorsi relativi e ancore dei file modificati. Nessun errore strutturale rilevato; non è una certificazione W3C/WCAG completa.
- Tutti i collegamenti locali della nuova lezione risolti, salvo il percorso intenzionale della 2.02, gestito dal 404 comune. Nessun richiamo a pagine non pubblicate del Primo anno. La mappa M04 è pubblicata e collegata in entrambe le direzioni.
- Inventario dei file pubblicabili: esattamente quattro lezioni del Primo anno e una del Secondo anno. Lezioni 01–03, fotografie Hardware, CSS e script invariati.
- Chrome: homepage, Hardware e 2.01 provate a 1280, 390 e 320 pixel, in chiaro e scuro (18 combinazioni). Nessun elemento fuori schermo né scorrimento orizzontale; nessun errore JavaScript. Ispezione visiva di testata, laboratorio e schermo stretto in scuro.
- Pulsanti tema e contrasto, apertura delle soluzioni e salto al contenuto da tastiera controllati. Usate copie dei CSS/JS effettivamente pubblicati in `common`; font esterni esclusi dalla prova e caratteri di riserva attivi.
- Fallback provato per la 2.02 con e senza `index.html` e per la 05 del Primo anno. Percorsi sconosciuti e file mancanti restano veri 404.
- XML dei tre file `.fprg` analizzato. Eseguite le istruzioni effettive dei file con un interprete di controllo limitato alle forme usate: sequenza, quattro casi dei biglietti e sei casi del budget, inclusi uguaglianza, zero, decimali e prova della verifica individuale. Tutti gli undici scenari rispettano gli output previsti.

## Limiti e modifiche locali preesistenti

Flowgorithm non è stato eseguito come applicazione nativa su questo computer:
la verifica XML/logica non sostituisce l'apertura nell'installazione della classe.
Prima dell'uso in aula aprire i tre file e ripetere le prove indicate nella pagina.
Le etichette dei menu possono variare con lingua e versione.

La modifica locale già presente in `introduzione/00-benvenuto/index.html` e il file
non tracciato `ROADMAP.zip` sono esclusi dal commit. La pagina di benvenuto pubblicata
conserva quindi il suo precedente riferimento al C++; la nuova lezione descrive il C
come studio futuro, secondo la richiesta corrente. La scelta di non intervenire su
quel passaggio evita di sovrascrivere la revisione locale del docente.

Il resoconto finale della sessione riporta commit, push e stato effettivo del deploy;
un controllo locale riuscito, da solo, non conferma la pubblicazione.

## Riferimenti tecnici

Consultata la documentazione ufficiale di Flowgorithm per
[forme](https://www.flowgorithm.org/documentation/index.html),
[dichiarazione](https://www.flowgorithm.org/documentation/declare.html),
[input](https://www.flowgorithm.org/documentation/input.html),
[assegnazione](https://www.flowgorithm.org/documentation/language/assignment.html),
[selezione](https://www.flowgorithm.org/documentation/if.html),
[tipi](https://www.flowgorithm.org/documentation/language/types.html) e
[operatori](https://flowgorithm.org/documentation/operators.html).

## Ripristino delle mappe originali — 23 ottobre 2026

La precedente pubblicazione aveva sostituito la mappa nella lezione con un elenco
e omesso il collegamento alla M04. Le mappe hanno una funzione didattica di
organizzazione dei concetti e ripasso: sono ripristinate, senza modificare il
laboratorio, gli esercizi, i file Flowgorithm o le altre lezioni.

File interessati: lezione 2.01; le due immagini originali; pagina M04 e indice
delle mappe; ROADMAP.md; questo report. L'indice espone soltanto la M04, senza
pubblicare altre mappe o lezioni del Primo anno.

Nella pagina M04 una nota esplicita la distinzione fra controllo della soluzione
prima dell'applicazione e confronto fra risultato ottenuto e output atteso dopo
l'esecuzione. L'immagine e la trascrizione originali restano intatte.

Le due pagine riutilizzano CSS/JS comuni e la classe responsiva `figure`. Le mappe
si aprono anche a dimensione completa; sono indicati dimensioni, alt e didascalie.
Nessuna modifica ai CSS comuni e nessun nuovo script.

Verifiche del ripristino: tag, identificatori, ARIA, ancore e link locali senza
errori; immagini identiche byte per byte a `main`; trascrizione originale M04
e contenuti del laboratorio invariati. Chrome: lezione, M04 e indice mappe a
1280, 390 e 320 pixel in entrambi i temi, immagini caricate e nessun elemento
fuori schermo. Le didascalie ereditano il colore del tema, evitando il grigio
fisso della classe comune `caption` sul fondo scuro. Peso originale complessivo
delle mappe: 3.40 MB, conservato per non alterare le immagini e il testo incorporato.

- `secondo-anno/01-dal-problema-all-algoritmo/assets/dal-problema-all-algoritmo.png`: 1536 × 1024 pixel, 1,606,750 byte; SHA-256 `ae483471b8d9e1c92b832f80c4935309b83f5aed7ccd8c8cabc715844af2bc0d`.

- `Mappe-concettuali/secondo-anno/dal-problema-all-algoritmo/mappa-dal-problema-all-algoritmo.png`: 1402 × 1122 pixel, 1,796,016 byte; SHA-256 `df42b732a824c17b737aa94ca356cbeb5b67d3fc11fe101171140a0685914395`.
