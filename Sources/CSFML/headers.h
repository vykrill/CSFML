//
//  Header.h
//  
//
//  Created by Jérémy Goyette on 2020-09-28.
//  For package GLB-0001 a.k.a. CSFML

#ifndef Header_h
#define Header_h

#ifdef __linux__
    #include "/usr/include/SFML/System.h"
    #include "/usr/include/SFML/Graphics.h"
    #include "/usr/include/SFML/Window.h"
    #include "/usr/include/SFML/Audio.h"
    #include "/usr/include/SFML/Network.h"
#endif

#ifdef __APPLE__ && __MACH__
    #include "/usr/local/include/SFML/System.h"
    #include "/usr/local/include/SFML/Graphics.h"
    #include "/usr/local/include/SFML/Window.h"
    #include "/usr/local/include/SFML/Audio.h"
    #include "/usr/local/include/SFML/Network.h"
#endif

#endif /* Header_h */
