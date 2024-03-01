# Объектно-ориентированная система “Магазин мобильных телефонов”

Эта абстрактная система демонстрирует основные функции сотового телефона, такие как: вызов, отправка сообщений (которые выполняются через класс SIM), подзарядка и т. д. Объекты класса SmartPhone расширяют эту функциональность с помощью таких функций, как: калькулятор, фотографирование, получить конфигурацию и т. д.
Кроме того, для большего разнообразия я добавил класс Shop и Citizen, который может покупать телефон и звонить другим людям.
Программа PhonesStore.exe предназначена для моделирования процесса взаимодействия человека с телефоном.

## Техническое задание
Предметная область включает	базовый класс MobilePhone и класс SIM
Создать класс MobilePhone, включающий в себя следующие элементы:
- поле «производитель» char * Vendor;
- поле «модель» char * Model;
- класс включает объект класса SIM-карта SIM * card;
- метод получения названия телефона (производитель + модель) char * GetName();
- метод вызова void Call();
- метод отправки SMS void SendSMS();
- метод «вставить SIM» void InsertSIM(SIM card);
- конструктор с параметрами MobilePhone(char * Vendor, char * Model).
Создать класс SIM, содержащий в себе элементы:
- поле «номер» char * Number;
- поле «оператор» char * Operator;
- конструктор с параметрами SIM(char * Operator, char * Number).
В классе MobilePhone перегрузить оператор ~ (yнарный, оператор класса), новое действие - вынуть SIM-карту.

## Особенности
- Двуязычный интерфейс
- Относительно большой функционал для демонстрации работы


## Диаграммы проектируемой абстрактной системы
#### Диаграмма прецедентов использования системы и вариантов использования процесса управления объектами
![](https://private-user-images.githubusercontent.com/59931307/309402801-bd24f80f-4814-465e-8ba1-2ee47601cb45.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MDkzMzE2NDEsIm5iZiI6MTcwOTMzMTM0MSwicGF0aCI6Ii81OTkzMTMwNy8zMDk0MDI4MDEtYmQyNGY4MGYtNDgxNC00NjVlLThiYTEtMmVlNDc2MDFjYjQ1LnBuZz9YLUFtei1BbGdvcml0aG09QVdTNC1ITUFDLVNIQTI1NiZYLUFtei1DcmVkZW50aWFsPUFLSUFWQ09EWUxTQTUzUFFLNFpBJTJGMjAyNDAzMDElMkZ1cy1lYXN0LTElMkZzMyUyRmF3czRfcmVxdWVzdCZYLUFtei1EYXRlPTIwMjQwMzAxVDIyMTU0MVomWC1BbXotRXhwaXJlcz0zMDAmWC1BbXotU2lnbmF0dXJlPWRiM2UxZmRhMDQ4ZDNiMjRlMDI4YjNhNGM3MzNmYTUyNGQ4YmI5OWRkZDk4ODY3NDk4NWZlMTEzMTA3ZjM1OTkmWC1BbXotU2lnbmVkSGVhZGVycz1ob3N0JmFjdG9yX2lkPTAma2V5X2lkPTAmcmVwb19pZD0wIn0.9bo9Jx_HqxS5LdolJMwXlECOhRTLzPFbkq7Dyx3h-is)

#### Первый этап объектно-ориентированного анализа (Взаимосвязь классов проектируемой системы)
![](https://private-user-images.githubusercontent.com/59931307/309402825-7a99b4d2-ae35-4e12-88da-e586e4650f67.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MDkzMzE2NDEsIm5iZiI6MTcwOTMzMTM0MSwicGF0aCI6Ii81OTkzMTMwNy8zMDk0MDI4MjUtN2E5OWI0ZDItYWUzNS00ZTEyLTg4ZGEtZTU4NmU0NjUwZjY3LnBuZz9YLUFtei1BbGdvcml0aG09QVdTNC1ITUFDLVNIQTI1NiZYLUFtei1DcmVkZW50aWFsPUFLSUFWQ09EWUxTQTUzUFFLNFpBJTJGMjAyNDAzMDElMkZ1cy1lYXN0LTElMkZzMyUyRmF3czRfcmVxdWVzdCZYLUFtei1EYXRlPTIwMjQwMzAxVDIyMTU0MVomWC1BbXotRXhwaXJlcz0zMDAmWC1BbXotU2lnbmF0dXJlPTNmZTEwNjcyNTAxMDYxMTMyMWU4OWYyMTFkMWYzZjcyM2QyOTFmMzJhMzg1ZGYxYTVhMjA5NmY0Nzc3ZThmZWImWC1BbXotU2lnbmVkSGVhZGVycz1ob3N0JmFjdG9yX2lkPTAma2V5X2lkPTAmcmVwb19pZD0wIn0.Muv0AoPg43dp6aZTg7zA9MdZEp_LYZAXgdOfGNWOwv8)


#### Второй этап объектно-ориентированного анализа (Взаимосвязь классов навигации)
![](https://private-user-images.githubusercontent.com/59931307/309402865-1b01f3d0-bcc8-4293-9921-366fa3914a8a.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MDkzMzE2NDEsIm5iZiI6MTcwOTMzMTM0MSwicGF0aCI6Ii81OTkzMTMwNy8zMDk0MDI4NjUtMWIwMWYzZDAtYmNjOC00MjkzLTk5MjEtMzY2ZmEzOTE0YThhLnBuZz9YLUFtei1BbGdvcml0aG09QVdTNC1ITUFDLVNIQTI1NiZYLUFtei1DcmVkZW50aWFsPUFLSUFWQ09EWUxTQTUzUFFLNFpBJTJGMjAyNDAzMDElMkZ1cy1lYXN0LTElMkZzMyUyRmF3czRfcmVxdWVzdCZYLUFtei1EYXRlPTIwMjQwMzAxVDIyMTU0MVomWC1BbXotRXhwaXJlcz0zMDAmWC1BbXotU2lnbmF0dXJlPTQ1NDE5MjMwOWU1NTc2YmVmNTU4NGFlMTRjYTcwNjAxOWUwMGMwMDZkNDgzZDhjNTNlZmVlYjA3NjI3NDkwZDUmWC1BbXotU2lnbmVkSGVhZGVycz1ob3N0JmFjdG9yX2lkPTAma2V5X2lkPTAmcmVwb19pZD0wIn0.4DmmAtNh0PuJgnUrCZLBt-ntNWkVrhtT4q6FrpLONdw)

#### Третий этап объектно-ориентированного анализа (Соединение взаимосвязей классов навигации и классов предметной области)
![](https://private-user-images.githubusercontent.com/59931307/309402880-a54b7375-adac-4276-a5e9-ac8e8651ef71.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MDkzMzE2NDEsIm5iZiI6MTcwOTMzMTM0MSwicGF0aCI6Ii81OTkzMTMwNy8zMDk0MDI4ODAtYTU0YjczNzUtYWRhYy00Mjc2LWE1ZTktYWM4ZTg2NTFlZjcxLnBuZz9YLUFtei1BbGdvcml0aG09QVdTNC1ITUFDLVNIQTI1NiZYLUFtei1DcmVkZW50aWFsPUFLSUFWQ09EWUxTQTUzUFFLNFpBJTJGMjAyNDAzMDElMkZ1cy1lYXN0LTElMkZzMyUyRmF3czRfcmVxdWVzdCZYLUFtei1EYXRlPTIwMjQwMzAxVDIyMTU0MVomWC1BbXotRXhwaXJlcz0zMDAmWC1BbXotU2lnbmF0dXJlPTQ5NjNkMDVlMzI4ZmU3ZWFkODAyYTFiYWMxMGU0ZDNlMzIwNWFjYjczODBmYTM1MmEzYmM5NjVkMTQ3ZmM2MzgmWC1BbXotU2lnbmVkSGVhZGVycz1ob3N0JmFjdG9yX2lkPTAma2V5X2lkPTAmcmVwb19pZD0wIn0.ZG3InZ8khNa6S4zCymPHl185WJQwL0slS7vOpIJUsEU)

#### Диаграмма классов проектируемой системы
![](https://private-user-images.githubusercontent.com/59931307/309402890-63a31036-f029-4bc9-adcf-9ccd177ae762.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MDkzMzE2NDEsIm5iZiI6MTcwOTMzMTM0MSwicGF0aCI6Ii81OTkzMTMwNy8zMDk0MDI4OTAtNjNhMzEwMzYtZjAyOS00YmM5LWFkY2YtOWNjZDE3N2FlNzYyLnBuZz9YLUFtei1BbGdvcml0aG09QVdTNC1ITUFDLVNIQTI1NiZYLUFtei1DcmVkZW50aWFsPUFLSUFWQ09EWUxTQTUzUFFLNFpBJTJGMjAyNDAzMDElMkZ1cy1lYXN0LTElMkZzMyUyRmF3czRfcmVxdWVzdCZYLUFtei1EYXRlPTIwMjQwMzAxVDIyMTU0MVomWC1BbXotRXhwaXJlcz0zMDAmWC1BbXotU2lnbmF0dXJlPTRhOTZmN2RjOTFkMDg3MzFhNWU1ZjA5ZmU3ZGUxYmJjNmRjZGU1NjFhMmZhMjk3Y2RiMTYzMjJhNjVmYzU5NjgmWC1BbXotU2lnbmVkSGVhZGVycz1ob3N0JmFjdG9yX2lkPTAma2V5X2lkPTAmcmVwb19pZD0wIn0.VREwaYXpVXU9Ulp-sqD3Fa7_mjm-GehiN2YtuDvNl6s)

#### Диаграмма объектов системы
![](https://private-user-images.githubusercontent.com/59931307/309402907-5388f312-5277-419d-bba7-66b914acced7.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MDkzMzE2NDEsIm5iZiI6MTcwOTMzMTM0MSwicGF0aCI6Ii81OTkzMTMwNy8zMDk0MDI5MDctNTM4OGYzMTItNTI3Ny00MTlkLWJiYTctNjZiOTE0YWNjZWQ3LnBuZz9YLUFtei1BbGdvcml0aG09QVdTNC1ITUFDLVNIQTI1NiZYLUFtei1DcmVkZW50aWFsPUFLSUFWQ09EWUxTQTUzUFFLNFpBJTJGMjAyNDAzMDElMkZ1cy1lYXN0LTElMkZzMyUyRmF3czRfcmVxdWVzdCZYLUFtei1EYXRlPTIwMjQwMzAxVDIyMTU0MVomWC1BbXotRXhwaXJlcz0zMDAmWC1BbXotU2lnbmF0dXJlPWEzYTc2NjhkZDRlZjE0ZTc0YTY1M2ExOTY5MzA3MmNhYjM3ZGU5YzI4MjY3NGMzYTc4NDJlYzE2ODFmNWZhNzkmWC1BbXotU2lnbmVkSGVhZGVycz1ob3N0JmFjdG9yX2lkPTAma2V5X2lkPTAmcmVwb19pZD0wIn0.qyvVQVVGEfiuvOF952RDchCCwcYEabCZaQTOslk-sfo)

#### Диаграмма последовательности
![](https://private-user-images.githubusercontent.com/59931307/309402916-892d32cc-e3fa-4317-889f-89091aa289cc.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MDkzMzE2NDEsIm5iZiI6MTcwOTMzMTM0MSwicGF0aCI6Ii81OTkzMTMwNy8zMDk0MDI5MTYtODkyZDMyY2MtZTNmYS00MzE3LTg4OWYtODkwOTFhYTI4OWNjLnBuZz9YLUFtei1BbGdvcml0aG09QVdTNC1ITUFDLVNIQTI1NiZYLUFtei1DcmVkZW50aWFsPUFLSUFWQ09EWUxTQTUzUFFLNFpBJTJGMjAyNDAzMDElMkZ1cy1lYXN0LTElMkZzMyUyRmF3czRfcmVxdWVzdCZYLUFtei1EYXRlPTIwMjQwMzAxVDIyMTU0MVomWC1BbXotRXhwaXJlcz0zMDAmWC1BbXotU2lnbmF0dXJlPTY1NDdiYTU0MGFiYjg4YzMxODZlYzAwNDE1ZmRjODIxMTYwMDZkMjUyZjI3MDczM2ZjZDQ3YzY2NjgzYzgyMGYmWC1BbXotU2lnbmVkSGVhZGVycz1ob3N0JmFjdG9yX2lkPTAma2V5X2lkPTAmcmVwb19pZD0wIn0.Wn1day4rQx4VaPy_iEmJK0xRuw6r2aJy89ZN3jDQbMc)

#### Диаграмма последовательности для сценария гражданин, сим-карта и смартфон
![](https://private-user-images.githubusercontent.com/59931307/309402924-dc30a509-9272-41f0-9b0e-6c752ce4b4f0.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MDkzMzIwMTIsIm5iZiI6MTcwOTMzMTcxMiwicGF0aCI6Ii81OTkzMTMwNy8zMDk0MDI5MjQtZGMzMGE1MDktOTI3Mi00MWYwLTliMGUtNmM3NTJjZTRiNGYwLnBuZz9YLUFtei1BbGdvcml0aG09QVdTNC1ITUFDLVNIQTI1NiZYLUFtei1DcmVkZW50aWFsPUFLSUFWQ09EWUxTQTUzUFFLNFpBJTJGMjAyNDAzMDElMkZ1cy1lYXN0LTElMkZzMyUyRmF3czRfcmVxdWVzdCZYLUFtei1EYXRlPTIwMjQwMzAxVDIyMjE1MlomWC1BbXotRXhwaXJlcz0zMDAmWC1BbXotU2lnbmF0dXJlPWVlNGYyYjc5ZDYxOGZjOWM0ZTk1ZGUxZjdiYzg4NmZkYjVhMTA5ODE2NTU0MWY3OGM1MzVhODM3OTZiMjk3M2MmWC1BbXotU2lnbmVkSGVhZGVycz1ob3N0JmFjdG9yX2lkPTAma2V5X2lkPTAmcmVwb19pZD0wIn0.TuvMEglHUn__9TZf96I8ShSjsBSrtsHI3xk96ZZq7jk)

#### Диаграмма модулей и её компонентов системы.
![](https://private-user-images.githubusercontent.com/59931307/309402943-d40e53e0-a506-4a4c-9b66-4d48c07c3e26.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MDkzMzIwMTIsIm5iZiI6MTcwOTMzMTcxMiwicGF0aCI6Ii81OTkzMTMwNy8zMDk0MDI5NDMtZDQwZTUzZTAtYTUwNi00YTRjLTliNjYtNGQ0OGMwN2MzZTI2LnBuZz9YLUFtei1BbGdvcml0aG09QVdTNC1ITUFDLVNIQTI1NiZYLUFtei1DcmVkZW50aWFsPUFLSUFWQ09EWUxTQTUzUFFLNFpBJTJGMjAyNDAzMDElMkZ1cy1lYXN0LTElMkZzMyUyRmF3czRfcmVxdWVzdCZYLUFtei1EYXRlPTIwMjQwMzAxVDIyMjE1MlomWC1BbXotRXhwaXJlcz0zMDAmWC1BbXotU2lnbmF0dXJlPTllNWQzMmI3ODQ2MTIyMmIyNTY0YTIxNGQ5ODZhMTQ4YzhjY2EzOGQ0NTRhZDRhNTU2ODRmMjJiODBkMWE1OTgmWC1BbXotU2lnbmVkSGVhZGVycz1ob3N0JmFjdG9yX2lkPTAma2V5X2lkPTAmcmVwb19pZD0wIn0.sTA1XGyl3S09wFnFqvbwHRexj5JR1wBSnIPPfwpGQiI)

## Обоснование алгоритмов
Одним из основных алгоритмов программы является алгоритм взаимодействие пользователя с меню. Переход по пунктам меню осуществляется при нажатии определенных клавиш.
После запуска программы в память подгружаются данные из файла локализации для её корректной работы. В случае если файлы не были найдены или их не удалось открыть, будет выведено сообщение об ошибке и программа завершит свою работу. Если никаких ошибок не возникло в ходе загрузки данных из файла локализации, происходит отображение всей нужной информации. Использование такого подхода сократит обращение к данным из файла, что в свою очередь увеличит производительность программы.
Содержимое файлов локализации загружается и хранится в памяти до тех пор, пока пользователь не завершит программу или не решит поменять язык. Информация хранящаяся в памяти выводится по мере надобности на экран. После смены языка происходит задержка связанная с перезаписью данных в память , но она не существенная так, что она не влияет на производительность.

## Как запустить
### Для запуска приложения выполните следующие шаги:

1. Клонируйте репозиторий.
2. Откройте файл решения в Visual Studio.
3. Постройте решение.
4. Запустите приложение.
