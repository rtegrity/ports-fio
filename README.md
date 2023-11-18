# Ports files for fio on CheriBSD

Copy _files_ to _ports/benchmarks/fio/files_

Fio uses shm to communicate between processes.
To disable it, add the following to Makefile:

~~~{.shm}
CONFIGURE_ARGS+=	--disable-shm
~~~

To install fio:

~~~{.sh}
export USE_PACKAGE_DEPENDS_ONLY=true
make -DWITH_DEBUG install
~~~

To update the instalation:

~~~{.sh}
make -DWITH_DEBUG deinstall
make -DWITH_DEBUG reinstall
~~~

To test fio:

Change filename= to size=2G in _./examples/basic-verify.fio_

~~~{.sh}
./fio ./examples/basic-verify.fio
~~~
