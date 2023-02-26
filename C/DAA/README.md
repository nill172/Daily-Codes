# DAA Notes
## Renameing the output file
`gcc helloworld.c` will give you a.exe <br />
If we use `gcc -o hello helloworld.c` <br />
It will give you `hello` file <br />
## Execute of multiple file
If we have multiple code file, that takes referece from external code.	<br />
We can execute bothe in single output.	<br />
Like, if we have `file1.c` and `file2.c`	<br />
then, `gcc -o file3 file1.c file2.c`	<br />
the output file will be `file3`		<br />

