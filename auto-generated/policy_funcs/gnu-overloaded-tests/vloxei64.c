/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat16mf4_t test_vloxei64_v_f16mf4_tu(vfloat16mf4_t vd, const _Float16 *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vfloat16mf2_t test_vloxei64_v_f16mf2_tu(vfloat16mf2_t vd, const _Float16 *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vfloat16m1_t test_vloxei64_v_f16m1_tu(vfloat16m1_t vd, const _Float16 *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vfloat16m2_t test_vloxei64_v_f16m2_tu(vfloat16m2_t vd, const _Float16 *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vfloat32mf2_t test_vloxei64_v_f32mf2_tu(vfloat32mf2_t vd, const float *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vfloat32m1_t test_vloxei64_v_f32m1_tu(vfloat32m1_t vd, const float *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vfloat32m2_t test_vloxei64_v_f32m2_tu(vfloat32m2_t vd, const float *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vfloat32m4_t test_vloxei64_v_f32m4_tu(vfloat32m4_t vd, const float *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vfloat64m1_t test_vloxei64_v_f64m1_tu(vfloat64m1_t vd, const double *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vfloat64m2_t test_vloxei64_v_f64m2_tu(vfloat64m2_t vd, const double *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vfloat64m4_t test_vloxei64_v_f64m4_tu(vfloat64m4_t vd, const double *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vfloat64m8_t test_vloxei64_v_f64m8_tu(vfloat64m8_t vd, const double *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint8mf8_t test_vloxei64_v_i8mf8_tu(vint8mf8_t vd, const int8_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint8mf4_t test_vloxei64_v_i8mf4_tu(vint8mf4_t vd, const int8_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint8mf2_t test_vloxei64_v_i8mf2_tu(vint8mf2_t vd, const int8_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint8m1_t test_vloxei64_v_i8m1_tu(vint8m1_t vd, const int8_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint16mf4_t test_vloxei64_v_i16mf4_tu(vint16mf4_t vd, const int16_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint16mf2_t test_vloxei64_v_i16mf2_tu(vint16mf2_t vd, const int16_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint16m1_t test_vloxei64_v_i16m1_tu(vint16m1_t vd, const int16_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint16m2_t test_vloxei64_v_i16m2_tu(vint16m2_t vd, const int16_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint32mf2_t test_vloxei64_v_i32mf2_tu(vint32mf2_t vd, const int32_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint32m1_t test_vloxei64_v_i32m1_tu(vint32m1_t vd, const int32_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint32m2_t test_vloxei64_v_i32m2_tu(vint32m2_t vd, const int32_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint32m4_t test_vloxei64_v_i32m4_tu(vint32m4_t vd, const int32_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint64m1_t test_vloxei64_v_i64m1_tu(vint64m1_t vd, const int64_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint64m2_t test_vloxei64_v_i64m2_tu(vint64m2_t vd, const int64_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint64m4_t test_vloxei64_v_i64m4_tu(vint64m4_t vd, const int64_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vint64m8_t test_vloxei64_v_i64m8_tu(vint64m8_t vd, const int64_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint8mf8_t test_vloxei64_v_u8mf8_tu(vuint8mf8_t vd, const uint8_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint8mf4_t test_vloxei64_v_u8mf4_tu(vuint8mf4_t vd, const uint8_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint8mf2_t test_vloxei64_v_u8mf2_tu(vuint8mf2_t vd, const uint8_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint8m1_t test_vloxei64_v_u8m1_tu(vuint8m1_t vd, const uint8_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint16mf4_t test_vloxei64_v_u16mf4_tu(vuint16mf4_t vd, const uint16_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint16mf2_t test_vloxei64_v_u16mf2_tu(vuint16mf2_t vd, const uint16_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint16m1_t test_vloxei64_v_u16m1_tu(vuint16m1_t vd, const uint16_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint16m2_t test_vloxei64_v_u16m2_tu(vuint16m2_t vd, const uint16_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint32mf2_t test_vloxei64_v_u32mf2_tu(vuint32mf2_t vd, const uint32_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint32m1_t test_vloxei64_v_u32m1_tu(vuint32m1_t vd, const uint32_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint32m2_t test_vloxei64_v_u32m2_tu(vuint32m2_t vd, const uint32_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint32m4_t test_vloxei64_v_u32m4_tu(vuint32m4_t vd, const uint32_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint64m1_t test_vloxei64_v_u64m1_tu(vuint64m1_t vd, const uint64_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint64m2_t test_vloxei64_v_u64m2_tu(vuint64m2_t vd, const uint64_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint64m4_t test_vloxei64_v_u64m4_tu(vuint64m4_t vd, const uint64_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vuint64m8_t test_vloxei64_v_u64m8_tu(vuint64m8_t vd, const uint64_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tu(vd, rs1, rs2, vl);
}

vfloat16mf4_t test_vloxei64_v_f16mf4_tum(vbool64_t vm, vfloat16mf4_t vd, const _Float16 *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf2_t test_vloxei64_v_f16mf2_tum(vbool32_t vm, vfloat16mf2_t vd, const _Float16 *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vfloat16m1_t test_vloxei64_v_f16m1_tum(vbool16_t vm, vfloat16m1_t vd, const _Float16 *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vfloat16m2_t test_vloxei64_v_f16m2_tum(vbool8_t vm, vfloat16m2_t vd, const _Float16 *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vfloat32mf2_t test_vloxei64_v_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd, const float *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m1_t test_vloxei64_v_f32m1_tum(vbool32_t vm, vfloat32m1_t vd, const float *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m2_t test_vloxei64_v_f32m2_tum(vbool16_t vm, vfloat32m2_t vd, const float *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vfloat32m4_t test_vloxei64_v_f32m4_tum(vbool8_t vm, vfloat32m4_t vd, const float *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m1_t test_vloxei64_v_f64m1_tum(vbool64_t vm, vfloat64m1_t vd, const double *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m2_t test_vloxei64_v_f64m2_tum(vbool32_t vm, vfloat64m2_t vd, const double *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m4_t test_vloxei64_v_f64m4_tum(vbool16_t vm, vfloat64m4_t vd, const double *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vfloat64m8_t test_vloxei64_v_f64m8_tum(vbool8_t vm, vfloat64m8_t vd, const double *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint8mf8_t test_vloxei64_v_i8mf8_tum(vbool64_t vm, vint8mf8_t vd, const int8_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint8mf4_t test_vloxei64_v_i8mf4_tum(vbool32_t vm, vint8mf4_t vd, const int8_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint8mf2_t test_vloxei64_v_i8mf2_tum(vbool16_t vm, vint8mf2_t vd, const int8_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint8m1_t test_vloxei64_v_i8m1_tum(vbool8_t vm, vint8m1_t vd, const int8_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint16mf4_t test_vloxei64_v_i16mf4_tum(vbool64_t vm, vint16mf4_t vd, const int16_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint16mf2_t test_vloxei64_v_i16mf2_tum(vbool32_t vm, vint16mf2_t vd, const int16_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint16m1_t test_vloxei64_v_i16m1_tum(vbool16_t vm, vint16m1_t vd, const int16_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint16m2_t test_vloxei64_v_i16m2_tum(vbool8_t vm, vint16m2_t vd, const int16_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint32mf2_t test_vloxei64_v_i32mf2_tum(vbool64_t vm, vint32mf2_t vd, const int32_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint32m1_t test_vloxei64_v_i32m1_tum(vbool32_t vm, vint32m1_t vd, const int32_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint32m2_t test_vloxei64_v_i32m2_tum(vbool16_t vm, vint32m2_t vd, const int32_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint32m4_t test_vloxei64_v_i32m4_tum(vbool8_t vm, vint32m4_t vd, const int32_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint64m1_t test_vloxei64_v_i64m1_tum(vbool64_t vm, vint64m1_t vd, const int64_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint64m2_t test_vloxei64_v_i64m2_tum(vbool32_t vm, vint64m2_t vd, const int64_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint64m4_t test_vloxei64_v_i64m4_tum(vbool16_t vm, vint64m4_t vd, const int64_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vint64m8_t test_vloxei64_v_i64m8_tum(vbool8_t vm, vint64m8_t vd, const int64_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf8_t test_vloxei64_v_u8mf8_tum(vbool64_t vm, vuint8mf8_t vd, const uint8_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf4_t test_vloxei64_v_u8mf4_tum(vbool32_t vm, vuint8mf4_t vd, const uint8_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint8mf2_t test_vloxei64_v_u8mf2_tum(vbool16_t vm, vuint8mf2_t vd, const uint8_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint8m1_t test_vloxei64_v_u8m1_tum(vbool8_t vm, vuint8m1_t vd, const uint8_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint16mf4_t test_vloxei64_v_u16mf4_tum(vbool64_t vm, vuint16mf4_t vd, const uint16_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint16mf2_t test_vloxei64_v_u16mf2_tum(vbool32_t vm, vuint16mf2_t vd, const uint16_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint16m1_t test_vloxei64_v_u16m1_tum(vbool16_t vm, vuint16m1_t vd, const uint16_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint16m2_t test_vloxei64_v_u16m2_tum(vbool8_t vm, vuint16m2_t vd, const uint16_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint32mf2_t test_vloxei64_v_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd, const uint32_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint32m1_t test_vloxei64_v_u32m1_tum(vbool32_t vm, vuint32m1_t vd, const uint32_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint32m2_t test_vloxei64_v_u32m2_tum(vbool16_t vm, vuint32m2_t vd, const uint32_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint32m4_t test_vloxei64_v_u32m4_tum(vbool8_t vm, vuint32m4_t vd, const uint32_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint64m1_t test_vloxei64_v_u64m1_tum(vbool64_t vm, vuint64m1_t vd, const uint64_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint64m2_t test_vloxei64_v_u64m2_tum(vbool32_t vm, vuint64m2_t vd, const uint64_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint64m4_t test_vloxei64_v_u64m4_tum(vbool16_t vm, vuint64m4_t vd, const uint64_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vuint64m8_t test_vloxei64_v_u64m8_tum(vbool8_t vm, vuint64m8_t vd, const uint64_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tum(vm, vd, rs1, rs2, vl);
}

vfloat16mf4_t test_vloxei64_v_f16mf4_tumu(vbool64_t vm, vfloat16mf4_t vd, const _Float16 *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2_t test_vloxei64_v_f16mf2_tumu(vbool32_t vm, vfloat16mf2_t vd, const _Float16 *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16m1_t test_vloxei64_v_f16m1_tumu(vbool16_t vm, vfloat16m1_t vd, const _Float16 *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16m2_t test_vloxei64_v_f16m2_tumu(vbool8_t vm, vfloat16m2_t vd, const _Float16 *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32mf2_t test_vloxei64_v_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd, const float *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m1_t test_vloxei64_v_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd, const float *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m2_t test_vloxei64_v_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd, const float *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat32m4_t test_vloxei64_v_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd, const float *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m1_t test_vloxei64_v_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd, const double *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m2_t test_vloxei64_v_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd, const double *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m4_t test_vloxei64_v_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd, const double *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat64m8_t test_vloxei64_v_f64m8_tumu(vbool8_t vm, vfloat64m8_t vd, const double *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf8_t test_vloxei64_v_i8mf8_tumu(vbool64_t vm, vint8mf8_t vd, const int8_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf4_t test_vloxei64_v_i8mf4_tumu(vbool32_t vm, vint8mf4_t vd, const int8_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint8mf2_t test_vloxei64_v_i8mf2_tumu(vbool16_t vm, vint8mf2_t vd, const int8_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint8m1_t test_vloxei64_v_i8m1_tumu(vbool8_t vm, vint8m1_t vd, const int8_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint16mf4_t test_vloxei64_v_i16mf4_tumu(vbool64_t vm, vint16mf4_t vd, const int16_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint16mf2_t test_vloxei64_v_i16mf2_tumu(vbool32_t vm, vint16mf2_t vd, const int16_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint16m1_t test_vloxei64_v_i16m1_tumu(vbool16_t vm, vint16m1_t vd, const int16_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint16m2_t test_vloxei64_v_i16m2_tumu(vbool8_t vm, vint16m2_t vd, const int16_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint32mf2_t test_vloxei64_v_i32mf2_tumu(vbool64_t vm, vint32mf2_t vd, const int32_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint32m1_t test_vloxei64_v_i32m1_tumu(vbool32_t vm, vint32m1_t vd, const int32_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint32m2_t test_vloxei64_v_i32m2_tumu(vbool16_t vm, vint32m2_t vd, const int32_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint32m4_t test_vloxei64_v_i32m4_tumu(vbool8_t vm, vint32m4_t vd, const int32_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint64m1_t test_vloxei64_v_i64m1_tumu(vbool64_t vm, vint64m1_t vd, const int64_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint64m2_t test_vloxei64_v_i64m2_tumu(vbool32_t vm, vint64m2_t vd, const int64_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint64m4_t test_vloxei64_v_i64m4_tumu(vbool16_t vm, vint64m4_t vd, const int64_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vint64m8_t test_vloxei64_v_i64m8_tumu(vbool8_t vm, vint64m8_t vd, const int64_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf8_t test_vloxei64_v_u8mf8_tumu(vbool64_t vm, vuint8mf8_t vd, const uint8_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf4_t test_vloxei64_v_u8mf4_tumu(vbool32_t vm, vuint8mf4_t vd, const uint8_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint8mf2_t test_vloxei64_v_u8mf2_tumu(vbool16_t vm, vuint8mf2_t vd, const uint8_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint8m1_t test_vloxei64_v_u8m1_tumu(vbool8_t vm, vuint8m1_t vd, const uint8_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint16mf4_t test_vloxei64_v_u16mf4_tumu(vbool64_t vm, vuint16mf4_t vd, const uint16_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint16mf2_t test_vloxei64_v_u16mf2_tumu(vbool32_t vm, vuint16mf2_t vd, const uint16_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m1_t test_vloxei64_v_u16m1_tumu(vbool16_t vm, vuint16m1_t vd, const uint16_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint16m2_t test_vloxei64_v_u16m2_tumu(vbool8_t vm, vuint16m2_t vd, const uint16_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint32mf2_t test_vloxei64_v_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd, const uint32_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m1_t test_vloxei64_v_u32m1_tumu(vbool32_t vm, vuint32m1_t vd, const uint32_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m2_t test_vloxei64_v_u32m2_tumu(vbool16_t vm, vuint32m2_t vd, const uint32_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint32m4_t test_vloxei64_v_u32m4_tumu(vbool8_t vm, vuint32m4_t vd, const uint32_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m1_t test_vloxei64_v_u64m1_tumu(vbool64_t vm, vuint64m1_t vd, const uint64_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m2_t test_vloxei64_v_u64m2_tumu(vbool32_t vm, vuint64m2_t vd, const uint64_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m4_t test_vloxei64_v_u64m4_tumu(vbool16_t vm, vuint64m4_t vd, const uint64_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vuint64m8_t test_vloxei64_v_u64m8_tumu(vbool8_t vm, vuint64m8_t vd, const uint64_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_tumu(vm, vd, rs1, rs2, vl);
}

vfloat16mf4_t test_vloxei64_v_f16mf4_mu(vbool64_t vm, vfloat16mf4_t vd, const _Float16 *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vfloat16mf2_t test_vloxei64_v_f16mf2_mu(vbool32_t vm, vfloat16mf2_t vd, const _Float16 *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vfloat16m1_t test_vloxei64_v_f16m1_mu(vbool16_t vm, vfloat16m1_t vd, const _Float16 *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vfloat16m2_t test_vloxei64_v_f16m2_mu(vbool8_t vm, vfloat16m2_t vd, const _Float16 *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vfloat32mf2_t test_vloxei64_v_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd, const float *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m1_t test_vloxei64_v_f32m1_mu(vbool32_t vm, vfloat32m1_t vd, const float *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m2_t test_vloxei64_v_f32m2_mu(vbool16_t vm, vfloat32m2_t vd, const float *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vfloat32m4_t test_vloxei64_v_f32m4_mu(vbool8_t vm, vfloat32m4_t vd, const float *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vfloat64m1_t test_vloxei64_v_f64m1_mu(vbool64_t vm, vfloat64m1_t vd, const double *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vfloat64m2_t test_vloxei64_v_f64m2_mu(vbool32_t vm, vfloat64m2_t vd, const double *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vfloat64m4_t test_vloxei64_v_f64m4_mu(vbool16_t vm, vfloat64m4_t vd, const double *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vfloat64m8_t test_vloxei64_v_f64m8_mu(vbool8_t vm, vfloat64m8_t vd, const double *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint8mf8_t test_vloxei64_v_i8mf8_mu(vbool64_t vm, vint8mf8_t vd, const int8_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint8mf4_t test_vloxei64_v_i8mf4_mu(vbool32_t vm, vint8mf4_t vd, const int8_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint8mf2_t test_vloxei64_v_i8mf2_mu(vbool16_t vm, vint8mf2_t vd, const int8_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint8m1_t test_vloxei64_v_i8m1_mu(vbool8_t vm, vint8m1_t vd, const int8_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint16mf4_t test_vloxei64_v_i16mf4_mu(vbool64_t vm, vint16mf4_t vd, const int16_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint16mf2_t test_vloxei64_v_i16mf2_mu(vbool32_t vm, vint16mf2_t vd, const int16_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint16m1_t test_vloxei64_v_i16m1_mu(vbool16_t vm, vint16m1_t vd, const int16_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint16m2_t test_vloxei64_v_i16m2_mu(vbool8_t vm, vint16m2_t vd, const int16_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint32mf2_t test_vloxei64_v_i32mf2_mu(vbool64_t vm, vint32mf2_t vd, const int32_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint32m1_t test_vloxei64_v_i32m1_mu(vbool32_t vm, vint32m1_t vd, const int32_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint32m2_t test_vloxei64_v_i32m2_mu(vbool16_t vm, vint32m2_t vd, const int32_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint32m4_t test_vloxei64_v_i32m4_mu(vbool8_t vm, vint32m4_t vd, const int32_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint64m1_t test_vloxei64_v_i64m1_mu(vbool64_t vm, vint64m1_t vd, const int64_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint64m2_t test_vloxei64_v_i64m2_mu(vbool32_t vm, vint64m2_t vd, const int64_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint64m4_t test_vloxei64_v_i64m4_mu(vbool16_t vm, vint64m4_t vd, const int64_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vint64m8_t test_vloxei64_v_i64m8_mu(vbool8_t vm, vint64m8_t vd, const int64_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf8_t test_vloxei64_v_u8mf8_mu(vbool64_t vm, vuint8mf8_t vd, const uint8_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf4_t test_vloxei64_v_u8mf4_mu(vbool32_t vm, vuint8mf4_t vd, const uint8_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint8mf2_t test_vloxei64_v_u8mf2_mu(vbool16_t vm, vuint8mf2_t vd, const uint8_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint8m1_t test_vloxei64_v_u8m1_mu(vbool8_t vm, vuint8m1_t vd, const uint8_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint16mf4_t test_vloxei64_v_u16mf4_mu(vbool64_t vm, vuint16mf4_t vd, const uint16_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint16mf2_t test_vloxei64_v_u16mf2_mu(vbool32_t vm, vuint16mf2_t vd, const uint16_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint16m1_t test_vloxei64_v_u16m1_mu(vbool16_t vm, vuint16m1_t vd, const uint16_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint16m2_t test_vloxei64_v_u16m2_mu(vbool8_t vm, vuint16m2_t vd, const uint16_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint32mf2_t test_vloxei64_v_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd, const uint32_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint32m1_t test_vloxei64_v_u32m1_mu(vbool32_t vm, vuint32m1_t vd, const uint32_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint32m2_t test_vloxei64_v_u32m2_mu(vbool16_t vm, vuint32m2_t vd, const uint32_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint32m4_t test_vloxei64_v_u32m4_mu(vbool8_t vm, vuint32m4_t vd, const uint32_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint64m1_t test_vloxei64_v_u64m1_mu(vbool64_t vm, vuint64m1_t vd, const uint64_t *rs1, vuint64m1_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint64m2_t test_vloxei64_v_u64m2_mu(vbool32_t vm, vuint64m2_t vd, const uint64_t *rs1, vuint64m2_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint64m4_t test_vloxei64_v_u64m4_mu(vbool16_t vm, vuint64m4_t vd, const uint64_t *rs1, vuint64m4_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}

vuint64m8_t test_vloxei64_v_u64m8_mu(vbool8_t vm, vuint64m8_t vd, const uint64_t *rs1, vuint64m8_t rs2, size_t vl) {
  return __riscv_vloxei64_mu(vm, vd, rs1, rs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vloxei64\.[ivxfswum.]+\s+} 176 } } */
