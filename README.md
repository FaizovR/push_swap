<img src="https://sun9-55.userapi.com/c845219/v845219416/75ef4/_KaBeafQd-s.jpg" width=150>

# Push_swap project

## Table of contents
* [What is it about?](#what-is-it-about)
* [Usage](#usage)
* [Bonus](#bonus)
* [Authors](#authors)

## What is about?
**Push_swap** is a [School 21][21] project. The main purpose of this project is to create efficient sorting algorithm
to sort data on stack, with a limited set of instructions, using the lowest possible number of instructions. 

Here is a set of instructions, which are valid for this project: 

| Instructions  | Description   |
|:-------------:|---------------|
| sa            | swap first two elements of stack A |
| sb            | swap first two elements of stack B |
| ss            | sa and sb at the same time |
| pa            | pops the first elememt on B and puts it on top of A |
| pb            | pops the first elememt on A and puts it on top of B |
| ra            | rotates stuck A up by one|
| rb            | rotates stuck B up by one |
| rr            | rotates both A and B up by one |
| rra           | rotates stuck A down by one |
| rrb           | rotates stuck B down by one |
| rrr           | rotates both A and B down by one |

## Usage
To create `push_swap` and `checker` executable, after cloning this repo. 
```sh
    $ git clone https://github.com/isakovairat/push_swap.git
    $ cd push_swap
    $ make
```

Two executables will be created `push_swap` and `checker`. 
To get instructions how to sort stack, use `./push_swap {random int values}`

For example:
```sh
    $ ./push_swap 3 2 1
```

You will get some instructions, where ra - rotate stack A, sa - swap two first elements in stack A:
```sh
ra
sa
```

To check instructions of `push_swap` you have to use `checker`

```sh
    $ ./checker 3 2 1
```

And after that `checker` is waiting to get your instructions.

For example:
```sh
pb
pb
pb
rb
sb
pa
pa
pa
```

You will get **OK**, which means that all instructions that you've typed are correct and they sort the stack.
Otherwise, you will get **KO**.

## Bonus

As a bonus, we've made a simple visualization, using **minlibx** school 42 library. **(only MacOS High Sierra supported!)**

![visualizer](/images/visualizer1.png)

![visualizer](/images/visualizer2.png)

![visualizer](/images/visualizer3.png)

## Authors

This project was made by Airat Isakov [@isakovairat](https://github.com/isakovairat) and Rustam Faizov [@FaizovR](https://github.com/FaizovR)

[21]: https://21-school.ru/

