/*
* This file was generated automatically by xsubpp version 1.9508 from the
* contents of tmp. Do not edit this file, edit tmp instead.
*
*		ANY CHANGES MADE HERE WILL BE LOST!
*
*/


/*	EQEMu: Everquest Server Emulator
	Copyright (C) 2001-2004 EQEMu Development Team (http://eqemulator.net)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; version 2 of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY except by those people which sell it, which
		are required to give you total support for your newly bought product;
		without even the implied warranty of MERCHANTABILITY or FITNESS FOR
		A PARTICULAR PURPOSE. See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

typedef const char Const_char;

#ifdef EMBPERL
#include "global_define.h"
#include "useperl.h"
#include "eqdb.h"

#ifdef THIS /* this macro seems to leak out on some systems */
#undef THIS
#endif


XS(XS_EQDB_field_count); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQDB_field_count)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQDB::field_count(THIS)");
	{
		EQDB *		THIS;
		unsigned int		RETVAL;
		dXSTARG;

		if (sv_derived_from(ST(0), "EQDB")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQDB *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQDB");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->field_count();
		XSprePUSH; PUSHu((UV)RETVAL);
	}
	XSRETURN(1);
}

XS(XS_EQDB_affected_rows); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQDB_affected_rows)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQDB::affected_rows(THIS)");
	{
		EQDB *		THIS;
		unsigned long		RETVAL;
		dXSTARG;

		if (sv_derived_from(ST(0), "EQDB")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQDB *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQDB");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->affected_rows();
		XSprePUSH; PUSHu((UV)RETVAL);
	}
	XSRETURN(1);
}

XS(XS_EQDB_insert_id); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQDB_insert_id)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQDB::insert_id(THIS)");
	{
		EQDB *		THIS;
		unsigned long		RETVAL;
		dXSTARG;

		if (sv_derived_from(ST(0), "EQDB")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQDB *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQDB");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->insert_id();
		XSprePUSH; PUSHu((UV)RETVAL);
	}
	XSRETURN(1);
}

XS(XS_EQDB_get_errno); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQDB_get_errno)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQDB::get_errno(THIS)");
	{
		EQDB *		THIS;
		unsigned int		RETVAL;
		dXSTARG;

		if (sv_derived_from(ST(0), "EQDB")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQDB *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQDB");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->get_errno();
		XSprePUSH; PUSHu((UV)RETVAL);
	}
	XSRETURN(1);
}

XS(XS_EQDB_error); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQDB_error)
{
	dXSARGS;
	if (items != 1)
		Perl_croak(aTHX_ "Usage: EQDB::error(THIS)");
	{
		EQDB *		THIS;
		Const_char *		RETVAL;
		dXSTARG;

		if (sv_derived_from(ST(0), "EQDB")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQDB *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQDB");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->error();
		sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
	}
	XSRETURN(1);
}

XS(XS_EQDB_query); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQDB_query)
{
	dXSARGS;
	if (items != 2)
		Perl_croak(aTHX_ "Usage: EQDB::query(THIS, q)");
	{
		EQDB *		THIS;
		EQDBRes *		RETVAL;
		Const_char *		q = (Const_char *)SvPV_nolen(ST(1));

		if (sv_derived_from(ST(0), "EQDB")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQDB *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQDB");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->query(q);
		ST(0) = sv_newmortal();
		sv_setref_pv(ST(0), "EQDBRes", (void*)RETVAL);
	}
	XSRETURN(1);
}

XS(XS_EQDB_escape_string); /* prototype to pass -Wmissing-prototypes */
XS(XS_EQDB_escape_string)
{
	dXSARGS;
	if (items != 2)
		Perl_croak(aTHX_ "Usage: EQDB::escape_string(THIS, from)");
	{
		EQDB *		THIS;
		Const_char *		RETVAL;
		dXSTARG;
		Const_char *		from = (Const_char *)SvPV_nolen(ST(1));

		if (sv_derived_from(ST(0), "EQDB")) {
			IV tmp = SvIV((SV*)SvRV(ST(0)));
			THIS = INT2PTR(EQDB *,tmp);
		}
		else
			Perl_croak(aTHX_ "THIS is not of type EQDB");
		if(THIS == nullptr)
			Perl_croak(aTHX_ "THIS is nullptr, avoiding crash.");

		RETVAL = THIS->escape_string(from);
		sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
	}
	XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_EQDB); /* prototype to pass -Wmissing-prototypes */
XS(boot_EQDB)
{
	dXSARGS;
	char file[256];
	strncpy(file, __FILE__, 256);
	file[255] = 0;

	if(items != 1)
		fprintf(stderr, "boot_quest does not take any arguments.");
	char buf[128];

	//add the strcpy stuff to get rid of const warnings....



	XS_VERSION_BOOTCHECK ;

		newXSproto(strcpy(buf, "field_count"), XS_EQDB_field_count, file, "$");
		newXSproto(strcpy(buf, "affected_rows"), XS_EQDB_affected_rows, file, "$");
		newXSproto(strcpy(buf, "insert_id"), XS_EQDB_insert_id, file, "$");
		newXSproto(strcpy(buf, "get_errno"), XS_EQDB_get_errno, file, "$");
		newXSproto(strcpy(buf, "error"), XS_EQDB_error, file, "$");
		newXSproto(strcpy(buf, "query"), XS_EQDB_query, file, "$$");
		newXSproto(strcpy(buf, "escape_string"), XS_EQDB_escape_string, file, "$$");
	XSRETURN_YES;
}

#endif //EMBPERL_XS_CLASSES

