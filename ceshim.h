//
//  ceshim.h
//  sqlite
//
//  Created by Ryan Homer on 5/2/2016.
//  Copyright © 2016 Murage Inc. All rights reserved.
//

#ifndef ceshim_h
#define ceshim_h

int ceshim_register(
  const char *zName,                /* Name of the newly constructed VFS */
  const char *zParent,              /* Name of the underlying VFS. NULL to use default. */
  void *pCtx,                       /* Context pointer to be passed to compress functions */
  int (*xCompressBound)(void *pCtx, int nSrc),
  int (*xCompress)(void *pCtx, char *aDest, int *pnDest, char *aSrc, int nSrc),
  int (*xUncompress)(void *pCtx, char *aDest, int *pnDest, char *aSrc, int nSrc),
  int (*xOut)(const char*,void*),   /* Output routine. */
  void *pOutArg                     /* 2nd argument to xOut.  ex: stderr */
);

int ceshim_unregister(const char *zName);

#endif /* ceshim_h */
