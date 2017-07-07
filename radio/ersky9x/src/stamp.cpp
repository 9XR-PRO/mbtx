#include <stdint.h>
#include "ersky9x.h"
#include "stamp-ersky9x.h"

const char Stamps[] =
	"  FW: " FW_NAME "\037"\
	"VERS: " SEM_VER "\037"\
	"DATE: " DATE_STR "\037"\
	"TIME: " TIME_STR "\037"\
	" GIT: " GIT_HASH;

