<div id="header" align="center">
  <img src="https://media.giphy.com/media/CTX0ivSQbI78A/giphy.gif" width="100"/>
</div>
<div id="badges" align="center">
  <a href="https://vk.com/vesimeu">
    <img src="https://img.shields.io/badge/VK-blue?style=for-the-badge&logo=VK&logoColor=white" alt="VK Badge"/>
  </a>
  <a href="https://t.me/Vesimeu">
    <img src="https://img.shields.io/badge/Telegram-white?style=for-the-badge&logo=Telegram&logoColor=blue" alt="TG Badge"/>
  </a>
</div>

<h1 align="center">
  
## Функционал

- **Создание объектов**: Возможность создавать объекты, представляющие устройства или элементы умного дома.
- **Управление устройствами**: Команды для управления состоянием устройств, таких как включение/выключение света, управление жалюзи и т.д.
- **Условные операторы**: Возможность использовать условные операторы (`if`, `else`) для создания сложной логики управления.
- **Переменные**: Поддержка переменных типа `int` и `string` для хранения и манипуляции данными.
- **Математические операции**: Поддержка основных математических операций для работы с числовыми данными.
- **Вывод данных**: Возможность выводить информацию о состоянии объектов и переменных.

## Основные Функции
```txt
create_object "LivingRoom";
"LivingRoom".set_temperature(23);
int A == 20;
print(A);
A == A + 20
"LivingRoom".turn_on_light();
if ("LivingRoom".temperature == 23) { 
    "LivingRoom".turn_off_light();
    "LivingRoom".set_temperature(20);
} else {
    "LivingRoom".turn_off_light();
     print(5*25);

}
"LivingRoom".status();


Как Начать
gcc -o smart_home_2 smarthome.tab.c lex.yy.c smart_objects.c -lm -- скомпилировать проект.
./smart_home_2 input.txt > output.txt 
