# CSFML
[English version](../../README.md)

Un paquet pour accéder au binding C officiel de la 
librarie SFML.

## Qu'est-ce que SFML?
![logo de SFML](https://www.sfml-dev.org/download/goodies/sfml-logo-small.png)

SFML est l'abbréviation de 
*Simple and Fast Multimedia Library*. Il s'agit d'une 
librairie C++ surtout utilisée pour le dévelopement de 
jeux 2D. Voici la description offerte sur leur 
[site Internet](https://www.sfml-dev.org/index-fr.php):

> SFML offre une interface simple vers les différents 
> composants de votre PC, afin de faciliter le 
> développement de jeux ou d'applications multimedia. 
> Elle se compose de cinq modules : système, 
> fenêtrage, graphisme, audio et réseau. 

SFML est multi-média, multi-plateforme et 
multi-langage.

### CSFML
CSFML est le binding C officiel de la libraire SFML. 
Grâce à l'interopérabilité existante entre le langage C et Swift, nous pouvons accéder à SFML dans ce dernier.

*Présentement, la seule version de CSFML testée avec ce paquet est la version 2.4.2 sur Linux*
## Installation
### Linux

La première étape est d'installer la librairie SFML. La manière la plus simple est de l'installer au moyen de la ligne de commande:

```
sudo apt-get install libcsfml-dev
```

Tant qu'a y être, vous pouvez la documentation officielle:
```
sudo apt-get install libcsfml-doc
```
Vous pourrez alors y accéder dans le répertoire `/usr/share/doc/libcsfml-doc/index.htm`.

Il existe d'autre moyens de l'installer, qui permettraient notamment d'utilier les versions les plus récentes. Veillez noter que, bien qu'il ne devrait pas y avoir de problèmes, seule la version 2.4.2 a été testée lors du dévelopement de ce paquet. Pour plus d'informations, rendez-vous sur [le site de SFML](https://www.sfml-dev.org/tutorials/2.5/start-linux-fr.php) (les guides sont pour la version C++) et [la page de CSFML](https://www.sfml-dev.org/download/csfml/) pour les sources. Ce guide assume que vous utilisez l'option ligne de commande.

La suite consiste à installer le fichier `libcsfml-dev.pc` présent dans le répertoire `Pkgconfig/Linux` afin de rendre disponible au *Swift Package Manager* les fichiers d'en-têtes et de librairies de CSFML. Pour ce faire,  copiez-le dans un des répertoires standards de l'utilitaire `pkg-config`, comme `/usr/lib/pkgconfig`.

Pour finir, il ne reste plus qu'a définir le paquet `CSFML` comme dépendance à votre projet pu paquet, ajouter `import CSFML` dans vos fichers Swift et voilà! 

### macOS
Le moyen le plus simple d'installer CSFML sur macOS est d'utiliser [Brew](https://brew.sh/index_fr):
```
    brew install csfml
```

Vous pourrez ensuite installer le fichier `libcsfml-dev.pc` présent dans le répertoire `Pkgconfig/Mac` afin de rendre disponible au *Swift Package Manager* les fichiers d'en-têtes et de librairies de CSFML. Pour ce faire, copiez-le dans un des répertoires standards de l'utilitaire `pkg-config`, comme `/usr/local/lib/pkgconfig`.

Pour finir, il ne reste plus qu'a définir le paquet `CSFML` comme dépendance à votre projet pu paquet, ajouter `import CSFML` dans vos fichers Swift et voilà! 

#### À propos de Xcode
Il se peut que lorsque vous essayiez de compiler votre paquet sur Xcode qu'il ne trouve pas certains fichiers d'en-tête, même si la compilation par ligne de commande fonctionne. Heureusement, il est assez simple de remédier à ce problème:

1. Fermez Xcode et ouvrez un terminal dans le dossier racine de votre paquet.
2. Entrez la commande suivante: `swift package generate-xcodeproj`. Cette commande va créer un fichier de projet Xcode.
3. Ouvrez le projet Xcode.
4. Ouvrez les "Build Settings" du projet, en prenant soin de sélectionner le projet dans la marge gauche.
5. Recherchez "Header Search Paths"
6. Entrez comme valeur le chemin des en-têtes de CSFML. Si vous avez installé CSFML dans le répertoire par défaut (avec Brew par exemple), entrez `/usr/local/include/**`.

> L'attribut `/**` indique un chemin récursif, c'est à dire qu'il inclu aussi les sous-dossiers.

Vous devriez maintenant être en mesure de compiler.

### Windows
***TODO***

## Documentation
La manière d'accéder à la documentation va dépendre de votre installation.
Il est aussi possible de suivre les [tutoriaux officiels](https://www.sfml-dev.org/tutorials/2.5/index-fr.php) en les adaptant aux syntaxes Swift et C. Vous pouvez vous référer à [cet exemple](example_fr.md) pour bien démarrer.
