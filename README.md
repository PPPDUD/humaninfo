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
