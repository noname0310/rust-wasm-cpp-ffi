fn main() {
    cc::Build::new()
        .archiver("llvm-ar")
        .cpp_link_stdlib(None)
        .cpp(true)
        .file("libTest.cpp")
        .compile("libTest.a");
}
