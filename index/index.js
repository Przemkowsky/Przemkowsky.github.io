// Funkcja dodająca odpowiednią strzałkę do klikniętego linku
window.addEventListener('DOMContentLoaded', (event) => {
  const links = document.querySelectorAll('a');

  links.forEach(link => {
    link.addEventListener('click', function() {
      // Usuwa aktywność i strzałki z wszystkich linków
      links.forEach(link => {
        link.classList.remove('active');
        link.classList.remove('left-arrow');
        link.classList.remove('right-arrow');
      });

      // Dodaje klasę 'active' i strzałkę do klikniętego linku
      this.classList.add('active');

      // Sprawdzenie, z której strony jest kliknięty link
      const linkPosition = this.parentElement.getBoundingClientRect().left;
      if (linkPosition < window.innerWidth / 2) {
        // Link po lewej stronie: strzałka skierowana w prawo
        this.classList.add('left-arrow');
      } else {
        // Link po prawej stronie: strzałka skierowana w lewo
        this.classList.add('right-arrow');
      }
    });
  });
});
