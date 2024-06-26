# COMPILADOS

[.bin RELEASE COMPILADOS](https://github.com/bytevictor/V6_MAX_ANSI-ES_ISO_Layout_Firmware/releases/tag/v.bytevictor)

# Cómo compilar y flashear

El código está en `keyboards/keychron/v6_max/ansi_encoder/keymap/via`

`rules.mk` -> KEY_OVERRIDE_ENABLE = yes (Importante para que compile)

`keymap.c` -> Definiciones



### Compilar el código
```bash
qmk compile -kb keychron/v6_max/ansi_encoder -km via
```

OR

```bash
make keychron/v6_max/ansi_encoder:via
```
coger el `.bin` que se genera en `/.build` y abrirlo con [QMKToolbox](https://github.com/qmk/qmk_toolbox)

Tienes que poner el teclado en modo flash para poder flashear el firmware.

- Instala los drivers correspondientes con QMKToolbox: Tools > Install Drivers...
- Lo pones en modo cable
- Mantienes pulsado ESC y enchufas a la vez
- Te saldrá un mensaje en amarillo en el QMKToolbox
- Le das a flash
- Luego manten `fn + j + z` en el teclado hasta que parpadee el backlight
- A funcionar


Si el teclado ha muerto es que estás subiendo una versión de firmware incorrecta, por ejemplo la V6 en vez de V6 Max (me pasó jaja).

<br>
<br>
<br>
<br>

###  Quantum Mechanical Keyboard Firmware

[![Current Version](https://img.shields.io/github/tag/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/tags)
[![Discord](https://img.shields.io/discord/440868230475677696.svg)](https://discord.gg/Uq7gcHh)
[![Docs Status](https://img.shields.io/badge/docs-ready-orange.svg)](https://docs.qmk.fm)
[![GitHub contributors](https://img.shields.io/github/contributors/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/pulse/monthly)
[![GitHub forks](https://img.shields.io/github/forks/qmk/qmk_firmware.svg?style=social&label=Fork)](https://github.com/qmk/qmk_firmware/)

This is a keyboard firmware based on the [tmk\_keyboard firmware](https://github.com/tmk/tmk_keyboard) with some useful features for Atmel AVR and ARM controllers, and more specifically, the [OLKB product line](https://olkb.com), the [ErgoDox EZ](https://ergodox-ez.com) keyboard, and the Clueboard product line.

## Documentation

* [See the official documentation on docs.qmk.fm](https://docs.qmk.fm)

The docs are powered by [Docsify](https://docsify.js.org/) and hosted on [GitHub](/docs/). They are also viewable offline; see [Previewing the Documentation](https://docs.qmk.fm/#/contributing?id=previewing-the-documentation) for more details.

You can request changes by making a fork and opening a [pull request](https://github.com/qmk/qmk_firmware/pulls), or by clicking the "Edit this page" link at the bottom of any page.

## Supported Keyboards

* [Planck](/keyboards/planck/)
* [Preonic](/keyboards/preonic/)
* [ErgoDox EZ](/keyboards/ergodox_ez/)
* [Clueboard](/keyboards/clueboard/)
* [Cluepad](/keyboards/clueboard/17/)
* [Atreus](/keyboards/atreus/)

The project also includes community support for [lots of other keyboards](/keyboards/).

## Maintainers

QMK is developed and maintained by Jack Humbert of OLKB with contributions from the community, and of course, [Hasu](https://github.com/tmk). The OLKB product firmwares are maintained by [Jack Humbert](https://github.com/jackhumbert), the Ergodox EZ by [ZSA Technology Labs](https://github.com/zsa), the Clueboard by [Zach White](https://github.com/skullydazed), and the Atreus by [Phil Hagelberg](https://github.com/technomancy).

## Official Website

[qmk.fm](https://qmk.fm) is the official website of QMK, where you can find links to this page, the documentation, and the keyboards supported by QMK.
