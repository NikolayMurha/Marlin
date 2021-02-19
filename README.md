# Marlin для Fliyng Bear 5 с интерфейсом MKS UI

Это форк bugfix ветки Marlin с включенным графическим интерфейсом от компании MKS. Изменения внесены только в файлы конфигурации.

Ветка bugfix используется из-за того, что код работы с wifi модулем пока не добавлен в основную ветку.

Настройки направления движения осей сделаны для принтера FB5 в стандартной конфигурации. Если вам нужно изменить направление, сделать это можно в файле Marlin/Configuration.h (строка 1127):

```
#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR false

// @section extruder

// For direct drive extruder v9 set to true, for geared extruder set to false.
#define INVERT_E0_DIR false

```

# Сборка, прошивка

Плата robin nano v1.*, которая установлена в принтерах FB5 и FB4S, уже выбрана в настройках platformio. Для сборки достаточно нажать Ctrl+Alt+B. В некоторых случаях, при первой попытке скомпилировать прошивку возникают ошибки. В таком случае, нужно нажать на значок platformio (инопланетянин), в разделе Project tasks выбрать Default -> General -> Clean All. После этого попробовать собрать еще раз.

После успешной сборки, прошивка находится в папке .pio/build/mks_robin_nano35 На sd карту нужно скопировать файл Robin_nano35.bin а так же папку assets (в ней содержатся картинки и шрифты).
