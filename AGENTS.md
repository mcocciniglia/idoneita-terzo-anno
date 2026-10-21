# AGENTS.md

# Checklist iniziale

Prima di creare o modificare qualsiasi file verificare di aver completato tutti i seguenti passaggi.

☐ Ho letto AGENTS.md

☐ Ho letto PROGETTO.md

☐ Ho letto ROADMAP.md

☐ Ho consultato l'eventuale documentazione presente nella cartella `docs/`

☐ Ho analizzato la lezione precedente

☐ Ho verificato che il lavoro richiesto sia coerente con la roadmap

☐ Ho verificato se esistono collegamenti da aggiornare

☐ Ho verificato se homepage, introduzione o roadmap richiedono aggiornamenti

☐ Ho identificato se il contenuto richiesto è una lezione, un materiale integrativo o una simulazione

☐ Ho verificato che l'eventuale materiale integrativo consolidi esclusivamente argomenti già affrontati

---

# Corso di Informatica – Esame di Idoneità alla Classe Terza

## Scopo

Questo documento contiene le regole operative che ogni agente AI deve seguire quando crea o modifica file all'interno del progetto.

Le istruzioni presenti in questo documento hanno priorità rispetto agli altri documenti del repository.

---

# Documenti da analizzare

Prima di iniziare qualsiasi attività leggere nell'ordine:

1. AGENTS.md
2. ROADMAP.md
3. PROGETTO.md
4. Documentazione presente nella cartella `docs/`
5. La lezione precedente

Se esistono conflitti tra i documenti prevale sempre AGENTS.md.

---

# Struttura del repository

Il repository può contenere:

- lezioni del percorso didattico;
- materiali integrativi;
- simulazioni e verifiche;
- documentazione di progetto.

Ogni lezione e ogni risorsa destinata agli studenti deve essere contenuta in una propria cartella.

Ogni cartella contiene come pagina principale:

\```text
index.html
\```

Le lezioni e i materiali integrativi devono rimanere chiaramente distinti.

I collegamenti interni al repository devono essere relativi.

Non utilizzare URL assoluti per collegare pagine appartenenti al repository.
---

# Creazione di una nuova lezione

Prima di creare una nuova lezione l'agente deve:

- analizzare attentamente la lezione precedente;
- mantenere la stessa struttura HTML;
- mantenere lo stesso stile grafico;
- mantenere lo stesso livello di approfondimento;
- utilizzare esclusivamente i CSS del progetto;
- rispettare gli obiettivi previsti dalla roadmap.

Ogni nuova lezione deve risultare una naturale prosecuzione delle precedenti.

---

# Continuità didattica

Ogni nuova lezione deve iniziare richiamando in modo naturale e sintetico i concetti fondamentali appresi nella lezione precedente.

Il richiamo deve:

- recuperare i prerequisiti;
- creare continuità nel percorso;
- preparare i nuovi argomenti.

Il ripasso iniziale deve richiedere circa 2–5 minuti di lettura.

Ogni nuovo concetto importante deve essere introdotto prima attraverso uno o più esempi concreti e solo successivamente mediante la definizione teorica.

La lezione deve concludersi preparando naturalmente quella successiva.

---

---

# Materiale integrativo

Il repository può contenere materiali destinati al consolidamento degli argomenti già affrontati.

Rientrano nel materiale integrativo:

- quaderni di allenamento;
- esercizi guidati;
- raccolte di esercizi;
- formulari;
- mappe riassuntive;
- attività di ripasso.

Il materiale integrativo:

- non costituisce una nuova lezione;
- non deve modificare la sequenza numerata delle lezioni;
- non deve introdurre argomenti non ancora affrontati;
- deve indicare chiaramente la lezione o l'argomento di riferimento;
- deve proporre attività graduate dal livello più semplice a quello più complesso;
- deve contenere soltanto la teoria strettamente necessaria allo svolgimento degli esercizi;
- deve rispettare le stesse regole grafiche, linguistiche e di accessibilità delle lezioni.

Un quaderno di allenamento può contenere:

1. una breve introduzione;
2. un richiamo teorico essenziale;
3. uno o più esempi guidati;
4. esercizi graduati;
5. esercizi misti o una breve autoverifica;
6. soluzioni, quando previste.

Prima di creare un materiale integrativo, l'agente deve analizzare la lezione alla quale esso è collegato.
# Coerenza del repository

Al termine della realizzazione di una nuova lezione l'agente deve verificare la coerenza dell'intero percorso.

In particolare deve controllare:

- la lezione precedente;
- la lezione successiva (se esiste);
- ROADMAP.md;
- l'introduzione del corso;
- la homepage e l'indice delle lezioni.
- l'eventuale indice dei materiali integrativi;
- i collegamenti tra la lezione di riferimento e il relativo materiale di allenamento.

I file devono essere modificati esclusivamente quando necessario.

Se risultano già coerenti non devono essere riscritti.

---

# HTML

Utilizzare HTML5 semantico.

Preferire:

- header
- nav
- main
- section
- article
- aside
- footer

Evitare codice duplicato.

Non utilizzare CSS inline salvo esplicita richiesta.

---

# CSS

Utilizzare esclusivamente il foglio di stile del progetto.

Non modificare i CSS comuni senza autorizzazione.

Non introdurre framework CSS esterni.

---

# JavaScript

Non introdurre JavaScript se non strettamente necessario.

Preferire sempre soluzioni HTML e CSS.

---

# Accessibilità

Ogni pagina deve rispettare le linee guida del progetto.

In particolare:

- HTML semantico;
- struttura chiara;
- titoli gerarchici;
- immagini con attributo `alt`;
- istruzioni sequenziali;
- compatibilità con tema chiaro e tema scuro.

Ogni pagina deve poter essere letta facilmente anche da studenti con DSA.

---

# Navigazione

Ogni lezione deve contenere:

- collegamento alla lezione precedente;
- collegamento all'indice del corso;
- collegamento alla lezione successiva.

Anche se la lezione successiva non è ancora pubblicata, il collegamento deve
puntare al percorso reale previsto per quella lezione. Il fallback viene
gestito dalla pagina `404.html`.

I materiali integrativi devono contenere almeno:

- collegamento alla pagina o alla lezione di riferimento;
- collegamento all'indice dei materiali integrativi;
- collegamento alla homepage del corso.

I materiali integrativi non devono utilizzare la numerazione progressiva delle lezioni.

## Collegamenti a contenuti non ancora disponibili

I collegamenti di navigazione tra lezioni devono puntare sempre ai percorsi
reali previsti, anche quando la destinazione non è ancora pubblicata. Non
inserire manualmente nei pulsanti di navigazione collegamenti alla pagina
placeholder.

Il fallback per una lezione prevista ma non ancora pubblicata è gestito dalla
pagina personalizzata `404.html` di GitHub Pages. Questa pagina riconosce
esclusivamente gli slug ufficiali delle lezioni presenti nella roadmap e
reindirizza a:

`in-costruzione/index.html`

La pagina comune può ricevere i parametri `lezione` e `titolo` per
personalizzare il messaggio mostrato allo studente.

Un URL che non corrisponde esattamente a uno slug ufficiale deve rimanere un
vero errore 404. File mancanti, immagini mancanti, percorsi generici e nomi
scritti in modo errato non devono essere interpretati come lezioni in
preparazione.

Quando si aggiunge o si modifica una lezione nella roadmap, verificare che la
mappa degli slug ufficiali in `404.html` rimanga coerente.

Non creare pagine placeholder duplicate per ogni singola lezione, salvo
richiesta esplicita del docente.
---

# Cosa NON modificare

Salvo esplicita richiesta dell'utente l'agente NON deve:

- modificare altre lezioni, salvo piccoli aggiornamenti strettamente necessari per mantenere la continuità didattica o la correttezza dei collegamenti;
- rinominare cartelle;
- modificare la struttura del repository;
- modificare i CSS comuni;
- introdurre librerie esterne;
- modificare la navigazione generale;
- modificare ROADMAP.md se non è necessario per mantenere la coerenza con il contenuto effettivo delle lezioni.
- trasformare un materiale integrativo in una lezione numerata senza esplicita richiesta;
- introdurre nel materiale integrativo contenuti non ancora affrontati nel percorso;
---

# Controlli finali

Prima di terminare verificare sempre:

- validità HTML;
- correttezza dei percorsi relativi;
- funzionamento dei collegamenti;
- compatibilità con tema chiaro e tema scuro;
- correttezza ortografica;
- coerenza con la lezione precedente;
- coerenza con la roadmap;
- coerenza dei collegamenti tra le lezioni;
- eventuale necessità di aggiornare homepage, introduzione e roadmap.
- chiara distinzione tra lezione e materiale integrativo;
- coerenza del materiale integrativo con la lezione di riferimento;
- assenza di argomenti non ancora affrontati;

Se un file risulta già corretto non deve essere modificato.

---

# Regola finale

L'agente deve privilegiare la coerenza dell'intero progetto rispetto all'introduzione di nuove soluzioni.

Ogni modifica deve mantenere la continuità didattica dell'intero percorso, evitando incongruenze tra anticipazioni, richiami e collegamenti tra le lezioni.

In caso di dubbio l'agente deve seguire la struttura delle lezioni già presenti oppure chiedere conferma all'utente prima di introdurre modifiche sostanziali.
---

# Gestione del repository Git

L'agente non deve eseguire operazioni Git.

In particolare non deve:

- eseguire commit;
- eseguire push;
- creare branch;
- creare tag;
- effettuare merge;
- modificare la configurazione Git del repository;
- creare Pull Request.

L'agente deve limitarsi esclusivamente alla modifica dei file richiesti.

Le operazioni Git vengono sempre eseguite manualmente dal docente dopo la revisione delle modifiche.


---

# Immagini didattiche con licenze aperte

Queste regole si applicano alle immagini aggiunte o sostituite nelle lezioni e nei materiali integrativi. Mantengono validi i vincoli precedenti su struttura, CSS comuni e operazioni Git.

## Scelta e verifica della fonte

- Inserire immagini che aiutino a riconoscere un oggetto, comprendere un concetto o svolgere un’attività. Preferire fotografie reali quando occorre riconoscere componenti fisici; evitare decorazioni e immagini pubblicitarie.
- Usare soltanto risorse con CC0, CC BY o CC BY-SA verificabili. CC0 è uno strumento di dedica al pubblico dominio; mantenere comunque i crediti per scelta editoriale. Non assimilare automaticamente altre dichiarazioni di pubblico dominio a CC0.
- Preferire Wikimedia Commons o archivi con una pagina dedicata al singolo file. Aprire tale pagina e controllare autore, fonte originaria, licenza esatta, versione, eventuale giurisdizione e richieste di attribuzione. I risultati di ricerca, le categorie, il piè di pagina del sito e l’URL diretto dell’immagine non dimostrano la licenza del file.
- Non inventare autori, titoli o licenze, né attribuire la fotografia a chi l’ha soltanto caricata. Conservare lo pseudonimo e la formula di credito richiesti. Se il titolo non è fornito, usare una descrizione dichiarata come tale.
- Se la risorsa offre più licenze alternative, scegliere e documentare una licenza ammessa. Non sostituire una versione con una più recente non offerta dall’autore. Escludere licenze NC, ND, «tutti i diritti riservati» e autorizzazioni ambigue.
- Se autore, condizioni o provenienza non sono verificabili, saltare la risorsa e segnalarne il motivo nel report. Non completare una quota di immagini con risorse dubbie.

## File locali e prestazioni

- Scaricare le immagini nella cartella della risorsa didattica, normalmente `img/`, con nomi descrittivi e percorsi relativi. Non usare hotlink in `src`, `srcset`, CSS o script; i collegamenti esterni alle pagine fonte e alle licenze restano necessari per i crediti.
- Preparare dimensioni adeguate allo spazio di lettura, senza ingrandimenti inutili. Preferire WebP, JPEG o altri formati già supportati dal progetto. Come riferimento, puntare a 150–200 KB per fotografia e circa 1 MB complessivo per le immagini di una lezione; motivare le eccezioni e preservare la leggibilità.
- Indicare `width` e `height` coerenti con il file per riservare lo spazio; usare il ridimensionamento responsivo già disponibile nei CSS del progetto. Usare `loading="lazy"` sotto la prima schermata e `decoding="async"` quando appropriato. Non ritardare inutilmente l’immagine principale immediatamente visibile.
- Conservare nella documentazione locale URL della pagina fonte, collegamento permanente o revisione quando disponibile, URL del file scaricato, data di verifica, nome locale, dimensioni e trasformazioni effettuate. Non rimuovere avvisi o metadati di attribuzione senza riportarli nei crediti e nella documentazione locale.

## Attribuzione TASL e modifiche

- Fornire per ogni immagine TASL: **Title** (titolo fornito), **Author** (autore e altri soggetti da accreditare), **Source** (link alla pagina del file), **License** (nome completo o sigla, versione e link alla licenza specifica). Conservare gli avvisi di copyright e le attribuzioni pregresse pertinenti presenti nella fonte.
- Inserire i crediti nella didascalia oppure in una sezione finale «Crediti delle immagini», con un rimando identificabile da ogni figura. `alt`, commenti HTML e un file di documentazione da soli non sostituiscono i crediti visibili.
- Dichiarare ridimensionamento e conversione di formato. Per ritagli, annotazioni o altre elaborazioni scrivere «adattata da…» e descrivere l’intervento. Non presentare la fotografia altrui come propria né suggerire l’approvazione dell’autore.
- Per CC BY-SA distribuire gli adattamenti con la stessa licenza dell’originale o con una licenza compatibile verificata per quella versione. Non presumere che la semplice inclusione di una fotografia imponga la medesima licenza all’intero sito; non cambiare la licenza generale del progetto. Le elaborazioni soltanto tecniche non costituiscono automaticamente un adattamento creativo.

## Accessibilità e integrazione didattica

- Usare `figure`, `img` e `figcaption` per le fotografie formative. Scrivere un `alt` che descriva ciò che è realmente visibile e utile a riconoscere il soggetto; non collocarvi i crediti. Le immagini decorative, se indispensabili, hanno `alt=""`.
- Collegare ogni didascalia al concetto già trattato, con linguaggio adatto anche a studenti DSA. Non anticipare argomenti della roadmap, non affidare informazioni essenziali soltanto a colore o testo incorporato nell’immagine e non aggiungere dettagli tecnici non necessari.
- Distribuire poche figure nei punti pertinenti, con al massimo una figura grande per sezione. Evitare gallerie separate dal ragionamento. Conservare testi, titoli, ancore, esercizi, progressione e navigazione, salvo modifiche espressamente richieste.
- Riutilizzare i componenti e i fogli di stile esistenti. Verificare desktop, schermo stretto, tema chiaro e scuro. Non modificare i CSS comuni o introdurre librerie per aggiungere le foto.

## Verifiche e report di consegna

Prima della consegna controllare HTML, esistenza dei file e percorsi relativi, assenza di hotlink delle nuove immagini, corrispondenza fra fotografie e didascalie, copertura dei crediti TASL, dimensioni e peso, leggibilità nei due temi e conservazione dei contenuti originali.

Il report deve indicare file modificati, immagini inserite e collocazione, titolo/autore/fonte/licenza per ciascuna, trasformazioni, peso complessivo, risorse scartate con motivo, controlli svolti e limiti rimasti. Distinguere problemi preesistenti da regressioni introdotte. Non dichiarare effettuati controlli non eseguiti.

Riferimenti: [riuso e attribuzione TASL di Creative Commons](https://creativecommons.org/reusing-cc-licensed-content/), [condizioni CC BY-SA 4.0](https://creativecommons.org/licenses/by-sa/4.0/). Per il singolo file valgono la licenza e la versione verificate nella sua pagina fonte.

---

# Incarico operativo — Lezione 04: Hardware

Destinazione: `Primo-anno/04-hardware/index.html`. Questo incarico riguarda l’integrazione fotografica della lezione esistente; non crea una nuova lezione e non modifica la roadmap.

1. Applicare le regole permanenti sulle immagini sopra riportate. Selezionare circa 6–8 fotografie reali, verificando ogni pagina fonte prima di inserire il file.
2. Inserire una vista interna del PC in «Che cosa c’è realmente dentro un computer?», prima delle schede sulle parti visibili e interne.
3. Integrare le schede già presenti in «Le componenti principali: una panoramica» con fotografie di scheda madre, CPU, RAM, SSD e/o HDD, alimentatore chiuso e periferiche comuni. Se si usano otto foto, mostrare separatamente SSD e HDD nella medesima scheda di archiviazione.
4. Aggiungere didascalie formative brevi che colleghino aspetto e funzione generale. Descrivere soltanto elementi visibili; per esempio distinguere la CPU dal suo sistema di raffreddamento. Conservare lo schema testuale input–elaborazione–output già presente.
5. Salvare i file in `Primo-anno/04-hardware/img/`, con `alt`, dimensioni, caricamento differito e crediti raggiungibili dalla figura. Aggiungere «Crediti delle immagini» prima della navigazione finale.
6. Preservare integralmente testi, ordine delle sezioni, obiettivi, esercizi, glossario, richiami, navigazione e stile comune. Saltare le risorse non verificabili; motivare un eventuale numero inferiore di fotografie.
7. Verificare il risultato e aggiornare `docs/immagini-hardware.md` con fonti, trasformazioni, immagini scartate, controlli e riepilogo delle modifiche. Non eseguire operazioni Git.

Traccia dell’integrazione del 21 ottobre 2026: otto fotografie locali, crediti in pagina e dati di provenienza in `Primo-anno/04-hardware/img/credits.json`; riepilogo in `docs/immagini-hardware.md`. Nelle revisioni successive mantenere questa documentazione coerente con le immagini effettivamente usate.
