#include "jemalloc/internal/jemalloc_preamble.h"
#include "jemalloc/internal/jemalloc_internal_includes.h"

ph_gen(, edata_avail_, edata_tree_t, edata_t, ph_link,
    edata_esnead_comp)
ph_gen(, edata_heap_, edata_heap_t, edata_t, ph_link, edata_snad_comp)
ph_gen(, edata_age_heap_, edata_age_heap_t, edata_t, ph_link, edata_age_comp)
