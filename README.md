header
======

Simple program that outputs all lines from a file up to the first blank line.

Useful for extracting just the header portion of an email file.

Syntax: header {filename|stdin}

There are no options.

Compared to doing this same operation in bash, header is twice as fast, which could be helpful in situations where bulk processing of large numbers of files is required.

Sample bash program for comparative purposes:

#!/bin/bash
exec < $1
while read line; do [[ -z $line ]] && exit 0 || echo $line; done

