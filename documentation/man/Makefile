top_srcdir = ../..
srcdir     = .

SHELL      = /bin/sh

# Installation targets
#
prefix      = /nfs/amino-home/zcx/Projects/EVfold/ext/HMMER
exec_prefix = ${prefix}
datarootdir = ${prefix}/share
bindir      = ${exec_prefix}/bin
libdir      = ${exec_prefix}/lib
includedir  = ${prefix}/include
mandir      = ${datarootdir}/man
docdir      = ${datarootdir}/doc/${PACKAGE_TARNAME}
pdfdir      = ${docdir}
mandir      = ${datarootdir}/man
man1dir     = ${mandir}/man1
man1ext     = .1

INSTALL     = /usr/bin/install -c

MANS =  hmmer\
	hmmalign\
	hmmbuild\
	hmmconvert\
	hmmemit\
	hmmfetch\
	hmmlogo\
	hmmpgmd\
	hmmpress\
	hmmscan\
	hmmsearch\
	hmmsim\
	hmmstat\
	jackhmmer\
	makehmmerdb\
	phmmer\
	nhmmer\
	nhmmscan\
	alimask

.PHONY:  install uninstall clean distclean

install:
	for file in ${MANS}; do \
	   ${INSTALL} -m 0755 ${srcdir}/$$file.man ${DESTDIR}${man1dir}/$${file}${man1ext} ;\
	done

uninstall:
	for file in ${MANS}; do \
	   rm ${DESTDIR}${man1dir}/$${file}${man1ext} ;\
	done

clean:
	-rm -f *~ 

distclean:
	-rm -f *~ 
	-rm -f Makefile

################################################################
# HMMER - Biological sequence analysis with profile HMMs
# Version 3.1b2; February 2015
# Copyright (C) 2015 Howard Hughes Medical Institute.
# Other copyrights also apply. See the COPYRIGHT file for a full list.
# 
# HMMER is distributed under the terms of the GNU General Public License
# (GPLv3). See the LICENSE file for details.
#
# SVN $URL: https://svn.janelia.org/eddylab/eddys/src/hmmer/branches/3.1/documentation/man/Makefile.in $
# SVN $Id: Makefile.in 4576 2013-12-18 04:58:49Z wheelert $
################################################################
