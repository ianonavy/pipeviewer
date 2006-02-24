/*
 * Output version information to stdout.
 *
 * Copyright 2005 Andrew Wood, distributed under the Artistic License.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>


/*
 * Display current package version.
 */
void display_version(void)
{
	printf(_("%s %s - Copyright(C) %s %s"),	/* RATS: ignore */
	       PROGRAM_NAME, VERSION, COPYRIGHT_YEAR, COPYRIGHT_HOLDER);
	printf("\n\n");
	printf(_("Web site: %s"),	    /* RATS: ignore */
	       PROJECT_HOMEPAGE);
	printf("\n\n");
	printf("%s",
	       _("This program is free software, and is being distributed "
		 "under the\nterms of the Artistic License."));
	printf("\n\n");
	printf("%s",
	       _
	       ("This program is distributed in the hope that it will be useful,\n"
		"but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
		"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE."));
	printf("\n\n");
#ifdef HAVE_GETOPT_LONG
	printf(				    /* RATS: ignore */
		      _
		      ("For more information, please run `%s --license'."),
		      PROGRAM_NAME);
#else
	printf(				    /* RATS: ignore */
		      _
		      ("For more information, please run `%s -l'."),
		      PROGRAM_NAME);
#endif
	printf("\n");
}

/* EOF */