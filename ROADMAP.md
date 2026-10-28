# ROADMAP.md

# Corso di Informatica
## Preparazione all'Esame di Idoneità alla Classe Terza

---

# Scopo

Questo documento descrive la struttura del corso e la sequenza degli argomenti.

Serve come riferimento per il docente e per gli agenti AI affinché le lezioni vengano sviluppate seguendo un percorso progressivo, senza anticipare argomenti previsti nelle lezioni successive.

Ogni nuova lezione deve essere coerente con questa roadmap.

---

# Stato del progetto

Legenda

- ✅ Completata
- 🟡 In lavorazione
- ⚪ Da realizzare
- 🔵 Facoltativa
- 🔴 Da revisionare

---

# Introduzione

| N. | Lezione | Stato | Note |
|----|----------|--------|------|
| 00 | Benvenuto | ✅ | Presentazione del corso e modalità di utilizzo |

---

# Primo anno

| N. | Lezione | Stato | Dipende da | Note |
|----|----------|--------|------------|------|
| 01 | Che cos'è l'informatica | ✅ | 00 | Concetti fondamentali, dato, informazione, elaborazione |
| 02 | Rappresentazione dell'informazione | ✅ | 01 | Sistema binario, bit, byte, conversioni |
| 03 | Il software: i programmi del computer | ✅ | 02 | Software di base e applicativo |
| 04 | Hardware | ✅ | 03 | Componenti principali del computer |
| 05 | Sistema operativo | ⚪ | 04 | Funzioni principali |
| 06 | File e cartelle | ⚪ | 05 | Organizzazione dei dati |
| 07 | Memorie | ⚪ | 03 | RAM, ROM, SSD, HDD |
| 08 | CPU | ⚪ | 03 | Architettura di base |
| 09 | Periferiche | ⚪ | 03 | Input, output e I/O |
| 10 | Reti informatiche | ⚪ | 06 | Concetti introduttivi |
| 11 | Internet e Web | ⚪ | 10 | Servizi Internet |
| 12 | Sicurezza informatica | ⚪ | 11 | Password, malware, phishing |
| 13 | Sistemi di numerazione | ⚪ | 02 | Binario, decimale, esadecimale |
| 14 | Codifica dei caratteri | ⚪ | 13 | ASCII e Unicode |
| 15 | Immagini digitali | ⚪ | 13 | Pixel, risoluzione, colore |
| 16 | Audio digitale | ⚪ | 13 | Campionamento e qualità |
| 17 | Video digitale | ⚪ | 15-16 | Compressione e codec |
| 18 | Ripasso generale | ⚪ | Tutte | Consolidamento |

---

# Secondo anno

## Pubblicazione attuale

GitHub Pages usa il ramo `main`, cartella `/`. La base editoriale è la versione
effettivamente pubblicata al commit `a5679c431903e6b4db114fe83ad61056a689b595`:
lezioni 01–04 del Primo anno e 2.01 del Secondo anno. Il 28 ottobre 2026 il percorso è stato completato con le nuove 2.02–2.06, ricavate dalla revisione delle vecchie bozze 2.02–2.07. I testi già rivisti,
le fotografie, le mappe e i materiali pubblicati restano il riferimento.
Le lezioni 05–18 del Primo anno non sono prerequisiti del percorso operativo.

## Obiettivo operativo e scelta del linguaggio

Il livello è la programmazione di base per una classe terza del liceo scientifico.
L'obiettivo è leggere, scrivere, eseguire e correggere piccoli programmi da console,
spiegando input, elaborazione, output e casi di prova.

Si parte con C++ procedurale: `int`, `double`, variabili, `std::cin`,
`std::cout`, espressioni, `if/else`, `while` e `for`. Si usa uno stesso
ambiente di compilazione predisposto dal docente. Il C viene confrontato con il
C++ dopo le prime competenze operative, traducendo un programma già compreso:
non si alternano due sintassi di input/output durante il primo apprendimento.
Il collegamento al C presente nella 2.01 resta valido come prospettiva del percorso.

Flowgorithm serve per progettare o chiarire un passaggio difficile; non occorre
riscrivere ogni esercizio in tre rappresentazioni. Test e tracce dei valori
accompagnano tutte le lezioni. L'esposizione orale segue una prova pratica.

## Sequenza essenziale

✅ indica una lezione disponibile. ⚪ indica una lezione prevista e non pubblicata,
anche quando esistono bozze precedenti. I tempi sono indicativi e comprendono
esercizi e verifica; si procede quando lo studente svolge il compito indicato.

| Codice | Lezione | Stato | Dipende da | Compito verificabile |
|--------|---------|-------|------------|----------------------|
| 2.01 | Dal problema all'algoritmo | ✅ | 01–04 | Analizzare un problema ed eseguire i diagrammi del laboratorio pubblicato |
| 2.02 | Dal diagramma al primo programma | ✅ | 2.01 | Compilare un programma C++ che legge due dati e calcola un risultato; distinguere assegnazione e calcolo; circa 2 ore |
| 2.03 | Prendere decisioni con if e else | ✅ | 2.02 | Scrivere una selezione semplice e doppia; distinguere = e ==; provare entrambi i rami e la soglia; circa 2 ore |
| 2.04 | Ripetere con while | ✅ | 2.03 | Usare inizializzazione, condizione, aggiornamento e accumulatore; provare zero, una e più iterazioni; circa 2 ore |
| 2.05 | Il ciclo for e le condizioni composte | ✅ | 2.04 | Riscrivere un conteggio con for; usare &&, || e ! in condizioni semplici; distinguere ciclo e selezione; circa 2 ore, divisibili in due incontri |
| 2.06 | Dal C++ al C e prova pratica | ✅ | 2.05 | Tradurre un piccolo programma numerico usando printf/scanf e spiegare cosa cambia; completare una prova autonoma con test; circa 2 ore, con recupero se necessario |

Il percorso ufficiale della 2.02 resta `secondo-anno/02-rappresentare-un-algoritmo/`
per conservare i collegamenti già pubblicati. I percorsi successivi sono:
`03-decisioni-if-else/`, `04-ripetere-con-while/`,
`05-for-condizioni-composte/` e `06-dal-cpp-al-c-prova-pratica/`.
Tutti sono relativi a `secondo-anno/` e sono registrati nel fallback 404.

## Revisione delle bozze precedenti

La revisione didattica delle vecchie 2.02–2.07 è documentata in
[docs/revisione-secondo-anno.md](docs/revisione-secondo-anno.md).
Le bozze restano recuperabili nella cronologia precedente all'allineamento;
non sono state ripubblicate nella vecchia forma. La loro revisione è confluita nelle nuove lezioni operative 2.02–2.06, ora disponibili.

Le vecchie 2.02, 2.03 e 2.04 confluiscono nella nuova 2.02: i simboli già usati
in Flowgorithm diventano un richiamo breve, mentre variabili, assegnazione ed
espressioni vengono applicate subito a un programma. La vecchia 2.05 alimenta
la nuova 2.03; il nucleo della vecchia 2.07 anticipa la vecchia 2.06 e diventa
la nuova 2.04. Condizioni composte e for seguono nella 2.05.

Non serve una lezione separata sui test prima di programmare: previsione,
esecuzione e confronto fanno parte di ogni laboratorio fin dalla 2.01.
Foglio elettronico, ripassi estesi di hardware e reti e approfondimenti sulle
rappresentazioni restano percorsi di recupero o complementari, senza bloccare
l'avvio della programmazione. Privacy, sicurezza e diritto d'autore mantengono
il loro valore formativo e potranno essere sviluppati separatamente.

Array, funzioni definite dallo studente, puntatori come argomento autonomo,
classi, ereditarietà, memoria dinamica e librerie avanzate sono rinviati.
L'uso iniziale di `main` non richiede una lezione generale sulle funzioni.
Nella traduzione in C si spiega il ruolo di `&` negli input numerici, senza
anticipare un modulo sulla gestione della memoria.

## Controlli per la pubblicazione

Ogni pagina deve essere riscritta rispetto alla 2.01 effettivamente online,
conservando stile, accessibilità e mappe utili. Deve comprendere un esempio
completo, un esercizio guidato, un esercizio autonomo, risultati attesi e casi
di confine. I programmi vanno compilati ed eseguiti prima di considerarli pronti.
Una bozza o una revisione del piano non autorizza a segnare la lezione come pubblicata.

---

# Simulazioni d'esame

| N. | Attività | Stato |
|----|----------|--------|
| S1 | Simulazione completa | ⚪ |
| S2 | Simulazione con tempo | ⚪ |
| S3 | Recupero competenze | ⚪ |

---

# Regole di progettazione

Ogni nuova lezione deve:

- rispettare la progressione degli argomenti;
- non anticipare contenuti previsti nelle lezioni successive;
- richiamare, quando opportuno, i concetti già affrontati;
- utilizzare la stessa struttura grafica e didattica delle lezioni precedenti.

---

# Gestione dello stato

Quando una lezione viene completata:

- aggiornare lo stato nella tabella;
- verificare che la navigazione sia coerente;
- aggiornare eventuali riferimenti nelle lezioni successive.

---

# Note

La roadmap è un documento dinamico e può essere aggiornata nel corso dello sviluppo del progetto.

Eventuali modifiche alla sequenza degli argomenti devono essere valutate prima di creare nuove lezioni.
## Materiale integrativo

Il materiale integrativo consolida argomenti già affrontati e rimane separato
dalla progressione numerata delle lezioni.

| Codice | Materiale | Collegato a | Stato | Contenuti |
|--------|-----------|-------------|-------|-----------|
| Q01 | Quaderno di allenamento – Sistemi di numerazione | Lezione 02 | ✅ | Conversioni, addizioni e sottrazioni binarie; nelle sottrazioni il minuendo è sempre maggiore o uguale al sottraendo; divisioni binarie non comprese |
| Q02 | Quaderno di allenamento – Hardware e software | Lezioni 03 e 04 | ✅ | Distinzione e collaborazione tra hardware e software; input, elaborazione e output |

## Mappe concettuali pubblicate

| Codice | Mappa | Collegata a | Stato |
|--------|-------|-------------|-------|
| M04 | Dal problema all'algoritmo | Lezione 2.01 | ✅ |

La Lezione 2.01 conserva anche la mappa visuale del percorso in sei fasi, con
lettura testuale equivalente. Le immagini originali di `main` sono mantenute.
