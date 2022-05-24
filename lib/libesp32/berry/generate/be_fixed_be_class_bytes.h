#include "be_constobj.h"

static be_define_const_map_slots(be_class_bytes_map) {
    { be_const_key(_X2Esize, 9), be_const_var(0) },
    { be_const_key(resize, -1), be_const_func(m_resize) },
    { be_const_key(clear, -1), be_const_func(m_clear) },
    { be_const_key(_X21_X3D, 14), be_const_func(m_nequal) },
    { be_const_key(copy, 11), be_const_func(m_copy) },
    { be_const_key(tostring, -1), be_const_func(m_tostring) },
    { be_const_key(item, -1), be_const_func(m_item) },
    { be_const_key(setbits, 29), be_const_closure(setbits_closure) },
    { be_const_key(deinit, 12), be_const_func(m_deinit) },
    { be_const_key(asstring, -1), be_const_func(m_asstring) },
    { be_const_key(_X2B, -1), be_const_func(m_merge) },
    { be_const_key(setitem, -1), be_const_func(m_setitem) },
    { be_const_key(fromstring, 31), be_const_func(m_fromstring) },
    { be_const_key(_X2E_X2E, -1), be_const_func(m_connect) },
    { be_const_key(set, -1), be_const_func(m_set) },
    { be_const_key(_X3D_X3D, -1), be_const_func(m_equal) },
    { be_const_key(getbits, 18), be_const_closure(getbits_closure) },
    { be_const_key(fromhex, -1), be_const_func(m_fromhex) },
    { be_const_key(getfloat, 27), be_const_func(m_getfloat) },
    { be_const_key(init, 16), be_const_func(m_init) },
    { be_const_key(add, -1), be_const_func(m_add) },
    { be_const_key(_change_buffer, -1), be_const_func(m_change_buffer) },
    { be_const_key(_X2Elen, -1), be_const_var(1) },
    { be_const_key(get, 25), be_const_func(m_getu) },
    { be_const_key(_buffer, 22), be_const_func(m_buffer) },
    { be_const_key(fromb64, -1), be_const_func(m_fromb64) },
    { be_const_key(geti, 17), be_const_func(m_geti) },
    { be_const_key(_X2Ep, -1), be_const_var(2) },
    { be_const_key(size, -1), be_const_func(m_size) },
    { be_const_key(setfloat, -1), be_const_func(m_setfloat) },
    { be_const_key(seti, -1), be_const_func(m_set) },
    { be_const_key(tob64, -1), be_const_func(m_tob64) },
};

static be_define_const_map(
    be_class_bytes_map,
    32
);

BE_EXPORT_VARIABLE be_define_const_class(
    be_class_bytes,
    3,
    NULL,
    bytes
);
