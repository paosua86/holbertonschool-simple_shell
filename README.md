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

	* [main.c](main.c) - main function
	* [AUTHORS](AUTHORS) - List of contributors to this repository
	* [man_1_simple_shell](man_1_simple_shell) - Manual page for the simple_shell
	* [main.h](main.h) - program header file
	* [read_prompt.c](read_prompti.c) - gets the command into a buffer
  * [create_child.c](create_child.c) - Do a fork to execute the command
	* [check_stat.c](check_stat.c) - checks if the arguments exist
	* [get_built_in.c](get_built_in.c) - Selects the correct function to perform
  * [try_path.c](try_path.c) - tokenizes the arguments of PATH
	* [print_path.c](print_path.c) - gets PATH from environ variable
  * [built_in.c](built_in.c) - gets the environ variable


## Requirements


simple_shell is designed to run in the `Ubuntu 20.04 LTS` linux environment and to be compiled using the GNU compiler collection `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`


## Installation


- Compile: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

- Run the shell in interactive mode: `./hsh`

- Or run the shell in non-interactive mode: example `echo "pwd" | ./hsh`


## Usage


The simple_shell is designed to execute commands in a similar manner to sh, however with more limited functionality. The development of this shell is ongoing. The below features will be checked as they become available (see man page for complete information on usage):


### Features


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

# <a href="url"><img src="https://viewer.diagrams.net/?tags=%7B%7D&highlight=0000ff&edit=_blank&layers=1&nav=1&title=charflow%20shell2%20(4).drawio#R7VxRd6I4FP41nu081JMEEHxsbTvTs%2B2cnnb37M4jStTsIHEhttpfP4kEBRItAgrtdF4KlwSSm%2B%2B7uffmOh1jMFt%2BDd359J562O8g4C07xlUHIQhQn%2F8RklUsMXswFkxC4slGW8ETecVSiKR0QTwcZRoySn1G5lnhiAYBHrGMzA1D%2BpJtNqZ%2B9qtzd4IVwdPI9VXpP8Rj01jqIHsr%2F4bJZJp8GfbkhGdu0hjEgmjqevQlJTKuO8YgpJTFV7PlAPtCeYle4n43O55uBhbigBXp0L%2F%2F038d3339NjhHj8C7D6%2F%2Bejg35djYKpkw9vj85S0N2ZROaOD611vpZUgXgYfFWwG%2F27a5o3TOhZAL%2F8OMreRiugtGuWjKZr58ipeE%2FSu6dy159yP15Gop37y%2BWSU3AQtXqU7i9kf62bbb%2Bi7pF89PTGqn2qQoootwJFv9%2FP%2FFvLUGJHgE%2FtiKbob0Oz1P4OeGE8z26BRtFpezAtMZ5uPh%2FULsu4w8Z8fhSnhONu22K8gv5CLqF3TfIJ9dfyG%2F9MQHzNRl9n1OIbGcL1PC8NPcXc%2F9hbM4u1g79fWMQ4aXKZE6ZfnUQDZftHUnaQUSTrxsKQUT2TRFJwccS03W7wH8Mjg3VZxr29labjUFfFMB%2FkNIZ3OO%2FJ7PZ3E5DPnVRFydzUPCdYKATwL8RcFBdpVPwA4DZLhhwoLk6NVADq0BSwbUEDlS1NgS5S1yZKixZcrxd4VeQbaYFcmx7noRhu4q1WBOOZKj1JsfaAztBHlOFlsQ2VbWSXijg2mCHJziIWzBtZlLBbzBJvEGD8Bb3bipigdl%2FWw7u342zBmJGKeyV85OHLaU%2B9iQssK3AcOhO1rPiXvFPEBQLfJt5PKVOosYI8GXjnGj2uQpnQ0X0YnsMcp5K1Drr0CNSYZ5ddfnsPTfo8Mi9FzcZVnfPeCQcJXhsLIfYxe0zLBXtyOj56bRB12U%2FpcBWc84GlO1Rhca7TG6dtFdvgscI7vTO4ZRHlW1GHINzPQKbzQutBXD%2FIhdT4x7iqUrrPGU%2BYziJ2ARMCI%2Bwj8etM9ntpDVsM%2BMPjMpB2RSNE6znjN2k5yBqjfD6E8ciNVIiDOis5kbeBruRCzkrVvAFZT1ZnqmLr60TsgVjV4D2p7dqPUhJ3QKejaoatBZzSSqe84KR59m8gjr3KyZdJR1vl6SSHi%2BlJtDEIgTjhuthXQZt4%2FgbC7OSmRrwiLsjzVm85QhIMqHgI6tMZrGsSJAPZ2cT%2BoUpg4yClKnahqmEnOSUaaYg5d4tGBF%2FAvR8rmF%2BWu44cUpnHGtXg3UHqqAYlSBZbyJUswoerxjaunYGFXU8534GMe4ULmRow7wKI6CP8SGhOONqWHK9GCWMk7%2FhOGrXr3vMr14%2BOZSijFFE4mJOW8LZVT%2FezAlvm4vGdOwFZFqvk4AAm2wekpmWJaixfcZxZhOJhl%2FDroQ2uVzp2WYZDW295Q6PTUcJ4NGo5%2BrsDqsfeXDU71O9cmUPMWbBGyp9MrJHKLCoKy93qUUKK1%2B1ndA%2Ff0n%2Bvn2lmWdAJSqt%2FYBzoGRbjM62jGwvlSiRZFNm5IAuwsxCxDbajZNqqHKmARknQTwxRKp%2FhpHv68L%2FQ%2Bjh8IFjZr30ENx1nRxP9DQo3%2B0g4XfpKqzFnZADT30DRulB1T5MVyMx1jkisWtkIiwvpaovhIjbGBnd9qiVc7HO2hTt%2BGICYOSJ8lhxeC1aql3ylpwvZb6ipYajvDqcJjt4xxI7jmmb2sRrGXlaiKdNzzmXHuzZo9Z7wUABYQk7TFrwHjnDrGfBZDrk0nAr0c4WMfrl4KqZOT6F%2FLBjHhejFUckVd3uH6fQINUIn%2B5ddmxrvZxXf7USnbubIoj08jZQ7SdluGcgxYBM6N7afzLVt4lTeh4HOGjlNElI%2Fysla%2FTTlQ9zy5lJ1C%2BdvoNO5FvX3dkrcebemQY0ED0EozntOx%2BDFsR82qnrQBdaCWZL6n%2B8%2FbbCjVVt8vR%2BHjrZdjJzzzejWlXM%2F%2FNlqmVDTCBk7X4wD5hzXS1jSCuLWos9lRP0AjnK1AD0O9%2F393VkLCslpFBvW6u1tPWlmJs8ppVc5b8dvv79Zh22%2F8FwLj%2BBQ%3D%3D" align="middle" width="1   00" height="100"></a>
