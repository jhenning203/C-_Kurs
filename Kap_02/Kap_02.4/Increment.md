# Post- und Preinkrement
Wichtig in c++ ist die Unterscheidung zwischen Post- und Preinkrement. Beim Postinkrement wird der **Wert erst *nach* Durchlaufen der Codezeile** erhöht. Dies kann bei z.B. Werteübergaben an andere Funktionen oder sonstigen Operationen zu Fehlern führen. Deshalb sollte man im Zweifel immer das Preinkrement verwenden.

## Postinkrement

``` c++
i++ //Postinkrement
```

Hier wird der Wert erst nach durchlaufen der Codezeile erhöht.

``` c++
 int i = 0;
 std::main(i++); /* Hier würde man erwarten, dass eins übergeben wird. Es wird aber zuerst 0 übergeben und dann inkrementiert */
```

## Preinkrement

``` c++
++i //Preinkrement
```

Hier wird der Wert zuerst erhöht, und dann die Codezeile fertig durchlaufen.

``` cpp
 int i = 0;
 std::main(++i); /* Hier wird jetzt eins an die Funktion übergeben */
```
