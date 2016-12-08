#ifndef kcg_ImportedEnum
#define kcg_ImportedEnum

typedef enum
{
	ENUM_BEGIN,
	a,
	b,
	c,
	ENUM_END
} ImportedEnum;


/*
//	Don't think a copy macro is needed for an imported enum??
//	Below is how I would implement this if my Imported_Enum was
//	a struct, like in the example in the User Manual

#define kcg_copy_ImportedEnum(pTo, pFrom)		\
{												\
	(pTo)->ENUM_BEGIN = (pFrom)->ENUM_BEGIN;	\
	(pTo)->a = (pFrom)->a;						\
	(pTo)->b = (pFrom)->b;						\
	(pTo)->c = (pFrom)->c;						\
	(pTo)->ENUM_END = (pFrom)->ENUM_END;		\
}

//	Don't think an init macro is needed for an imported enum??
//	Below is how I would implement this if my Imported_Enum was
//	a struct, like in the example in the User Manual

#define ImportedEnum_int(pTo)					\
{												\
	(pTo)->ENUM_BEGIN = 'ENUM_BEGIN';			\
	(pTo)->a = 'a';								\
	(pTo)->b = 'b';								\
	(pTo)->c = 'c';								\
	(pTo)->ENUM_END = 'ENUM_END';				\
}


//	Not sure of syntax for the comparison macro.  There is no bool type
//	in C so I would have it return 1 for true and 0 for false.  But I'm
//	not sure if this is correct or if it would want a kcg_bool return type.
//	I also don't like "returning" values from macros.  I think it's sloppy.
//	So I'm not sure how to implement this entirely.
#define kcg_comp_ImportedEnum(pTo, pFrom)		\
{												\
	//	Some sort of cascading IF to compare all values of pTo
	//	and pFrom
}
*/

#endif