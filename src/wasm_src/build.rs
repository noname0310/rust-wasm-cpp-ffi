fn main() {
    cc::Build::new()
        .archiver("llvm-ar")
        .cpp_link_stdlib(None)
        .cpp(true)
        .files([
            "src/cpp_src/foolib.hpp",
            "src/cpp_src/foolib.cpp"
        ])
        .compile("foolib");

    println!("cargo:rerun-if-changed=src/cpp_src/foolib.hpp");
    println!("cargo:rerun-if-changed=src/cpp_src/foolib.cpp");
}
