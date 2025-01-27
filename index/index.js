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
        this.classList.add('left-arrow'); // Link w lewej części
      } else if (linkPosition > (2 * screenWidth) / 3) {
        this.classList.add('right-arrow'); // Link w prawej części
      } else {
        this.classList.add('active'); // Środkowy link
      }
    });
  });

  // Obsługa nawigacji klawiaturą
  document.addEventListener('keydown', (event) => {
    const activeLink = document.querySelector('a.active');
    let nextLink;

    // Klawisze strzałek do góry i do dołu
    if (event.key === 'ArrowDown') {
      nextLink = activeLink ? activeLink.nextElementSibling : links[0];
    } else if (event.key === 'ArrowUp') {
      nextLink = activeLink ? activeLink.previousElementSibling : links[links.length - 1];
    }

    if (nextLink) {
      nextLink.click(); // Symulacja kliknięcia
    }
  });

  // Efekt fade-in całej strony
  document.body.style.opacity = '0';
  document.body.style.transition = 'opacity 0.5s ease-in-out';
  setTimeout(() => {
    document.body.style.opacity = '1';
  }, 100);
});
