# La descripción

Esta es una versión actualizada de JadxFindJNI para adaptarse a las últimas IDAPro y JADX.
Busque las funciones de la interfaz nativa de Java desde apk y expórtelas al archivo de notación de objetos de JavaScript.

## Construir

```sh
$ make all
```

## Uso

```
$ java -jar JadxFindJNI.jar
Usage: JadxFindJNI.jar <file.apk> <output.json>
```

## Créditos

- [skylot/jadx][jadx]
- [evilpan/jni_helper][evilpan]

[jadx]: https://github.com/skylot/jadx
[evilpan]: https://github.com/evilpan/jni_helper
