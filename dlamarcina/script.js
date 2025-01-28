// Funkcja rozpoczynająca przejście do pierwszego etapu
function startJourney() {
    window.location.href = "etap1.html";
}

// Funkcja do przejścia do kolejnego etapu z animacją
function nextStep() {
    const currentFile = window.location.pathname.split('/').pop();
    const nextFileNumber = parseInt(currentFile.match(/\d+/)[0]) + 1;

    // Ukrywa bieżący etap
    document.querySelector('.gallery').classList.add('hidden');

    // Animacja przejścia
    setTimeout(() => {
        // Składa nową nazwę pliku HTML z numerem następnego etapu
        if (nextFileNumber <= 6) {
            window.location.href = `etap${nextFileNumber}.html`;
        }
    }, 500); // Czekaj na zakończenie animacji przed przejściem do następnego etapu
}
