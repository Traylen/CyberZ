## US6: Acquisition mémoire vive

### Outils/Commande utilisés

- **WinPmem**: est un outil open source d'acquisition de mémoire physique windows
  - Commande utilisée: `winpmem_mini_x64_rc2.exe dump_after.raw` et génère un dump de ma mémoire
- **Volatility3**: est un framework qui permet d'extraire des échantillons de mémoire vive
  - Installation:
    ```bash
        git clone https://github.com/volatilityfoundation/volatility3.git
        cd volatility3/
        python -m venv venv
        venv\Scripts\activate
        pip install -e ".[dev]"
    ```
  - Utilisation:
    ```bash
        python vol.py -f ../Downloads/dump_after.raw windows.pslist.PsList
        python vol.py -f ../Downloads/dump_after.raw windows.psscan.PsScan
        python vol.py -f ../Downloads/dump_after.raw windows.netstat.NetStat
    ```

### Processus actifs sont identifiés

On peut voir le malware actif:

```
8116	4808	Res.exe	0xa98c790d8080	2	-	1	True	2026-09-09 11:59:44.000000 UTC	N/A	Disabled
```

Côté connexions suspectes:

Aucune connexion suspectes n'est trouvés, après avoir fait la cmd: **python vol.py -f ../Downloads/dump_after.raw windows.netstat.NetStat
**
