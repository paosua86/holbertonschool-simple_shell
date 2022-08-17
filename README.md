# <a href="url"><img src="https://img.freepik.com/vector-gratis/ilustracion-objeto-verano-playa_53876-20309.jpg" align="middle" width="100" height="100"></a> simple_shell


## Table of Contents


* [Description](#description)
* [File Structure](#file-structure)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Bugs](#bugs)
* [Authors](#authors)
* [License](#license)
* [Charflow](#charflow)


## Description


simple_shell is a command line interpreter, or shell, in the tradition of the first Unix shell written by Ken Thompson in 1971. This shell is intentionally minimalistic, yet includes the basic functionality of a traditional Unix-like command line user interface.

Standard functions and system calls employed in simple_shell include:
   `execve, exit, fork, free, getline, malloc, perror, stat, wait, write.`

## File Structure

	[main.c](main.c) - main function
	[AUTHORS](AUTHORS) - List of contributors to this repository
	[man_1_simple_shell](man_1_simple_shell) - Manual page for the simple_shell
	[main.h](main.h) - program header file
	[read_prompt.c](read_prompt.c) - gets the command into a buffer
	[create_child.c](create_child.c) - Do a fork to execute the command
	[check_stat.c](check_stat.c) - checks if the arguments exist
	[get_built_in.c](get_built_in.c) - Selects the correct function to perform
	[try_path.c](try_path.c) - tokenizes the arguments of PATH
	[print_path.c](print_path.c) - gets PATH from environ variable
	[built_in.c](built_in.c) - gets the environ variable


## Requirements


simple_shell is designed to run in the `Ubuntu 20.04 LTS` linux environment and to be compiled using the GNU compiler collection `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`


## Installation


- Compile: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

- Run the shell in interactive mode: `./hsh`

- Or run the shell in non-interactive mode: example `echo "pwd" | ./hsh`


## Usage


The simple_shell is designed to execute commands in a similar manner to sh, however with more limited functionality. The development of this shell is ongoing. The below features will be checked as they become available (see man page for complete information on usage):


## Features


- [x] uses the PATH
- [x] implements builtins
- [x] handles command line arguments
- [x] uses exit status


## Bugs


At this time, there are no known bugs.


## Authors


Juan David Otalora | otalorajuand@gmail.com

Paola Suarez | paolasuarezb86@gmail.com


## License


simple_shell is open source and therefore free to download and use without permission.


## Charflow

# <a href="https://ibb.co/d2pq4WG"><img src="https://i.ibb.co/YkdMBRp/charflow-shell2-4-drawio.png" alt="charflow-shell2-4-drawio" border="0" align="middle" /></a>
