# zad2

2.1
-
Skopiować dane z wektora `strings` do listy używając metod
- emplace_back
- push_back
- insert

2.2
-
Skopiować dane z wektora `strings` do listy nie używając pętli

2.3
-
Stworzyć klasę `Operation` posiadającą 2 pola:
- `duration` określające długość trwania w mikrosekundach (std::chrono::microseconds)
- `name`

Konstruktor uzupełniający te pola

2.4
-

Stworzyć wektor z obiektami klasy `Operation`, uzupełnić go dowolnymi operacjami wykorzystując metody:
- push_back
- emplace_back

2.5
-

Stworzyć mapę mapującą nazwę operacji do długości trwania.
Skopiować dane z wektora operacji. 
Wyświetlić posortowane w ten sposób dane.

Zadanie domowe
-

Zaimplementuj klasy Stats, Operation, OperationTracker

Klasa Operation:
- metoda start() ma zapisywać aktualny czas w polu klasu
- metoda stop() ma zapisywać aktualny czas w innym polu
- metoda getDuration() ma obliczać na podstawie zapisanych danych czas trwania operacji

Klasa Stats
za zadanie ma agregować i wyświetlać operacje. Należy użyć do tego odpowiednich kontenerów.
- Metoda `add(std::string type, Operation operation)` ma dodawać operacje
- Operator << ma je wyświetlać
- Operacje mają być zgrupowane w kategoriach
- kategorie określa podany do metody add string type

Klasa OperationTracker
ma za zadanie mieczyć czas wykonania segmentu kodu. Należy użyć do tego wzorca RAII.
Konstruktor "startować" obiekt klasy Operation, destruktor ma "stopować" obiekt
i dodawać go do obiektu klasy Stats

