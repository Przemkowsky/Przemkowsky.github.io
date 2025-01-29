// Przykładowa funkcjonalność JavaScript
document.addEventListener("DOMContentLoaded", function() {
    const links = document.querySelectorAll("a");
    links.forEach(link => {
        link.addEventListener("mouseover", function() {
            this.style.color = "#ff6600"; // Zmiana koloru linku na pomarańczowy przy najechaniu
        });
        link.addEventListener("mouseout", function() {
            this.style.color = "#0066cc"; // Przywracanie koloru domyślnego
        });
    });
});
