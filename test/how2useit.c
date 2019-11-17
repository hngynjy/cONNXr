#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pb/onnx.pb-c.h"
#include "embeddedml_debug.h"
#include "embeddedml_operators.h"
#include "embeddedml_utils.h"
#include "embeddedml_inference.h"

int main()
{
  Onnx__ModelProto *model = openOnnxFile("../models/mnist/model.onnx");
  if (model == NULL)
  {
    perror("Error when opening the onnx file\n");
    exit(-1);
  }

  DEBUG_PRINT("Debugging is on");
  Debug_PrintModelInformation(model);

  // TODO Free all resources

  return 0;
}