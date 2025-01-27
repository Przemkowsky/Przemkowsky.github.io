// Funkcja uruchamiana po załadowaniu DOM
window.addEventListener('DOMContentLoaded', () => {
  const links = document.querySelectorAll('a'); // Wszystkie linki
  const iframe = document.querySelector('iframe'); // iFrame, jeśli istnieje

  // Obsługa kliknięcia na link
  links.forEach(link => {
    link.addEventListener('click', function (event) {
      event.preventDefault(); // Zablokowanie domyślnego zachowania

      // Usunięcie aktywnych klas
      links.forEach(link => {
        link.classList.remove('active', 'left-arrow', 'right-arrow');
      });

      // Dodanie klasy 'active' do klikniętego linku
      this.classList.add('active');

      // Sprawdzenie pozycji linku w oknie
      const linkPosition = this.getBoundingClientRect().left;
      const screenWidth = window.innerWidth;

      if (linkPosition < screenWidth / 3) {
        this.classList.add('left-arrow'); // Strzałka w prawo
      } else if (linkPosition > (2 * screenWidth) / 3) {
        this.classList.add('right-arrow'); // Strzałka w lewo
      }

      // Jeśli link otwiera stronę w iframe, ustaw źródło
      if (iframe && this.getAttribute('href')) {
        iframe.src = this.getAttribute('href');
      }
    });
  });

  // Obsługa klawiatury: Poruszanie się po linkach
  document.addEventListener('keydown', (event) => {
    const activeLink = document.querySelector('a.active');
    let nextLink;

    if (event.key === 'ArrowDown') {
      nextLink = activeLink ? activeLink.nextElementSibling : links[0];
    } else if (event.key === 'ArrowUp') {
      nextLink = activeLink ? activeLink.previousElementSibling : links[links.length - 1];
    }

    if (nextLink) {
      nextLink.click(); // Symulacja kliknięcia
    }
  });

  // Efekt pojawiania się
  document.body.style.opacity = '0';
  document.body.style.transition = 'opacity 0.5s ease-in-out';
  window.setTimeout(() => {
    document.body.style.opacity = '1';
  }, 100);
});
