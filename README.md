# humaninfo
A simple and quite bodged together solution for sharing the names and locations of humans.

# Using `humaninfo`
`humaninfo` is a program that writes info about the name and location of a human (hence the name).

You can use it on the command line using the following form, where `myfile.hif` is the filename that you want to write to:
`humaninfo myfile.hif`

`humaninfo` will ask you for your location, first name, and last name.

It should then output the following messages:

[DEBUG] Successfully wrote data to file</br>
[DEBUG] Flushing data..</br>
[DEBUG] Data flushed. It is now safe to close this program.</br>

This is a good thing. It means that it has successfully saved to your file of choice and that you can close your command line without losing any of your data.

If it says something different, then skip to "Errors and What They Mean".

# Using `humaninforeader`
`humaninforeader` is a program that lets users read the files produced by `humaninfo`.

You can use it on the command line using the following form, where `myfile.hif` is the filename that you want to read from:
`humaninforeader myfile.hif`

If `humaninforeader` shows an error and stops itself, then skip to "Errors and What They Mean".

# Developing for the Human Info Format
Since we want to make Human Info's ecosystem open and inviting, we have written a small C library that allows for other programs to read and understand the Human Info Format.

It can be found in `personReader.h`, and it introduces these exciting new data types and functions:
 - the `Person` object, which lets you handle in-memory instances of the Human Info Format.
 - the `Person get_person(FILE* infile)` function, which takes in a file pointer (`infile`) and outputs a `Person` object.

If you have the knowledge and skills required to port this library to other programming languages, please open a pull request. We need every port that we can get.

# Errors and What They Mean
This section documents some common errors in Human Info and what they mean.

`Fatal error: file access error`: The filename that you provided does not exist or is not accessible.

`Fatal error: file unwritable`: The filename that you provided could not be written to. Make sure that your storage medium allows for writing to existing files, and enable write access in the file's permissions.

`Fatal error: incorrect amount of arguments`: You forgot to specify a filename.
