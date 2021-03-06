/* i/o of multiple sequence alignment files in aligned FASTA format
 * (first sequence only)
 */
#ifndef eslMSAFILE_AFQ_INCLUDED
#define eslMSAFILE_AFQ_INCLUDED

#include "esl_msa.h"
#include "esl_msafile.h"

extern int esl_msafile_afq_SetInmap     (ESLX_MSAFILE *afp);
extern int esl_msafile_afq_GuessAlphabet(ESLX_MSAFILE *afp, int *ret_type);
extern int esl_msafile_afq_Read         (ESLX_MSAFILE *afp, ESL_MSA **ret_msa);
extern int esl_msafile_afq_Write        (FILE *fp, const ESL_MSA *msa);

#endif /* eslMSAFILE_AFQ_INCLUDED */

/*****************************************************************
 * Easel - a library of C functions for biological sequence analysis
 * Version h3.1b2; February 2015
 * Copyright (C) 2015 Howard Hughes Medical Institute.
 * Other copyrights also apply. See the COPYRIGHT file for a full list.
 * 
 * Easel is distributed under the Janelia Farm Software License, a BSD
 * license. See the LICENSE file for more details.
 *
 * SVN $Id: esl_msafile_afq.h 708 2011-07-20 12:49:10Z eddys $
 * SVN $URL: https://svn.janelia.org/eddylab/eddys/easel/branches/hmmer/3.1/esl_msafile_afq.h $
 *****************************************************************/
