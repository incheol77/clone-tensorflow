#ifndef TENSORFLOW_CORE_PLATFORM_INTI_MAIN_H_
#define TENSORFLOW_CORE_PLATFORM_INTI_MAIN_H_

namespace tensorflow {
namespace port {


// Platform-specific initialization routine that should be invoked by a
// main() program that uses Tensorflow.
// This performs necessary initialization on some platforms; Tensorflow
// may not work unless it has been called.
void InitMain(const char* usage, int* argc, char*** argv);

}  // namespace port
}  // namespace tensorflow

#endif // TENSORFLOW_CORE_PLATFORM_INTI_MAIN_H_
