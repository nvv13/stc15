# stc15w408as


enverument fedora linux 27

1.install flasher

$ git clone https://github.com/grigorig/stcgal.git

$ cd stcgal

$ python3 setup.py



2.install sdcc

[root@localhost ~]$ dnf install sdcc



3.add path

export PATH=$PATH:/usr/libexec/sdcc

к примеру, добавить в файл .bash_profile

PATH=$PATH:$HOME/.local/bin:/usr/libexec/sdcc:$HOME/bin
export PATH



4.подключаем МК к компу, например через USB-ttl платку
 USB-TxD---11(RxD)MK для stc15w408as DIP20
 USB-RxD---12(TxD)MK ...
(порт USB, прописываем в make файле)


5.очистка-сборка-заливка,
  во время заливки, 
  прога попросит вкл.выкл. питание МК - при старте он входит в режим загрузчика (кратковременно)
$ make clean
$ make
$ make flash


6.первоначально, если не прошьется, (новый МК), надо "прошить" с выставлением частоты
  через софт с сайта STCmicro.com (в Windows)

