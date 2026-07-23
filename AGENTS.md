# AGENTS.md
# Checklist iniziale

Prima di scrivere codice:

☐ Ho letto AGENTS.md

☐ Ho letto PROGETTO.md

☐ Ho letto ROADMAP.md

☐ Ho analizzato la lezione precedente

☐ Ho verificato che la nuova lezione sia coerente con la roadmap
# Corso di Informatica – Esame di Idoneità alla Classe Terza

## Scopo

Questo documento contiene le regole operative che ogni agente AI deve seguire quando modifica o crea file all'interno del progetto.

Le istruzioni presenti in questo documento hanno priorità rispetto agli altri documenti del repository.

---

# Documenti da analizzare

Prima di creare o modificare qualsiasi file, leggere nell'ordine:

1. AGENTS.md
2. ROADMAP.md
3. PROGETTO.md
4. Documentazione presente nella cartella `docs/`
5. La lezione precedente

Se esistono conflitti tra i documenti, prevale sempre AGENTS.md.

---

# Struttura del repository

Ogni lezione è contenuta in una propria cartella.

Ogni cartella contiene come pagina principale esclusivamente:

```
index.html
```

I collegamenti devono essere sempre relativi.

Non utilizzare URL assoluti.

---

# Creazione di una nuova lezione

Prima di creare una nuova lezione l'agente deve:

- analizzare la lezione precedente;
- mantenere la stessa struttura HTML;
- mantenere lo stesso stile grafico;
- mantenere lo stesso livello di approfondimento;
- utilizzare esclusivamente i CSS del progetto.

Ogni nuova lezione deve risultare coerente con quelle già presenti.

---

## Continuità didattica

Ogni nuova lezione deve iniziare richiamando, in modo naturale e sintetico, i concetti fondamentali appresi nella lezione precedente.

Il richiamo deve avere lo scopo di:
- recuperare i prerequisiti necessari;
- creare continuità nel percorso di apprendimento;
- preparare lo studente ai nuovi argomenti.

Il ripasso iniziale deve essere breve (2–5 minuti di lettura) e non sostituire i contenuti della nuova lezione.
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
- immagini con attributo alt;
- istruzioni sequenziali;
- compatibilità con tema chiaro e tema scuro.

Per i dettagli consultare `docs/accessibilita.md`.

---

# Navigazione

Ogni lezione deve contenere:

- Lezione precedente;
- Torna all'indice;
- Lezione successiva.

Se la lezione successiva non esiste, il pulsante deve risultare disabilitato.

---

# Cosa NON modificare

Salvo esplicita richiesta dell'utente, l'agente NON deve:

- modificare altre lezioni;
- rinominare cartelle;
- modificare la struttura del repository;
- modificare il CSS comune;
- introdurre librerie esterne;
- modificare la navigazione generale.

---

# Controlli finali

Prima di terminare verificare sempre:

- validità HTML;
- correttezza dei percorsi relativi;
- funzionamento dei collegamenti;
- compatibilità con tema chiaro e tema scuro;
- correttezza ortografica.

---

# Regola finale

L'agente deve privilegiare la coerenza dell'intero progetto rispetto all'introduzione di nuove soluzioni.

In caso di dubbio deve seguire la struttura delle lezioni già presenti oppure chiedere conferma all'utente prima di introdurre modifiche sostanziali.