function setTheme(mode) {
    localStorage.setItem("theme-storage", mode);
    if (mode === "dark") {
        document.getElementById("darkModeStyle").disabled=false;
        document.getElementById("gialloDarkStyle").disabled=false;
        document.getElementById("dark-sun").style.display = "";
        document.getElementById("dark-moon").style.display = "none";
    } else if (mode === "light") {
        document.getElementById("darkModeStyle").disabled=true;
        document.getElementById("gialloDarkStyle").disabled=true;
        document.getElementById("dark-sun").style.display = "none";
        document.getElementById("dark-moon").style.display = "";
    }
}

function toggleTheme() {
    if (localStorage.getItem("theme-storage") === "light") {
        setTheme("dark");
    } else if (localStorage.getItem("theme-storage") === "dark") {
        setTheme("light");
    }
}

var savedTheme = localStorage.getItem("theme-storage") || "light";
setTheme(savedTheme);
