## US6: Acquisition mémoire vive

### Outils/Commande utilisés

- **WinPmem**: est un outil open source d'acquisition de mémoire physique windows
  - Commande utilisée: `winpmem_mini_x64_rc2.exe dump.raw` et génère un dump de ma mémoire
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
        python vol.py -f ../Downloads/dump.raw windows.pslist
        python vol.py -f ../Downloads/dump.raw windows.psscan
    ```
