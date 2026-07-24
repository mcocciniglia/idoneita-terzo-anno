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

Se la lezione successiva non esiste il pulsante deve risultare disabilitato.

I materiali integrativi devono contenere almeno:

- collegamento alla pagina o alla lezione di riferimento;
- collegamento all'indice dei materiali integrativi;
- collegamento alla homepage del corso.

I materiali integrativi non devono utilizzare la numerazione progressiva delle lezioni.
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