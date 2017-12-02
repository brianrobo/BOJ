envirius
========

``envirius`` ? universal virtual environments manager.





Table of Contents
-----------------

  * [Envirius](#envirius)
      * [Idea](#idea)
          * [Features](#features)




Idea
----

Usually this kind of tools narrowly specialized for a particular
programming language. For example:

  * [virtualenv](https://github.com/pypa/virtualenv/) for python
  * [rvm](https://github.com/wayneeseguin/rvm/) for ruby
  * [kerl](https://github.com/spawngrid/kerl/) for erlang
  * [nvm](https://github.com/creationix/nvm)/[nodeenv](https://github.com/ekalinin/nodeenv/) for node.js
  * and so on

  But there are many cases when in the same environment you must have more
  than one programming language. For example, to create an environment with
  ``python2.6`` and ``node.js 0.10.24``. This idea underlies ``envirius``.
  Support for new programming languages are implemented as plug-ins (see below).

Features
--------
* clean design
* easy extensible
* test coverage
