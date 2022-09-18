---
section: 11
x-masysma-name: adler32
title: Adler32 commandline utility
date: 2020/02/09 21:39:12
lang: en-US
author: ["Linux-Fan, Ma_Sys.ma (Ma_Sys.ma@web.de)"]
keywords: ["programs", "c"]
x-masysma-version: 1.0.0
x-masysma-repository: https://www.github.com/m7a/bo-adler32
x-masysma-website: https://masysma.net/11/adler32.xhtml
x-masysma-owned: 1
x-masysma-copyright: |
  Copyright (c) 2013, 2020 Ma_Sys.ma.
  For further info send an e-mail to Ma_Sys.ma@web.de.
---
Name
====

`adler32` -- Calculate Adler32 checksum of a stream of data.

Synopsis
========

	adler32

Description
===========

This program takes as input an arbitrarily long stream of bytes and outputs a
single hexadecimal Adler32 checksum. It is intended as an alternative to
CRC-based checksums which may run a little slower.

All actual computation is performed by zlib.

Example
=======

~~~
$ echo test | adler32
0x062801cb
~~~

Compilation
===========

Dependencies are as follows

 * a C compiler e. g. as provided by package `gcc-8-base` for Debian
 * Zlib, e. g. from Debian package `zlib1g-dev`
 * The `ant` build tool.

Compile the program as follows:

~~~
$ ant
~~~

Build a Debian package (having the necessary dependencies for package creation
installed) as follows:

~~~
$ ant package
~~~
