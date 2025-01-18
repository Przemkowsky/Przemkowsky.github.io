// Funkcja dodająca odpowiednią strzałkę do klikniętego linku
window.addEventListener('DOMContentLoaded', (event) => {
  const links = document.querySelectorAll('a');

  links.forEach(link => {
    link.addEventListener('click', function() {
      links.forEach(link => link.classList.remove('active')); // Usuwa klasę 'active' z wszystkich linków
      this.classList.add('active'); // Dodaje klasę 'active' do klikniętego linku

      // Sprawdzenie, z której strony jest kliknięty link
      const linkPosition = this.parentElement.getBoundingClientRect().left;
      if (linkPosition < window.innerWidth / 2) {
        // Link po lewej stronie: strzałka skierowana w prawo
        this.classList.add('left-arrow');
        this.classList.remove('right-arrow');
      } else {
        // Link po prawej stronie: strzałka skierowana w lewo
        this.classList.add('right-arrow');
        this.classList.remove('left-arrow');
      }
    });
  });
});
