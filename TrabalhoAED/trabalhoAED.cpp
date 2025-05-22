#include <iostream>
#include <windows.h> // Para Sleep() no Windows
// #include <unistd.h> // Para usleep() no Linux/Mac

using namespace std;

void clearScreen() {
    // Limpa a tela do console
    system("cls"); // Para Windows
    // system("clear"); // Para Linux/Mac
}

void drawPlane(int position) {
    // Desenha o avião em diferentes posições para simular movimento
    for (int i = 0; i < position; i++) {
        cout << " ";
    }
    cout << "       ____" << endl;
    
    for (int i = 0; i < position; i++) {
        cout << " ";
    }
    cout << "      /____\\" << endl;
    
    for (int i = 0; i < position; i++) {
        cout << " ";
    }
    cout << "   XXXXXXXXXXXX>" << endl;
    
    for (int i = 0; i < position; i++) {
        cout << " ";
    }
    cout << "     /  /  /" << endl;
    
    // Desenha o terminal à direita
    cout << string(60, ' ') << "|======|" << endl;
    cout << string(60, ' ') << "| TERM |" << endl;
    cout << string(60, ' ') << "|======|" << endl;
}

int main() {
    // Simula o avião se aproximando do terminal
    for (int pos = 0; pos < 50; pos += 2) {
        clearScreen();
        drawPlane(pos);
        Sleep(200); // Pausa por 200ms (Windows)
        // usleep(200000); // Pausa por 200ms (Linux/Mac)
    }
    
    // Avião parado no terminal
    clearScreen();
    drawPlane(50);
    cout << "\nAvião pousou no terminal com sucesso!" << endl;
    
    return 0;
}