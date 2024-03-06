use cmake;

fn main() {
    let dst = cmake::Config::new("src/cpp_src")
        // .define("s", "YES")
        .build();
    println!("cargo:rustc-link-search=native={}", dst.display());
    println!("cargo:rustc-link-lib=static=foolib");
}
