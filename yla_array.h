#include "yla_vm.h"
#include "yla_stack.h"

#define TYPE_ARRAY 89737

#ifndef YLA_ARRAY_H_
#define YLA_ARRAY_H_

int yla_vm_stack_array_push(yla_vm *vm);
int yla_vm_stack_add_left_array(yla_vm *vm, yla_int_type *value);
int yla_vm_stack_add_right_array(yla_vm *vm, yla_int_type *value);
int yla_vm_stack_concat_array(yla_vm *vm);

#endif /* YLA_ARRAY_H_ */