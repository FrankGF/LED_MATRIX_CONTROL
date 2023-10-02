#include <raylib.h>

int main() {
    // Inicialize a janela
    const int screenWidth = 1366;
    const int screenHeight = 768;

    

    InitWindow(screenWidth, screenHeight, "JANELA TESTE COM FUNDO");

    ToggleFullscreen();

    // Carregue a imagem de fundo
    Image fundo = LoadImage("recursos/fundo.png");
    Texture2D fundoTexture = LoadTextureFromImage(fundo);
    UnloadImage(fundo);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        // Início do loop principal

        // Desenhe a imagem de fundo
        BeginDrawing();
        ClearBackground(RAYWHITE); // Pode definir outra cor de fundo, se preferir
        DrawTexture(fundoTexture, 0, 0, WHITE);
        EndDrawing();

        // Fim do loop principal
    }

    // Libere os recursos
    UnloadTexture(fundoTexture);
    CloseWindow();

    return 0;
}
