#include <iostream>
#include <windows.h>
#include <thread> // for std::thread
#pragma comment(lib, "Winmm.lib")

// Define frequencies for each note (in Hz)
const int Fa = 294;    // Sol (changed from 261 to 294)
const int Sol = 392;    // Si (changed from 294 to 392)
const int La = 440;    // La (changed from 330 to 440)
const int SiBemol = 466;    // ReSharp flat (changed from 349 to 466)
const int Si = 466;   // ReSharp flat (changed from 392 to 466)
const int DoSharp = 523;    // Fa' (changed from 440 to 523)
const int ReSharp = 587;    // Sol' (changed from 494 to 587)

 // Define frequencies for each note (in Hz)
    const int A = 440;     // A
    const int GSharp = 415; // G#
    const int C = 523;     // C
    const int E = 659;     // E
    const int DSharp = 622; // D#
    const int D = 587;     // D
    const int G = 392;     // G
    const int FSharp = 370; // F#
    const int F = 349;     // F
    const int B = 494;     // B

// Define durations for each note (in milliseconds)
const int quarter = 500;
const int half = 2 * quarter;
const int eighth = quarter / 2;

// Function to play a note of given frequency and duration asynchronously with a 1 millisecond gap
void playNote(int frequency, int duration) {
    // Use std::thread to run Beep() in a separate thread
    std::thread soundThread([=]() {
        Beep(frequency, duration);
    });

    // Detach the thread to allow it to run independently
    soundThread.detach();

    // Add a 1 millisecond delay before returning
    std::this_thread::sleep_for(std::chrono::milliseconds(duration + 1));
}

void playSong() {
    // Play Luck - uwuprofeno
    //
    for(int i = 0; i < 2; i++) {
        playNote(La, half);
        playNote(La, half);
        playNote(DoSharp, quarter);
        playNote(Si, quarter);
        playNote(La, half);
    }
    playNote(SiBemol, half);
    playNote(DoSharp, half);
    playNote(ReSharp, quarter);
    playNote(ReSharp, quarter);
    playNote(DoSharp, quarter);
    playNote(SiBemol, quarter);
    playNote(La, quarter);
    playNote(Sol, quarter);
    playNote(Fa, quarter);
    playNote(DoSharp, half);
    playNote(DoSharp, half);
    playNote(Si, quarter);
    playNote(SiBemol, quarter);
    playNote(DoSharp, half);
    playNote(SiBemol, half);
    playNote(SiBemol, half);
    playNote(La, quarter);
    playNote(Sol, quarter);
    playNote(SiBemol, half);
    playNote(Si, half);
    playNote(Si, half);
    playNote(DoSharp, quarter);
    playNote(ReSharp, quarter);
    playNote(Si, half);
    playNote(SiBemol, quarter);
    playNote(La, quarter);
    playNote(Sol, quarter);
    playNote(Fa, quarter);
    playNote(ReSharp, half);//

    // Play 7th symphony beeped - Beethoven
    for(int i = 0; i < 2; i++) {
        playNote(Sol, half);
        playNote(Sol, eighth);
        playNote(Sol, eighth);
        playNote(Sol, half);
        playNote(Sol, half);
    }

    playNote(Sol, half);
    playNote(Sol, eighth);
    playNote(La, eighth);
    playNote(SiBemol, half);
    playNote(SiBemol, half);

    playNote(SiBemol, half);
    playNote(SiBemol, eighth);
    playNote(SiBemol, eighth);
    playNote(SiBemol, half);
    playNote(0, half);

    playNote(SiBemol, half);
    playNote(SiBemol, eighth);
    playNote(DoSharp, eighth);
    playNote(ReSharp, half);
    playNote(ReSharp, half);

    playNote(La, half);
    playNote(La, eighth);
    playNote(SiBemol, eighth);
    playNote(DoSharp, half);
    playNote(DoSharp, half);

    playNote(Sol, half);
    playNote(Sol, eighth);
    playNote(Sol, eighth);
    playNote(Sol, half);
    playNote(Sol, half);

    playNote(Sol, half);
    playNote(La, eighth);
    playNote(SiBemol, eighth);
    playNote(DoSharp, half / 2);

     playNote(SiBemol, half);
    playNote(SiBemol, eighth);
    playNote(DoSharp, eighth);
    playNote(ReSharp, half);
    playNote(ReSharp, half);

    playNote(La, half);
    playNote(La, eighth);
    playNote(SiBemol, eighth);
    playNote(DoSharp, half);
    playNote(DoSharp, half);

    playNote(Sol, half);
    playNote(Sol, eighth);
    playNote(Sol, eighth);
    playNote(Sol, half);
    playNote(Sol, half);

    playNote(Sol, half);
    playNote(La, eighth);
    playNote(SiBemol, eighth);
    playNote(Sol, half);
}

void playAttackOfTheKillerBeast() {
    // Play Attack of the Killer Beast theme
    playNote(A, quarter / 2);
    playNote(GSharp, quarter / 2);
    playNote(A, quarter / 2);
    playNote(C, quarter / 2);
    playNote(A, quarter / 2);
    playNote(GSharp, quarter / 2);
    playNote(A, quarter / 2);
    playNote(E, quarter / 2);

    playNote(D, quarter / 2);
    playNote(C, quarter / 2);
    playNote(B, quarter / 2);
    playNote(C, quarter / 2);
    playNote(D, quarter / 2);
    playNote(G, quarter / 2);
    playNote(FSharp, quarter / 2);
    playNote(E, quarter / 2);

    playNote(D, quarter / 2);
    playNote(C, quarter / 2);
    playNote(B, quarter / 2);
    playNote(C, quarter / 2);
    playNote(D, quarter / 2);
    playNote(G, quarter / 2);
    playNote(FSharp, quarter / 2);
    playNote(E, quarter / 2);

    

    playNote(D, quarter / 2);
    playNote(E, quarter / 2);
    playNote(D, quarter / 2);
    playNote(E, quarter / 2);

    playNote(D, quarter / 2);
    playNote(C, quarter / 2);
    playNote(B, quarter / 2);

    playNote(D, quarter / 2);
    playNote(E, quarter / 2);
    playNote(D, quarter / 2);
    playNote(E, quarter / 2);

    playNote(D, quarter / 2);
    playNote(C, quarter / 2);
    playNote(D, quarter / 2);

    playNote(G, quarter / 2);
    playNote(A, quarter / 2);
    playNote(B, quarter / 2);
    playNote(C, quarter / 2);
    playNote(B, quarter / 2);
    playNote(C, quarter / 2);

    playNote(A, quarter / 2);
    playNote(B, quarter / 2);
    playNote(A, quarter / 2);
    playNote(GSharp, quarter / 2);
    playNote(B, quarter / 2);
    playNote(C, quarter / 2);

    playNote(B, quarter / 2);
    playNote(A, quarter / 2);
    playNote(A, quarter / 2);
    playNote(GSharp, quarter / 2);
    playNote(A, quarter / 2);
    playNote(GSharp, quarter / 2);
    playNote(A, quarter / 2);
    playNote(E, quarter / 2);

    playNote(D, quarter / 2);
    playNote(C, quarter / 2);
    playNote(B, quarter / 2);
    playNote(C, quarter / 2);
    playNote(D, quarter / 2);
    playNote(G, quarter / 2);
    playNote(FSharp, quarter / 2);
    playNote(E, quarter / 2);

    playNote(D, quarter / 2);
    playNote(C, quarter / 2);
    playNote(B, quarter / 2);
    playNote(C, quarter / 2);
    playNote(D, quarter / 2);
    playNote(G, quarter / 2);
    playNote(FSharp, quarter / 2);
    playNote(E, quarter / 2);

    playNote(D, half);
    playNote(D, quarter / 2);
    playNote(E, quarter / 2);
    playNote(D, quarter / 2);
    playNote(C, quarter / 2);
    playNote(B, quarter / 2);

    playNote(D, quarter / 2);
    playNote(E, quarter / 2);
    playNote(D, quarter / 2);
    playNote(E, quarter / 2);

    playNote(G, quarter / 2);
    playNote(C, quarter / 2);
    playNote(D, quarter / 2);
    playNote(E, quarter / 2);
    playNote(D, quarter / 2);
    playNote(E, quarter / 2);
    playNote(D, quarter / 2);
    playNote(C, quarter / 2);
    playNote(B, quarter / 2);

    playNote(C, quarter / 2);
    playNote(B, quarter / 2);
    playNote(A, quarter / 2);


}

int main() {
    /*/ Create a thread to play the song
    std::thread songThread(playAttackOfTheKillerBeast);

    // Continue with the main program
    std::cout << "a\n";

    // ReSharpmulate further execution of the main program
    for (int i = 0; i < 10; ++i) {
        std::cout << "Main program still running...\n";
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Pause for 1 second
    }

    // Wait for the song thread to finish
    songThread.join();
    */

    std::cout << "hol\ra\ra\n\"\\\'\t\e";
    return 0;
}
