#readelf: -SlDs --wide

There are no sections in this file.

#...
Program Headers:
  Type +Offset +VirtAddr.*
# On MIPS, the first segment is for .reginfo.
#...
  LOAD .*
#...
  DYNAMIC .*
#...
 +Num: +Value +Size Type +Bind +Vis +Ndx Name
 +0: 0+ +0 +NOTYPE +LOCAL +DEFAULT +UND +
#...
.* GLOBAL +DEFAULT.* __start
#...
.* GLOBAL +DEFAULT.* _start
#...
.* GLOBAL +DEFAULT.* main
#...
.* GLOBAL +DEFAULT.* start
#...
.* GLOBAL +DEFAULT.* _main
#pass
