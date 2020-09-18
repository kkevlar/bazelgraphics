cc_library(
    name="christian",
    srcs=glob([
        "*.cpp",
    ]),
    hdrs=glob([
        "*.h",
    ]),
    deps=[
        "//ext:glad",
        "//resources:reslib",
    ],
    linkopts=["-lglfw", "-ldl"],
    visibility=["//visibility:public"],
)

cc_binary(
    name="eck",
    deps=[
        ":christian",
        "//resources:reslib",
    ],
    visibility=["//visibility:public"],
)
