Zadanie miało na celu zmodyfikowanie schedulera, który dzieli procesy na 3 kategorie: 0, 1 i 2. Mają być one przydzielane odpowiednio 1, 2 i 4 jednostki czasu.

Folder zawierający to README jest odpowiednikiem roota Minixa.

Po wykonaniu make hdboot w folderze /usr/src/tools trzeba także wykonać make all i następnie make install, żeby plik ps się zrekompilował. Bez tego ps nie działa, ponieważ nie „wie”, że struct proc ma więcej pól niż wcześniej.

W folderze tests znajduje się plik prepare_files, służący do kompilacji i zmiany uprawnień plików potrzebnych do testowania. Należy go najpierw uruchomić, potem dopiero można uruchamiać pliki testowe, które tworzą różne kombinacje procesów.

Skrypt tc_procs przyjmuje jako argumenty wywołania PID-y procesów, których wyświetli liczbę wywołań, bez zabijania ich.

Skrypt kill_procs służy do zakończenia działania procesów, których PID-y podaje się tak samo jak w tc_procs – jako argumenty wywołania.

Skrypty crt_proc_IO, crt_proc_CALC i crt_proc_INTER tworzą nowe procesy i zmieniają odpowiednio ich grupy na wartości 0, 1 lub 2. Wartość grupy 2 jest domyślnie ustawiana, więc nie trzeba zmieniać grupy w przypadku procesów interaktywnych.