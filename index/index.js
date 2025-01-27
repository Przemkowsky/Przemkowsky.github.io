// Funkcja uruchamiana po załadowaniu całego DOM
window.addEventListener('DOMContentLoaded', () => {
  // Pobranie wszystkich linków na stronie
  const links = document.querySelectorAll('a');

  // Iteracja przez wszystkie linki
  links.forEach(link => {
    link.addEventListener('click', function (event) {
      // Usunięcie klas aktywności i strzałek z każdego linku
      links.forEach(link => {
        link.classList.remove('active');
        link.classList.remove('left-arrow');
        link.classList.remove('right-arrow');
      });

      // Dodanie klasy 'active' do klikniętego linku
      this.classList.add('active');

      // Obliczenie pozycji linku w stosunku do szerokości ekranu
      const linkPosition = this.getBoundingClientRect().left; // Pozycja linku
      const screenWidth = window.innerWidth; // Szerokość okna przeglądarki

      // Sprawdzenie pozycji linku i przypisanie odpowiedniej strzałki
      if (linkPosition < screenWidth / 3) {
        // Link w lewej części ekranu
        this.classList.add('left-arrow');
      } else if (linkPosition > (2 * screenWidth) / 3) {
        // Link w prawej części ekranu
        this.classList.add('right-arrow');
      } else {
        // Link w środku – brak dodatkowych strzałek
        this.classList.add('active');
      }
    });
  });
});
