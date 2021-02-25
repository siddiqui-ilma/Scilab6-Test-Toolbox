extern "C"
{
#include "api_scilab.h"
#include "Scierror.h"
#include "BOOL.h"
#include "localization.h"
#include "trans.h"

static const char fname[] = "transpose";
/* ==================================================================== */
int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)
{
    int i = 0;
    int j = 0;
    int row1 = 0;
    int col1 = 0;
    int size1 = 0;
    double* in1 = NULL;
    double* out1 = NULL;
    double* ar= NULL;

    if (nin > 1)
    {
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

    if (scilab_isDouble(env, in[0]) == 0 || scilab_isMatrix2d(env, in[0]) == 0 || scilab_isComplex(env, in[0]) == 1)
    {
        Scierror(999, _("%s: Wrong type for input argument #%d: A scalar expected.\n"), fname, 1);
        return 1;
    }

    

    size1 = scilab_getDim2d(env, in[0], &row1, &col1);

    

    scilab_getDoubleArray(env, in[0], &in1);
    ar = trans( in1, row1, col1);

    out[0] = scilab_createDoubleMatrix2d(env, col1, row1, 0);

    scilab_getDoubleArray(env, out[0], &out1);
   
     for(i=0; i<size1; i++)
              out1[i] = ar[i];
     

    return 0;
}
}

