10 GET I$
20 IF I$<>"" THEN PRINT I$;
30 IF I$="" THEN PRINT ".";
40 IF I$="Q" THEN END
45 FOR I=0 TO 1000: NEXT I
50 GOTO 10
