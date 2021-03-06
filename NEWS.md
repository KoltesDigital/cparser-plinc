cparser 0.9.13 (2011-12-07)
---------------------------

* Adapt to libfirm-1.20.0
* Implement --help
* More work on preprocessor (still not finished though)
* Refactoring work so others can reuse input, optimization order logic
* Columns in source positions (but external preprocessor doesn't preserve all spaces)
* Improvements to gnu builtins/attributes
* Bugfixes (we did alot of csmith testing)

cparser 0.9.12 (2011-03-15)
---------------------------

* Adapt to libfirm-1.19.0
* Introduce -mtarget (and -mtriple for llvm compatibility) for conventient
  cross-compilation
* Fix big-endian struct layouting
* Bugfixes

cparser 0.9.11 (2009-05-16)
---------------------------

* add missing NEWS entries
* fix crash when known C library functions had the wrong number of arguments

cparser 0.9.10 (2009-04-15)
---------------------------

* bugfixes
* adapt to libfirm-1.18.0

cparser 0.9.9 (2009-05-15)
--------------------------

* bugfixes
* extend and improve support for attributes
* adapat to latest libfirm

cparser 0.9.8 (2009-01-28)
--------------------------
* several bugfixes
* add/correct semantic checks
* improve error recovery
* support more GCC extensions
* add/improve/correct warnings

cparser 0.9.7 (2008-12-01)
--------------------------

* several bugfixes
* add/correct semantic checks
* improved error recovery
* support more GCC extensions
* support more GCC switches
* add a manpage

cparser 0.9.6 (2008-11-22)
--------------------------

* lots of bugfixes
* add/correct semantic checks
* more/improved warnings
* internal cleanups (introduce entity_t types)
* support more gnu extensions
* improved error recovery
* support more switches for gcc compatibility
* support for libc builtins

cparser 0.9.5 (2008-07-31)
--------------------------

* lots of bugfixes
* sync with latest libfirm
* improve error handling (more graceful continue in case of an error)
* compatibility fixes for old C stuff (=> SPECint2000 works now)
* improved commandline, more gcc compatibility flags
* support more gnu extensions
* parse all gnu extensions

cparser 0.9 (2008-02-08)
------------------------

* initial release
* cparser is able to bootstrap itself
