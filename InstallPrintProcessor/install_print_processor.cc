#include <Windows.h>

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Example Usage: InstallPrintProcessor MyProcessorFile.dll MyProcessorName");
    return EXIT_FAILURE;
  }
  auto result = AddPrintProcessorA(NULL, NULL, argv[1], argv[2]);
  if (result == FALSE) {
    fprintf(stderr, "Failed to install print processor!");
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
