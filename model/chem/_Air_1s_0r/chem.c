#include <model/chem/_chem.h>
#include <model/_model.h>

void find_W ( spec_t rhok, double T, double Te, double Tv, double Estar, double Qbeam, spec_t W ) {
  long spec;
  for ( spec = 0; spec < ns; spec++ )
    W[spec] = 0.0;
}

void find_dW_dx ( spec_t rhok, spec_t mu, double T, double Te, double Tv, double Estar, double Qbeam,
                  spec2_t dWdrhok, spec_t dWdT, spec_t dWdTe, spec_t dWdTv, spec_t dWdQbeam ) {
  long k, s;                    /* counters */

  for ( s = 0; s < ns; s++ ) {
    dWdT[s] = 0.0;
    dWdTe[s] = 0.0;
    dWdTv[s] = 0.0;
    dWdQbeam[s] = 0.0;
    for ( k = 0; k < ns; k++ ) {
      dWdrhok[s][k] = 0.0;
    }
  }

}
