3)
pour analysé statiquement le virus on a utilisé Ghidra

sur la premiere image on peux voir toute les import de fonction utilise par le virus res.exe

et sur la 2eme plus précisément on peux voir des import comme getAsynckeyState qui releve les input du user
et showwindow qui cherche a masque cmd du programme qui

en cherchant l'utilisation du getAsynckeyState on tombe sur l'addrese 00401640
et en décompilant avec Ghidra on tombe sur le code ou est utilisé getAsynckeyState

et on peux clairement voir que chaque touche qu'on appuie est enregistré dans un fichier log 

c'est donc un keylogger 

on passe maintenant au env.exe avec Ghidra pour l'analysé 

avec les import QT5NETWORK et notament qsslsocket
on peux imaginer une connection a host surement pour envoyer les logs avec le res.exe qu'on a vu avant 

en cherchant l'utilisation de connectToHostEncrypted dans les imports de QSslSocket, on confirme que le programme établit bien une connexion chiffrée vers un hôte distant.

en décompilant la fonction à l'adresse 004016b0 avec Ghidra, on tombe sur le code complet de l'exfiltration.

on peut y voir clairement que le programme commence par lire le fichier C:\WindSyst\log.txt généré par res.exe, puis utilise les classes Qt pour envoyer son contenu par email.

on peux voir email comme aaaaaaaaaaaa@gmail.com ou aaaaaaaaaaaa@laposte.net
on donc ça envoye le contenu du fichier log.txt a ces email


