As I don't particularly like the Arduino IDE itself and Code::Blocks is so much nicer
to use as an "editor", I've started to move the core libraries over.

This is split into two projects. One compiles the libraries and creates the 'core.a' file,
which is later linked against from the main code. The other is the user code, commonly called
'sketch' in the Arduino world.

So far it works quite nicely - as far I can test with my limited hardware. Currently I e.g. can't
test any of the Ethernet libs, except for compilation errors. The Wire library seems to work with
my boards.

The only concessions the user has to make is to do proper function prototyping himself in 'main.h'
and change the target mcu by hand and recompile the core, in case he switches between different types.
