## Analyse croisée RAM / Disque

### Corrélation:

Le nom:

- côté mémoire nous avons **Res.exe** avec le PID 8116
- côté disque, nous avons le chemin suivant: C:\Users\grandbidule\Downloads\Malware\VIRUS\ **Res.exe**

Le Hash:

- côté mémoire: nous avons exécuté la commande suivante:
  `python vol.py -f dump_after.raw windows.dumpfiles.DumpFiles --pid 8116` pour extraire le hash du binaire
  et ensuite le hasher à l'aide de la commande `certutil -hashfile Res.exe.dmp SHA256` et obtenir le hash suivant:
  **ff341bb0f716c68100a803a45d327700c8c408573644196e010635834e53a8ee** qu'on peut comparer ensuite à celui du disque obtenu à la story précédente: et voir qu'ils sont identique.

L'horodatage:

- On peut aussi comparer l'horodatage, voir à quelle heure à été exécuté le processus et à quelle heure à été exécuter le fichier .exe
