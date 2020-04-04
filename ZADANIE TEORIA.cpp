<html>
<head>
    <script>
        var imie = prompt("imie", imie);
        var nazwisko = prompt("nazwisko", nazwisko);
        if (imie.match(/[A-Z)[a-z] + [A-Z][a-z]+/))
            console.log("Prawidlowe"); 
            else 
            console.log("Nieprawidlowe");
            if (nazwisko.match(/[A-Z)[a-z] + [A-Z][a-z]+/))
            console.log("Prawidlowe"); 
            else 
            console.log("Nieprawidlowe");
        alert(imie+ "   " +nazwisko);
        </script>
</head>
<body>
</body>
</html>
