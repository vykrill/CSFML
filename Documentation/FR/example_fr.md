# Exemple d'utilisation de CSFML
*Veuillez vous référer au [fichier readme](README_fr.md) pour l'installation.*

``` swift
// Cet exemple affiche une fenêtre 200x200 pixels 
//  affichant un cercle orange. 

import CSFML

// Le mode vidéo de la fenêtre. Notez que l'on peut
//  initialiser les attributs de la structure de la 
//  même manière qu'une structure swift standard.
let mode = sfVideoMode(width: 400, height: 400, bitsPerPixel: 32)
// On définit des couleurs personnalisées.
let orange = sfColor_fromRGB(200, 100, 0)
let black = sfColor_fromRGB(51, 51, 51)
// On crée ici un pointeur vers un object 
//  `sfRenderWindow`.
var window = sfRenderWindow_create(mode, "SFML Works!", sfClose.rawValue, nil)

// On fait de même avec un `sfCircleShape`. Notez ici
//  que l'on utilise des fonctions spécialisées afin
//  d'accéder et de modifier ses attributs.
var circle = sfCircleShape_create();
sfCircleShape_setRadius(circle, 200);
sfCircleShape_setFillColor(circle, orange)

// On crée une boucle qui s'effectue tant que la 
//  fenêtre est ouverte.
while sfRenderWindow_isOpen(window) != 0 {
    var event = sfEvent()

    // On vérifie les événements qui se sont produits
    //  depuis la dernière mise à jour. Ici, on ne 
    //  fait que vérifier si l'utilisateur ferme la 
    //  fenêtre.
    while sfRenderWindow_pollEvent(window, &event) != 0 {
        if event.type == sfEvtClosed {
            sfRenderWindow_close(window)
        }
    }

    // On efface le contenu de la fenêtre.
    sfRenderWindow_clear(window, black)
    // On dessine le cercle.
    sfRenderWindow_drawCircleShape(window, circle, nil)
    // On met à jour la fenêtre.
    sfRenderWindow_display(window)
    
}

```