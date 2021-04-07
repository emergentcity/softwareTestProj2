#pragma once
#ifndef STARTAPPLICATIONS_H
#define STARTAPPLICATIONS_H
#include <cstdio>
#include <string>
#include "musicLibrary.h"
#include <iostream>

using namespace std;
class startApplicationS {
public:

	static bool checkNumber(string str) {
		for (int i = 0; i < str.length(); i++)
			if (isdigit(str[i]) == false)
				return false;
		return true;
	}

	static string startBlockS() {
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		cout << "|                                    BIENVENIDO A MUSICIFY                               |" << endl;
		cout << "|          Inicie sesión en su cuenta para continuar.                                    |" << endl;
		cout << "|----------------------------------------------------------------------------------------|" << endl;

		return "pantalla de ingreso al sistema";

	}

	static string homeBlockS(string userName) {
		cout <<  "|----------------------------------------------------------------------------------------|" << endl;
		cout <<  "|                             ¡BIENVENIDO A MUSICIFY, " << userName << "!                          " << endl;
		cout <<  "|          Tu biblioteca musical, todo aquí y esas cosas.                                |" << endl;
		cout <<  "|          Seleccione lo siguiente para comenzar.                                        |" << endl;
		cout <<  "|                                                                                        |" << endl;
		cout <<  "|          1. (Versión de desarrollador) Para ejecutar diagnósticos.                     |" << endl;
		cout <<  "|          2. Abre tu biblioteca.                                                        |" << endl;
		cout <<  "|----------------------------------------------------------------------------------------|" << endl;
		return "pantalla de inicio";
	}

	static string firstPage(musicLibrary& library) {
		string input2;
		string input3;
		string input4;
		string input5;
		listAllSong(library);
		cout << endl;
		cout << "Elegir canción: ";
		getline(cin, input2);
		song chosenSong = library.getSong(std::stoi(input2));
		cout << "Canción: " << chosenSong.getName() << " by " << chosenSong.getArtist() << endl;
		cout << "1. Crear nueva canción." << endl;
		cout << "2. Eliminar canción." << endl;
		cout << endl;
		cout << "Aporte: ";
		getline(cin, input3);
		if (input3 == "1") {
			song newSong = song();
			cout << "¿Cuál es el nombre de tu nueva canción?: " << endl;
			getline(cin, input4);
			newSong.setName(input4);
			cout << "¿Artista?: " << endl;
			getline(cin, input5);
			newSong.setArtist(input5);
			library.addSong(newSong);
		}
		else if (input3 == "2") {
			library.removeSong(chosenSong.getId());
			cout << "¡Canción eliminada!" << endl;
		}

		return "primera página";
	}

	static string secondPage(musicLibrary& library) {
		string input2;
		string input3;
		string input4;
		string input5;
		string input6;
		cout << "Escriba el nombre de la canción: ";
		getline(cin, input2);
		searchSongs(library, input2);
		cout << endl;
		cout << "Elegir canción: ";
		getline(cin, input3);
		song chosenSong = library.getSong(std::stoi(input3));
		cout << "canción: " << chosenSong.getName() << " por " << chosenSong.getArtist() << endl;
		cout << "1. Crear nueva canción." << endl;
		cout << "2. Eliminar canción." << endl;
		cout << endl;
		cout << "Aporte: ";
		getline(cin, input4);

		if (input4 == "1") {
			song newSong = song();
			cout << "¿Cuál es el nombre de tu nueva canción ?: " << endl;
			getline(cin, input5);
			newSong.setName(input5);
			cout << "¿Artista?: " << endl;
			getline(cin, input6);
			newSong.setArtist(input6);
			library.addSong(newSong);
		}
		else if (input4 == "2") {
			library.removeSong(chosenSong.getId());
			cout << "¡Canción eliminada!" << endl;
		}

		return "segunda pagina";
	}

	static string thirdPage(musicLibrary& library) {
		string input2;
		string input3;
		string input4;
		listAllPlaylist(library);
		cout << endl;
		cout << "Escriba el nombre de la lista de reproducción: ";
		getline(cin, input2);
		playlist chosenList = library.getPlaylist(std::stoi(input2));
		cout << "Lista de reproducción: " << chosenList.getName() << endl;
		library.getPlaylist(chosenList.getId()).printSongs();
		cout << "1. Crear nueva lista de reproducción." << endl;
		cout << "2. Eliminar lista de reproducción." << endl;
		cout << "3. Agregar canción a la lista de reproducción" << endl;
		cout << endl;
		cout << "Aporte: ";
		getline(cin, input3);
		if (input3 == "1") {
			playlist newList = playlist();
			cout << "¿Cuál es el nombre de su nueva lista de reproducción?: " << endl;
			getline(cin, input4);
			newList.setName(input4);
			library.addPlaylist(newList);
		}
		else if (input3 == "2") {
			library.removePlaylist(chosenList.getId());
			cout << "¡Lista de reproducción eliminada!" << endl;
		}
		else if (input3 == "3") {
			listAllSong(library);
			cout << "Elija la canción para agregar a esta lista de reproducción: ";
			getline(cin, input4);
			song& newSong = library.getSong(std::stoi(input4));
			library.addSongToPlaylist(newSong, chosenList.getId());

		}

		return "tercera página";
	}

	static string fourthPage(musicLibrary& library) {
		string input2;
		string input3;
		string input4;
		string input5;
		cout << "Escriba el nombre de la lista de reproducción: ";
		getline(cin, input2);
		searchPlaylists(library, input2);
		cout << endl;
		cout << "Elija el nombre de la lista de reproducción: ";
		getline(cin, input3);
		playlist chosenList = library.getPlaylist(std::stoi(input3));
		cout << "Lista de reproducción: " << chosenList.getName() << endl;
		library.getPlaylist(chosenList.getId()).printSongs();
		cout << "1. Crear nueva lista de reproducción." << endl;
		cout << "2. Eliminar lista de reproducción." << endl;
		cout << "3. Agregar canción a la lista de reproducción" << endl;
		cout << endl;
		cout << "Aporte: ";
		getline(cin, input4);
		if (input4 == "1") {
			playlist newList = playlist();
			cout << "¿Cuál es el nombre de su nueva lista de reproducción?: " << endl;
			getline(cin, input5);
			newList.setName(input5);
			library.addPlaylist(newList);
		}
		else if (input4 == "2") {
			library.removePlaylist(chosenList.getId());
			cout << "¡Lista de reproducción eliminada!" << endl;
		}
		else if (input4 == "3") {
			listAllSong(library);
			cout << "Elija la canción para agregar a esta lista de reproducción: ";
			getline(cin, input5);
			song newSong = library.getSong(std::stoi(input5));
			library.getPlaylist(chosenList.getId()).addSongToPlaylist(newSong);

		}
		return "cuarta página";
	}

	static string selectionSectionS(string userName, musicLibrary& library) {
		librarySelectionBlock(userName);
		string input;
		getline(cin, input);

		if (input == "1") {
			firstPage(ref(library));
		}
		else if (input == "2") {
			secondPage(ref(library));
		}
		else if (input == "3") {
			thirdPage(ref(library));
		}
		else if (input == "4") {
			fourthPage(ref(library));
		}
		return "selection screen";
	}

	static string librarySelectionBlock(string userName) {
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		cout << "|          Puede hacer lo siguiente en su biblioteca: " << userName << "                 |" << endl;
		cout << "|          1. Lista de todas las canciones.                                              |" << endl;
		cout << "|          2. Canción de búsqueda.                                                       |" << endl;
		cout << "|          3. Lista de todas las listas de reproducción.                                 |" << endl;
		cout << "|          4. Lista de reproducción de búsqueda.                                         |" << endl;
		cout << "|----------------------------------------------------------------------------------------|" << endl;
		return "pantalla de biblioteca";
	}

	static string listAllSong(musicLibrary library) {
		cout << "-------------- Lista de toda tu música. ----------------" << endl;
		library.printSongs();
		return "pantalla de lista de canciones";
	}

	static string listAllPlaylist(musicLibrary library) {
		cout << "-------------- Lista de todas tus listas de reproducción. ----------------" << endl;
		library.printPlaylists();
		return "pantalla de lista de reproducción";
	}

	static string searchSongs(musicLibrary library, string search) {
		library.searchSong(search);
		return "pantalla de búsqueda de canciones";
	}

	static string searchPlaylists(musicLibrary library, string search) {
		library.searchPlaylist(search);
		return "pantalla de búsqueda de lista de reproducción";
	}
};

#endif