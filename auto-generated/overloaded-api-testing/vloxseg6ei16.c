#include <riscv_vector.h>
#include <stdint.h>

vfloat16mf4x6_t test_vloxseg6ei16_v_f16mf4x6(const _Float16 *rs1,
                                             vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vfloat16mf2x6_t test_vloxseg6ei16_v_f16mf2x6(const _Float16 *rs1,
                                             vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vfloat16m1x6_t test_vloxseg6ei16_v_f16m1x6(const _Float16 *rs1, vuint16m1_t rs2,
                                           size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vfloat32mf2x6_t test_vloxseg6ei16_v_f32mf2x6(const float *rs1, vuint16mf4_t rs2,
                                             size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vfloat32m1x6_t test_vloxseg6ei16_v_f32m1x6(const float *rs1, vuint16mf2_t rs2,
                                           size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vfloat64m1x6_t test_vloxseg6ei16_v_f64m1x6(const double *rs1, vuint16mf4_t rs2,
                                           size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vint8mf8x6_t test_vloxseg6ei16_v_i8mf8x6(const int8_t *rs1, vuint16mf4_t rs2,
                                         size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vint8mf4x6_t test_vloxseg6ei16_v_i8mf4x6(const int8_t *rs1, vuint16mf2_t rs2,
                                         size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vint8mf2x6_t test_vloxseg6ei16_v_i8mf2x6(const int8_t *rs1, vuint16m1_t rs2,
                                         size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vint8m1x6_t test_vloxseg6ei16_v_i8m1x6(const int8_t *rs1, vuint16m2_t rs2,
                                       size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vint16mf4x6_t test_vloxseg6ei16_v_i16mf4x6(const int16_t *rs1, vuint16mf4_t rs2,
                                           size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vint16mf2x6_t test_vloxseg6ei16_v_i16mf2x6(const int16_t *rs1, vuint16mf2_t rs2,
                                           size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vint16m1x6_t test_vloxseg6ei16_v_i16m1x6(const int16_t *rs1, vuint16m1_t rs2,
                                         size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vint32mf2x6_t test_vloxseg6ei16_v_i32mf2x6(const int32_t *rs1, vuint16mf4_t rs2,
                                           size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vint32m1x6_t test_vloxseg6ei16_v_i32m1x6(const int32_t *rs1, vuint16mf2_t rs2,
                                         size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vint64m1x6_t test_vloxseg6ei16_v_i64m1x6(const int64_t *rs1, vuint16mf4_t rs2,
                                         size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vuint8mf8x6_t test_vloxseg6ei16_v_u8mf8x6(const uint8_t *rs1, vuint16mf4_t rs2,
                                          size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vuint8mf4x6_t test_vloxseg6ei16_v_u8mf4x6(const uint8_t *rs1, vuint16mf2_t rs2,
                                          size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vuint8mf2x6_t test_vloxseg6ei16_v_u8mf2x6(const uint8_t *rs1, vuint16m1_t rs2,
                                          size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vuint8m1x6_t test_vloxseg6ei16_v_u8m1x6(const uint8_t *rs1, vuint16m2_t rs2,
                                        size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vuint16mf4x6_t test_vloxseg6ei16_v_u16mf4x6(const uint16_t *rs1,
                                            vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vuint16mf2x6_t test_vloxseg6ei16_v_u16mf2x6(const uint16_t *rs1,
                                            vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vuint16m1x6_t test_vloxseg6ei16_v_u16m1x6(const uint16_t *rs1, vuint16m1_t rs2,
                                          size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vuint32mf2x6_t test_vloxseg6ei16_v_u32mf2x6(const uint32_t *rs1,
                                            vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vuint32m1x6_t test_vloxseg6ei16_v_u32m1x6(const uint32_t *rs1, vuint16mf2_t rs2,
                                          size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vuint64m1x6_t test_vloxseg6ei16_v_u64m1x6(const uint64_t *rs1, vuint16mf4_t rs2,
                                          size_t vl) {
  return __riscv_vloxseg6ei16(rs1, rs2, vl);
}

vfloat16mf4x6_t test_vloxseg6ei16_v_f16mf4x6_m(vbool64_t vm,
                                               const _Float16 *rs1,
                                               vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vfloat16mf2x6_t test_vloxseg6ei16_v_f16mf2x6_m(vbool32_t vm,
                                               const _Float16 *rs1,
                                               vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vfloat16m1x6_t test_vloxseg6ei16_v_f16m1x6_m(vbool16_t vm, const _Float16 *rs1,
                                             vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vfloat32mf2x6_t test_vloxseg6ei16_v_f32mf2x6_m(vbool64_t vm, const float *rs1,
                                               vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vfloat32m1x6_t test_vloxseg6ei16_v_f32m1x6_m(vbool32_t vm, const float *rs1,
                                             vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vfloat64m1x6_t test_vloxseg6ei16_v_f64m1x6_m(vbool64_t vm, const double *rs1,
                                             vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vint8mf8x6_t test_vloxseg6ei16_v_i8mf8x6_m(vbool64_t vm, const int8_t *rs1,
                                           vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vint8mf4x6_t test_vloxseg6ei16_v_i8mf4x6_m(vbool32_t vm, const int8_t *rs1,
                                           vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vint8mf2x6_t test_vloxseg6ei16_v_i8mf2x6_m(vbool16_t vm, const int8_t *rs1,
                                           vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vint8m1x6_t test_vloxseg6ei16_v_i8m1x6_m(vbool8_t vm, const int8_t *rs1,
                                         vuint16m2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vint16mf4x6_t test_vloxseg6ei16_v_i16mf4x6_m(vbool64_t vm, const int16_t *rs1,
                                             vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vint16mf2x6_t test_vloxseg6ei16_v_i16mf2x6_m(vbool32_t vm, const int16_t *rs1,
                                             vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vint16m1x6_t test_vloxseg6ei16_v_i16m1x6_m(vbool16_t vm, const int16_t *rs1,
                                           vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vint32mf2x6_t test_vloxseg6ei16_v_i32mf2x6_m(vbool64_t vm, const int32_t *rs1,
                                             vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vint32m1x6_t test_vloxseg6ei16_v_i32m1x6_m(vbool32_t vm, const int32_t *rs1,
                                           vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vint64m1x6_t test_vloxseg6ei16_v_i64m1x6_m(vbool64_t vm, const int64_t *rs1,
                                           vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vuint8mf8x6_t test_vloxseg6ei16_v_u8mf8x6_m(vbool64_t vm, const uint8_t *rs1,
                                            vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vuint8mf4x6_t test_vloxseg6ei16_v_u8mf4x6_m(vbool32_t vm, const uint8_t *rs1,
                                            vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vuint8mf2x6_t test_vloxseg6ei16_v_u8mf2x6_m(vbool16_t vm, const uint8_t *rs1,
                                            vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vuint8m1x6_t test_vloxseg6ei16_v_u8m1x6_m(vbool8_t vm, const uint8_t *rs1,
                                          vuint16m2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vuint16mf4x6_t test_vloxseg6ei16_v_u16mf4x6_m(vbool64_t vm, const uint16_t *rs1,
                                              vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vuint16mf2x6_t test_vloxseg6ei16_v_u16mf2x6_m(vbool32_t vm, const uint16_t *rs1,
                                              vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vuint16m1x6_t test_vloxseg6ei16_v_u16m1x6_m(vbool16_t vm, const uint16_t *rs1,
                                            vuint16m1_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vuint32mf2x6_t test_vloxseg6ei16_v_u32mf2x6_m(vbool64_t vm, const uint32_t *rs1,
                                              vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vuint32m1x6_t test_vloxseg6ei16_v_u32m1x6_m(vbool32_t vm, const uint32_t *rs1,
                                            vuint16mf2_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}

vuint64m1x6_t test_vloxseg6ei16_v_u64m1x6_m(vbool64_t vm, const uint64_t *rs1,
                                            vuint16mf4_t rs2, size_t vl) {
  return __riscv_vloxseg6ei16(vm, rs1, rs2, vl);
}
