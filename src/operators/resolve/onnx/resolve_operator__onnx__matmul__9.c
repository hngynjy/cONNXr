
//this file was generated by ../../../scripts/onnx_generator/OperatorTypeResolver.py
#include "operators/onnx/operator__onnx__matmul__9.h"
#include "operators/operator_stub.h"
#include "operators.h"
#include <inttypes.h>
#include <stdio.h>

operator_executer resolve_operator__onnx__matmul__9(
    node_context *ctx
){
  printf("Resolving matmul\n");
    operator_executer executer = NULL;
    {
    uint32_t T = 0;
    printf("data_type=%d\n", ctx->inputs[0]->data_type);
    if (ctx->inputs[0]) {
        T = ctx->inputs[0]->data_type;
    }
    switch ( T ) {
        case 0: //constrained tensor is not set (maybe optional?), just take next case
        //case ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE: { executer = (operator_executer) &operator__onnx__matmul__9__T_tensor_double; break; }
        case ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT: { executer = (operator_executer) &operator__onnx__matmul__9__T_tensor_float; break; }
        //case ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16: { executer = (operator_executer) &operator__onnx__matmul__9__T_tensor_float16; break; }
        //case ONNX__TENSOR_PROTO__DATA_TYPE__INT32: { executer = (operator_executer) &operator__onnx__matmul__9__T_tensor_int32; break; }
        //case ONNX__TENSOR_PROTO__DATA_TYPE__INT64: { executer = (operator_executer) &operator__onnx__matmul__9__T_tensor_int64; break; }
        //case ONNX__TENSOR_PROTO__DATA_TYPE__UINT32: { executer = (operator_executer) &operator__onnx__matmul__9__T_tensor_uint32; break; }
        //case ONNX__TENSOR_PROTO__DATA_TYPE__UINT64: { executer = (operator_executer) &operator__onnx__matmul__9__T_tensor_uint64; break; }
        default: {
            fprintf(stderr, "[matmul] no matching type for constraint 'T' found!\n");
            break;
        }
    }
}
    if (!executer) {
      printf("Executer for matmul not found, returning stub\n");
        executer = &operator_stub;
    }
    return executer;
}
