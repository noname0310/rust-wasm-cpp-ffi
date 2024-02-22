use wasm_bindgen::prelude::*;

#[link(name = "Test")]
extern "C"{
    pub fn test_function(i: i32) -> i32 ;
}

#[wasm_bindgen]
pub fn test_function_js(i : i32) -> i32{
    let res = unsafe{test_function(i)};
    res
}
