# Wii-Donkey-Kong-Jr
Wii Homebrew Donkey Kong Jr Game and Watch

![WIIDKJR](https://github.com/PaulGoes/Wii-Donkey-Kong-Jr/blob/master/media/WIIDKJR.png)

## INTRODUCTION

In 1982 I got my first ‘handheld’ console: the G&W Donkey Kong Jr. 
In 1983, I programmed my own version for the TRS-80 home computer.
And now I programmed this version for the Wii homebrew. 

Why? Because it is simply possible to do and a fun experience too!
I got the trigger to start this at an information evening at my son's school.
A student of de 'hogeschool voor de kunsten' was telling about game design.
A girl asked him if it would be possible to program games for the Nintendo Wii.
That question triggered me because the month before I softmodded my Wii.

So I started looking for information about creating Wii homebrew applications.
I learned that the devkitpro development environment could help me with it.
So I decided to give it a try and to recreate a game that I programmed in 1983.
At the age of 13 I programmed a relatively simple version of the Game and Watch 
Donkey Kong Jr for the TRS-80 home computer. 
I thought it would be fun to recreate it for the Wii.

This is the result and I hope you like it.

A video showing the game can be found on YouTube:

<a href="https://www.youtube.com/watch?v=PbqBAagenMI">
         <img src="https://img.youtube.com/vi/PbqBAagenMI/0.jpg" style="width:100%;">
      </a>

A video showing the progress of designing the game can be found on YouTube:

<a href="https://www.youtube.com/watch?v=u77aPG7SFoY">
         <img src="https://img.youtube.com/vi/u77aPG7SFoY/0.jpg" style="width:100%;">
      </a>

Some information:
- Gameplay identical to the Game & Watch Donkey Kong Jr.
- Each level becomes gradually more difficult: more birds and crocs are added.
- Controlled using the Wiimote controller in horizontal position.
- Wiimote rumble feedback.
- Background graphic 'borrowed' from 'Game and Watch Gallery 3'.
- All other graphics created from a picture taken from my G&W Donkey Kong Jr.
- All sounds recorded from a playing session with my G&W Donkey Kong Jr.

[ Yes, my G&W Donkey Kong Jr handheld is still working !]

The game is created using devkitpro: 
          https://devkitpro.org/.
	  
Good introduction tutorials to using devkitpro and Wii programming: 
          http://www.codemii.com/category/wii-programming-tutorials/.
	  
Additional information about Wii programming:
          https://www.elotrolado.net/wiki/Curso_de_programacion.

		  
## HOW TO INSTALL AND START THE GAME USING THE HOMEBREW CHANNEL

1) Create the folder SD:\apps\dkjunior on the SD card.
2) Put the following files in this folder:
	- dkjunior.dol, 
	- dkjunior.elf, 
	- icon.png,
	- meta.xml.
3) Rename dkjunior.dol to boot.dol.
4) Rename dkjunior.elf to boot.elf.
5) Put the SD card back in the SD card slot on the Wii.
6) Start Homebrew Channel and point it to the SD card.
7) Start the Donkey Kong Junior homebrew application.


## HOW TO ADD THE CHANNEL FORWARDER IN THE SYSTEM MENU

1) Create the folder SD:\wad\ on the SD card.
2) Put the following file in this folder:
	- Donkey Kong Jr - DKJR.wad.
3) Put the SD card back in the SD card slot on the Wii.
4) Install the wad file using a WAD manager (e.q. YAWMM).
5) Now you can start the game from the Wii System Menu.

[Notice: the channel forwarder wad is created using CustomizeMii.]


## FILE INFORMATION

- Folder - build: used to build the game application.
- Folder - include: contains all the graphics and sounds.
- Folder - source: contains the game sources.
    - File - main.c: the main game program source file.
	- File - picture_sound.s: graphics and sound definitions.
- Folder - wad: contains the channel forwarder wad.
	- File - Donkey Kong Jr - DKJR.wad: channel forwarder wad.
- File - dkjunior.dol: game dol-file (result of build).
- File - dkjunior.elf: game elf-file (result of build).
- File - dkjunior.pnproj: devkitpro project definition file.
- File - icon.png: homebrew channel icon image.
- File - Makefile: devkitpro project make file.
- File - meta.xml: homebrew channel metadata xml file.



