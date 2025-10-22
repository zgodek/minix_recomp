Zadanie 1 polegało na znalezieniu numer id procesu, który zawiera najwięcej potomnych procesów.
Zadanie 2 miało to samo na celu, ale dodatkowo należy pominąć proces o id podanym jako jeden z agrumentów na wejściu. 

Folder zawierający to README jest odpowiednikiem roota Minixa. Znajduje się tu folder usr/ z modyfikowanymi plikami jądra Minixa, a także folder z testami o nazwie tests/.

Folder tests zawiera 2 pliki test_sysc1.c i test_sysc2.c uruchamiające wywołania systemowe z zadania 1 i zadania 2.
Jest tam także program procs1.c, który tworzy ilość dzieci zadaną mu jako argument wywołania programu
(jeśli go nie ma, domyślnie tworzy 10 dzieci).
Program procs2.c natomiast tworzy ścieżkę o zadanej długości w argumencie wywołania (bez argumentu domyślnie tworzy ścieżkę o długości 5).

Skrypt zad1 jest do testowania wywołania z zadania 1, które szuka procesu o największej ilości dzieci.
Przyjmuje on jako argument ilość dzieci procesu, który tworzy program procs1.c.

Skrypt zad2 testuje wywołanie z zadania 2, które szuka rodzica ścieżki o najdłuższej długości. Nie podaje PID-u do pominięcia. Przyjmuje długość ścieżki, jaką ma wytworzyć procs2.c.

Skrypt zad2_pid_avoid także testuje wywołanie z zadania 2, natomiast – jak nazwa wskazuje – podaje on też argument procesu do pominięcia. Jest on „zahardkodowany” na 1, ponieważ 1 to PID procesu inicjalizującego system; każdy inny proces (oprócz tego o PID równym 0) jest jego dzieckiem. Tak więc siłą rzeczy pominięcie jakiegokolwiek innego PID-u jest bez sensu.
Ten skrypt także przyjmuje długość ścieżki, jaką ma wytworzyć program procs2.c.

Skrypt testing wywołuje skrypty zad1, zad2 i zad2_pid_avoid dla różnych argumentów.