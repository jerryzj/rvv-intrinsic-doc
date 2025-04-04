#include <stdint.h>
#include "rvv-v0p10-compatible-headers/overloaded-non-policy.h"
#include "rvv-v0p10-compatible-headers/overloaded-policy.h"
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2_t test_vfwsub_vv_f32mf2(vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vfwsub_vv(op1, op2, vl);
}

vfloat32mf2_t test_vfwsub_vf_f32mf2(vfloat16mf4_t op1, float16_t op2, size_t vl) {
  return vfwsub_vf(op1, op2, vl);
}

vfloat32mf2_t test_vfwsub_wv_f32mf2(vfloat32mf2_t op1, vfloat16mf4_t op2, size_t vl) {
  return vfwsub_wv(op1, op2, vl);
}

vfloat32mf2_t test_vfwsub_wf_f32mf2(vfloat32mf2_t op1, float16_t op2, size_t vl) {
  return vfwsub_wf(op1, op2, vl);
}

vfloat32m1_t test_vfwsub_vv_f32m1(vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vfwsub_vv(op1, op2, vl);
}

vfloat32m1_t test_vfwsub_vf_f32m1(vfloat16mf2_t op1, float16_t op2, size_t vl) {
  return vfwsub_vf(op1, op2, vl);
}

vfloat32m1_t test_vfwsub_wv_f32m1(vfloat32m1_t op1, vfloat16mf2_t op2, size_t vl) {
  return vfwsub_wv(op1, op2, vl);
}

vfloat32m1_t test_vfwsub_wf_f32m1(vfloat32m1_t op1, float16_t op2, size_t vl) {
  return vfwsub_wf(op1, op2, vl);
}

vfloat32m2_t test_vfwsub_vv_f32m2(vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vfwsub_vv(op1, op2, vl);
}

vfloat32m2_t test_vfwsub_vf_f32m2(vfloat16m1_t op1, float16_t op2, size_t vl) {
  return vfwsub_vf(op1, op2, vl);
}

vfloat32m2_t test_vfwsub_wv_f32m2(vfloat32m2_t op1, vfloat16m1_t op2, size_t vl) {
  return vfwsub_wv(op1, op2, vl);
}

vfloat32m2_t test_vfwsub_wf_f32m2(vfloat32m2_t op1, float16_t op2, size_t vl) {
  return vfwsub_wf(op1, op2, vl);
}

vfloat32m4_t test_vfwsub_vv_f32m4(vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vfwsub_vv(op1, op2, vl);
}

vfloat32m4_t test_vfwsub_vf_f32m4(vfloat16m2_t op1, float16_t op2, size_t vl) {
  return vfwsub_vf(op1, op2, vl);
}

vfloat32m4_t test_vfwsub_wv_f32m4(vfloat32m4_t op1, vfloat16m2_t op2, size_t vl) {
  return vfwsub_wv(op1, op2, vl);
}

vfloat32m4_t test_vfwsub_wf_f32m4(vfloat32m4_t op1, float16_t op2, size_t vl) {
  return vfwsub_wf(op1, op2, vl);
}

vfloat32m8_t test_vfwsub_vv_f32m8(vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vfwsub_vv(op1, op2, vl);
}

vfloat32m8_t test_vfwsub_vf_f32m8(vfloat16m4_t op1, float16_t op2, size_t vl) {
  return vfwsub_vf(op1, op2, vl);
}

vfloat32m8_t test_vfwsub_wv_f32m8(vfloat32m8_t op1, vfloat16m4_t op2, size_t vl) {
  return vfwsub_wv(op1, op2, vl);
}

vfloat32m8_t test_vfwsub_wf_f32m8(vfloat32m8_t op1, float16_t op2, size_t vl) {
  return vfwsub_wf(op1, op2, vl);
}

vfloat64m1_t test_vfwsub_vv_f64m1(vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vfwsub_vv(op1, op2, vl);
}

vfloat64m1_t test_vfwsub_vf_f64m1(vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return vfwsub_vf(op1, op2, vl);
}

vfloat64m1_t test_vfwsub_wv_f64m1(vfloat64m1_t op1, vfloat32mf2_t op2, size_t vl) {
  return vfwsub_wv(op1, op2, vl);
}

vfloat64m1_t test_vfwsub_wf_f64m1(vfloat64m1_t op1, float32_t op2, size_t vl) {
  return vfwsub_wf(op1, op2, vl);
}

vfloat64m2_t test_vfwsub_vv_f64m2(vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vfwsub_vv(op1, op2, vl);
}

vfloat64m2_t test_vfwsub_vf_f64m2(vfloat32m1_t op1, float32_t op2, size_t vl) {
  return vfwsub_vf(op1, op2, vl);
}

vfloat64m2_t test_vfwsub_wv_f64m2(vfloat64m2_t op1, vfloat32m1_t op2, size_t vl) {
  return vfwsub_wv(op1, op2, vl);
}

vfloat64m2_t test_vfwsub_wf_f64m2(vfloat64m2_t op1, float32_t op2, size_t vl) {
  return vfwsub_wf(op1, op2, vl);
}

vfloat64m4_t test_vfwsub_vv_f64m4(vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vfwsub_vv(op1, op2, vl);
}

vfloat64m4_t test_vfwsub_vf_f64m4(vfloat32m2_t op1, float32_t op2, size_t vl) {
  return vfwsub_vf(op1, op2, vl);
}

vfloat64m4_t test_vfwsub_wv_f64m4(vfloat64m4_t op1, vfloat32m2_t op2, size_t vl) {
  return vfwsub_wv(op1, op2, vl);
}

vfloat64m4_t test_vfwsub_wf_f64m4(vfloat64m4_t op1, float32_t op2, size_t vl) {
  return vfwsub_wf(op1, op2, vl);
}

vfloat64m8_t test_vfwsub_vv_f64m8(vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vfwsub_vv(op1, op2, vl);
}

vfloat64m8_t test_vfwsub_vf_f64m8(vfloat32m4_t op1, float32_t op2, size_t vl) {
  return vfwsub_vf(op1, op2, vl);
}

vfloat64m8_t test_vfwsub_wv_f64m8(vfloat64m8_t op1, vfloat32m4_t op2, size_t vl) {
  return vfwsub_wv(op1, op2, vl);
}

vfloat64m8_t test_vfwsub_wf_f64m8(vfloat64m8_t op1, float32_t op2, size_t vl) {
  return vfwsub_wf(op1, op2, vl);
}

vfloat32mf2_t test_vfwsub_vv_f32mf2_m(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl) {
  return vfwsub_vv(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwsub_vf_f32mf2_m(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t op1, float16_t op2, size_t vl) {
  return vfwsub_vf(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwsub_wv_f32mf2_m(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, vfloat16mf4_t op2, size_t vl) {
  return vfwsub_wv(mask, maskedoff, op1, op2, vl);
}

vfloat32mf2_t test_vfwsub_wf_f32mf2_m(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat32mf2_t op1, float16_t op2, size_t vl) {
  return vfwsub_wf(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwsub_vv_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl) {
  return vfwsub_vv(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwsub_vf_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t op1, float16_t op2, size_t vl) {
  return vfwsub_vf(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwsub_wv_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, vfloat16mf2_t op2, size_t vl) {
  return vfwsub_wv(mask, maskedoff, op1, op2, vl);
}

vfloat32m1_t test_vfwsub_wf_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, vfloat32m1_t op1, float16_t op2, size_t vl) {
  return vfwsub_wf(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwsub_vv_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl) {
  return vfwsub_vv(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwsub_vf_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t op1, float16_t op2, size_t vl) {
  return vfwsub_vf(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwsub_wv_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, vfloat16m1_t op2, size_t vl) {
  return vfwsub_wv(mask, maskedoff, op1, op2, vl);
}

vfloat32m2_t test_vfwsub_wf_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vfloat32m2_t op1, float16_t op2, size_t vl) {
  return vfwsub_wf(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwsub_vv_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl) {
  return vfwsub_vv(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwsub_vf_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t op1, float16_t op2, size_t vl) {
  return vfwsub_vf(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwsub_wv_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, vfloat16m2_t op2, size_t vl) {
  return vfwsub_wv(mask, maskedoff, op1, op2, vl);
}

vfloat32m4_t test_vfwsub_wf_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vfloat32m4_t op1, float16_t op2, size_t vl) {
  return vfwsub_wf(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwsub_vv_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl) {
  return vfwsub_vv(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwsub_vf_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t op1, float16_t op2, size_t vl) {
  return vfwsub_vf(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwsub_wv_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, vfloat16m4_t op2, size_t vl) {
  return vfwsub_wv(mask, maskedoff, op1, op2, vl);
}

vfloat32m8_t test_vfwsub_wf_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vfloat32m8_t op1, float16_t op2, size_t vl) {
  return vfwsub_wf(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwsub_vv_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl) {
  return vfwsub_vv(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwsub_vf_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t op1, float32_t op2, size_t vl) {
  return vfwsub_vf(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwsub_wv_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, vfloat32mf2_t op2, size_t vl) {
  return vfwsub_wv(mask, maskedoff, op1, op2, vl);
}

vfloat64m1_t test_vfwsub_wf_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, vfloat64m1_t op1, float32_t op2, size_t vl) {
  return vfwsub_wf(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwsub_vv_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl) {
  return vfwsub_vv(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwsub_vf_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t op1, float32_t op2, size_t vl) {
  return vfwsub_vf(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwsub_wv_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, vfloat32m1_t op2, size_t vl) {
  return vfwsub_wv(mask, maskedoff, op1, op2, vl);
}

vfloat64m2_t test_vfwsub_wf_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vfloat64m2_t op1, float32_t op2, size_t vl) {
  return vfwsub_wf(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwsub_vv_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl) {
  return vfwsub_vv(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwsub_vf_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t op1, float32_t op2, size_t vl) {
  return vfwsub_vf(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwsub_wv_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, vfloat32m2_t op2, size_t vl) {
  return vfwsub_wv(mask, maskedoff, op1, op2, vl);
}

vfloat64m4_t test_vfwsub_wf_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vfloat64m4_t op1, float32_t op2, size_t vl) {
  return vfwsub_wf(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwsub_vv_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl) {
  return vfwsub_vv(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwsub_vf_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t op1, float32_t op2, size_t vl) {
  return vfwsub_vf(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwsub_wv_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, vfloat32m4_t op2, size_t vl) {
  return vfwsub_wv(mask, maskedoff, op1, op2, vl);
}

vfloat64m8_t test_vfwsub_wf_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vfloat64m8_t op1, float32_t op2, size_t vl) {
  return vfwsub_wf(mask, maskedoff, op1, op2, vl);
}

