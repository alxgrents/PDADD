# PDADD (Parallel disk aware discord discovery)

#### Описание
Программная система для поиска аномалий во временном ряде на высокопроизводительном вычислительном кластере с многоядерными ускорителями<br>
- [Модульная структура](/docs/images/modules.jpg)
- [Файловая структура](/docs/images/files.jpg)
- [Структуры данных](/docs/images/data.jpg)

Реализация состоит из четырёх частей:
1. [Алгоритм для 1 узла и 1 ядра](/PDADD-linear) Реализован, протестирован✅<br>
2. [Алгоритм для 1 узла и нескольких ядер](/PDADD-omp) Реализован, протестирован✅<br>
3. [Алгоритм для нескольких узлов и 1 ядра](/PDADD-mpi) Реализован, протестирован✅<br>
4. [Алгоритм для нескольких узлов и нескольких ядер](/PDADD-mpi+omp) Реализован, протестирован✅<br>

Дополнительно приведены исполняемые коды для экспериментов на [суперкомпьютере "Торнадо ЮУрГУ"](https://supercomputer.susu.ru/computers/tornado/):
1. [Алгоритм для нескольких узлов и нескольких ядер с обычным вычислением евклидова расстония](/PDADD-tornado) Реализован, протестирован✅<br>
2. [Алгоритм для нескольких узлов и нескольких ядер с норомализованным вычислением евклидова расстония](/PDADD-tornado-ED_norm) Реализован, протестирован✅<br>

<hr>

[**Результаты вычислительных экспериментов**](https://drive.google.com/open?id=1CLbsUrWlWkHpnRlcNeRbI6efHVsMuUj1)

[Подробные результаты экспериментов](https://docs.google.com/spreadsheets/d/1dJWZMRllznElxyI6ZTrmGiSUGYtYVOTOYgcRfZT-ucE/edit#gid=1566595512)

[Данные для экспериментов](https://yadi.sk/d/qCgEygEKZ74qhA)
